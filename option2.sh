#!/bin/bash

CDupload=$(cd /home/pi/Pictures/forCPPproject/sketches/everyother && make upload)
Rmbuild=$(rm -rf /home/pi/Pictures/forCPPproject/sketches/everyother/build-uno)

$CDupload
$Rmbuild