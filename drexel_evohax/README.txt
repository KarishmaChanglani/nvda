READ ME
-----------------------------------------------------------------------------------------------------------------

Drexel EvoHax
Authors: Karishma Changlani, Maissoun Ksara, Michelle Lanshee, Anna Lu, Neha Thomas
Date: 4/19/15

The following files were created for the web accessibility hackathon EvoHax

./nvda/drexel_evohax/arduino

btserial.ino
VoiceRecognitionToPython.ino

./nvda/drexel_evohax/python_scripts

webcommands.py
nvdaparser.py

------------------------------------------------------------------------------------------------------------------

Hardware Requirements:
Android OS Lollipop 5.0.1 (smartphone)
AMR_voice application 1.0.0 (free)
BT Module HC-05 JbTek ($7)
Arduino UNO ($15)

Software Requirements:
Windows 7 or higher
Nonvisual Desktop Access software (free)
	See associated dependencies of NVDA readme.txt
Python 2.7 or higher

-----------------------------------------------------------------------------------------------------------------
File description

btserial.ino is an arduino file written in C++
Allows serial port communication between HC-05 BT Module and the AMR_voice App on android.

VoiceRecognitionToPython.ino is an arduino file written in C++
AMR_voice converts vocal input from the microphone as bytes
Bytes are sent to the bluetooth module for processing to text on the arduino
Specific text commands are passed to python scripts via the shell for processing

webcommands.py is a python script
Contains functions calling various web actions and desktop actions

nvdaparser.py is a python script
Contains parsing algorithm for differentiating raw text into sentences and paragraphs
Associated variables passed to mouseHandler.py and focusHighlight.py in NVDA for conversion from text to speech

-------------------------------------------------------------------------------------------------------------------

