##Blair's Fantasy Football League Dashboard

###A dynamic LED dashboard powered by Arduino and Pi

Scope - we want to build a real-time FFL dashboard with visual/audio effects on scoring events. 

General Design - utilizing the nflgame project we will feed NFL layer data to our database.  
We will not store all of the player data in the league in real-time as it will become computationally expensive.

The Raspberry pi will connect via WiFi/Ethernet and host a local web-based interface to 
change out teams/players for display on the dashboard.
