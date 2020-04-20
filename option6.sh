#!/bin/bash

LoadJpg=/home/pi/Pictures/forCPPproject/loadimage.sh
$Rmjpg=$(rm -f /home/pi/Pictures/motion/pictures/*)

motion=motion 
time=10s
${motion} &
sleep $time
kill %1
$LoadJpg 
$Rmjpg