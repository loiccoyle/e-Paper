/**
    @filename   :   epd5in83b_V2-demo.ino
    @brief      :   5.83inch e-paper B V2 display demo
    @author     :   Yehui from Waveshare

    Copyright (C) Waveshare     July 4 2020

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documnetation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to  whom the Software is
   furished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#include <SPI.h>
#include "epd5in83b_V2.h"
#include "imagedata.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Epd epd;
  if (epd.Init() != 0) {
    Serial.print("e-Paper init failed");
    return;
  }
  
  Serial.print("e-Paper Clear\r\n ");
  epd.Clear();
  
  Serial.print("draw image\r\n ");
  epd.DisplayPicture(IMAGE_DATA, 0);
  epd.DisplayPicture(IMAGE_DATA, 1);
  epd.DisplayPicture(IMAGE_DATA, 2);
  epd.DisplayPicture(IMAGE_DATA, 3);

  delay(2000);
  epd.Clear();
  epd.Sleep();
}

void loop() {
  // put your main code here, to run repeatedly:

}
