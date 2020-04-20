#!/bin/bash

CDupload=$(cd /home/pi/Pictures/forCPPproject/sketches/everyotherRed && make upload)
Rmbuild=$(rm -rf /home/pi/Pictures/forCPPproject/sketches/everyotherRed/build-uno)

$CDupload
$Rmbuild