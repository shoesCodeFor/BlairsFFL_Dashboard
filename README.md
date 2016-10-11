##Blair's Fantasy Football League Dashboard

###A dynamic LED dashboard powered by Arduino and Pi

Scope - we want to build a real-time FFL dashboard with visual/audio effects on scoring events. 

General Design - utilizing the nflgame project (we forked this in a separate repo) we will feed NFL layer data to our database.  
We will not store all of the player data in the league in real-time as it will become computationally expensive.

The Raspberry pi will connect via WiFi/Ethernet and host a local web-based interface to 
change out teams/players for display on the dashboard.

This repo will contain tools for the Pi interface and Arduino code to run LEDs from a serial feed.

In our <a href="https://github.com/shoesCodeFor/nflgame">fork of nflgame</a> you will find a couple python utilities and a search tool to grab players GSIS ID which is used for stat tracking.

<a href="https://github.com/shoesCodeFor/nflgame">Blair's FFL Dashboard fork of nflgame by BurntSushi</a>
