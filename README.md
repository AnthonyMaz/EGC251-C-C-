# EGC251-C\C++ Class Project Spring 2018

# Abstract:
For this project I intended to create a command line based personal assistant to control a microcontroller, and have a security system via a webcam. With the project I incorporated the Raspberry Pi 3 B, the Arduino UNO, Raspbian OS, a Logitech webcam, and a few different applications to run things on the back end of the program. My design idea was to upload Arduino led "sketches" to the microcontroller via a bash script every time a function was called within the C++ application. Each led pattern option that the assistant provided was written in it's own file. After the option was called, the sketch would be uploaded to the Arduino, and display the led pattern in a loop. The final option of the personal assistant would have, is a security camera. This option would call the function, which then called the scripts to run the camera and take a few pictures if there was movement.

Software Installation:
The commands that were ran, are as follows:
```bash
$ vim /etc/apt/sources.list
```
Remove the comment (#) for the below links, then write and quit:
```bash
deb http://archive.raspbian.org/raspbian wheezy main contrib non-free
deb-src http://archive.raspbian.org/raspbian wheezy main contrib non-free
```
After :wq to the sources.list, run the below commands:
```bash
sudo apt-get install arduino-mk
sudo apt-get install motion
```
Hardware Configuration: 
The commands that were ran, are as follows:
```bash
$ls -l /dev/ttyACM*
crw-rw---- 1 root dialout 188, 0 5 apr 23.01 ttyACM0 
```
Note: The above output should look similar. Also the group dialout may already exist. 
```bash
sudo groupadd dialout 				       
sudo usermod -a -G dialout <username> 
sudo chmod a+rw /dev/ttyACM0
sudo apt-get install arduino-mk
```
Sketch Implementation:
After the installation of arduino-mk the sketches were uploaded by several steps before a script was implemented. Make a directory for the sketch files, then cd into the directory. Once that is done, run the below commands:
```bash
$link ln -s /usr/share/arduino/arduino-mk
sudo mkdir blink
cd blink
```
Create ‘led’.ino file or use the ones previously written. Then create a Makefile and add the code.
```bash
$vim Makefile
Added code:
BOARD_TAG = uno (type of board)
ARDUINO_PORT = /dev/ttyACM0
ARDUINO_LIBS = 
ARDUINO_DIR  = /usr/share/arduino
include /usr/share/arduino/Arduino.mk
```
After saving the file and quitting vim, the following commands were ran to upload the sketch.
```bash
make
make upload
```

===

Led setup ino file with cpp program options:
1: nightrider
2: everyother
3: everyotherYel
4: everyotherRed
5: firsttwolasttwo
6: take a picture with motion (security).
