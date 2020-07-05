#!/bin/sh
pd-l2ork -nogui -blocksize 256 -rt /opt/dancevox/main_dancevox.pd &
sleep 2
aconnect 'Touch Board:0' 'Pure Data:0'
