#!/bin/bash

CDupload=$(cd /home/pi/Pictures/forCPPproject/sketches/everyotherYel && make upload)
Rmbuild=$(rm -rf /home/pi/Pictures/forCPPproject/sketches/everyotherYel/build-uno)

$CDupload
$Rmbuild