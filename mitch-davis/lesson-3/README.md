# Determining serial port
- `ls /dev/ | grep ACM`

# Ways to uploading
- `sudo avrdude -C ../etc/avrdude.conf -p atmega328p -c stk500v1 -P /dev/ttyACM0 -b 19200 -U lfuse:w:0xF2:m`
