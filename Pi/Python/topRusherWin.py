import nflgame, serial, time 


#This opens the serial port
arduinoPort = serial.Serial(port='COM4', baudrate=9600)


#This digs into the nflgame data
games = nflgame.games(2016, week=1)
players = nflgame.combine_game_stats(games)
for p in players.rushing().sort('rushing_yds').limit(1):
    msg = '%s %d carries for %d yards and %d TDs'
    print msg % (p, p.rushing_att, p.rushing_yds, p.rushing_tds)
    time.sleep(2)
    name = '%s' % (p)
    print name 
    
    
    #send byte data to the Arduino
    arduinoPort.write(name.encode())


print arduinoPort.readline()
arduinoPort.close()