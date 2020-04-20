#!/bin/bash

CDupload=$(cd /home/pi/Pictures/forCPPproject/sketches/nightrider && make upload)
Rmbuild=$(rm -rf /home/pi/Pictures/forCPPproject/sketches/nightrider/build-uno)

$CDupload
$Rmbuild