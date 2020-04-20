#!/bin/bash

CDupload=$(cd /home/pi/Pictures/forCPPproject/sketches/firsttwolastwo && make upload)
Rmbuild=$(rm -rf /home/pi/Pictures/forCPPproject/sketches/firsttwolastwo/build-uno)

$CDupload
$Rmbuild