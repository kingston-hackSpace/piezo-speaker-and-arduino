<h1>Piezo buzzer</h1>

<p>Piezo buzzers are used for making beeps, tones and alerts. The ones we have in hackSpace are a little but loud! Drive it with 3-30V peak-to-peak square waves. To use, connect one pin to ground (either one) and the other pin to a square wave out from a timer or microcontroller. For the loudest tones, stay around 4 KHz, but they do work quite well from 2KHz to 10KHz. The positive would be connected to one of the digital pins on your Arduino, the tone values will be transmitted though the buzzer.</p>

<p>You can create square waves manually using microsecond delays between pin oscilations. The amount of delay will change the wavelength of the note. See example sketch for details</p>

<p>Alternatively, the arduino language comes with a tone command that can be used in place of a manual switching. More can be found here...</p>

<link>https://docs.arduino.cc/language-reference/en/functions/advanced-io/tone/</link>
