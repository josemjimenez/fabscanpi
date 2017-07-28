# pruebeteo
MIT License

Copyright (c) [2017] [Jose Jimenez]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

This changes intend to provide laser orientation for FabScanPi. 
To do so is necessary to give dir_ini parameter in laser section of default.config.json file in /etc/fabscanpi directory
This parameter is read by the modified FSSerial.py file in /usr/local/lib/python2.7/dist-packages/FabScanPi-0.4.3-py2.7.egg/fabscan/scanner/laserscanner
Then the value provided is communicated to arduino througt G5 funcion implemented in firmware v.20170726.hex that has to be put in
/usr/local/lib/python2.7/dist-packages/FabScanPi-0.4.3-py2.7.egg/fabscan/firmware directory

