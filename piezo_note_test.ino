int frequencies[] = {2273, 2145, 2025, 1911, 1805, 1703, 1607, 1517, 1432, 1351, 1275, 1204, 1136};
int note = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 for(int i =0; i<250; i++){
    digitalWrite(11, HIGH);
    delayMicroseconds(frequencies[note]);
    digitalWrite(11, LOW);
    delayMicroseconds(frequencies[note]);
 }
 if(note>12){note = 0;}else{note++;}
}
