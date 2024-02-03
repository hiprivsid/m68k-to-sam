  // Setup cpu pins (m68k)
  // Data
int const D1 = 2;
int const D2 = 3;
int const D3 = 5;
int const D4 = 6;
int const D5 = 7;
int const D6 = 8;
int const D7 = 13;
int const D8 = 10;
int const D9 = 11;
int const D10 = 12;
int const D11 = 26;
int const D12 = 21;
int const D13 = 22;
int const D14 = 23;
int const D15 = 24;
  // Read/Write
int const RW = 25;
  // Clock 
int const clockpin = 9;
  // address
int const address1 = 27;
int const address2 = 28;
int const address3 = 29;
int const address4 = 30;
int const address5 = 31;
int const address6 = 32;
int const address7 = 33;
int const address8 = 34;
int const address9 = 35;
int const address10 = 36;
int const address11 = 37;
int const address12 = 38;
int const address13 = 39;
int const address14 = 40;
int const address15 = 41;
int const address16 = 42;
int const address17 = 43;
int const address18 = 44;
int const address19 = 45;
int const address20 = 46;
int const address21 = 47;
int const address22 = 48;
int const address23 = 49;

void setup() {
  // Setup soft

  // Setup CLK and R/W pins  
  // Stupid way to generate frequency
  pinMode(clockpin, OUTPUT);
  // R/W
  pinMode(RW, OUTPUT);

  // Serial
  Serial.begin(9600);

  // Setup Data 
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D10, OUTPUT);
  pinMode(D11, OUTPUT);
  pinMode(D12, OUTPUT);
  pinMode(D13, OUTPUT);
  pinMode(D14, OUTPUT);
  pinMode(D15, OUTPUT);

  // address space setup
  digitalWrite(RW, LOW);
  pinMode(address1, INPUT);
  pinMode(address2, INPUT);
  pinMode(address3, INPUT);
  pinMode(address4, INPUT);
  pinMode(address5, INPUT);
  pinMode(address6, INPUT);
  pinMode(address7, INPUT);
  pinMode(address8, INPUT);
  pinMode(address9, INPUT);
  pinMode(address10, INPUT);
  pinMode(address11, INPUT);
  pinMode(address12, INPUT);
  pinMode(address13, INPUT);
  pinMode(address14, INPUT);
  pinMode(address15, INPUT);
  pinMode(address16, INPUT);
  pinMode(address17, INPUT);
  pinMode(address18, INPUT);
  pinMode(address19, INPUT);
  pinMode(address20, INPUT);
  pinMode(address21, INPUT);
  pinMode(address22, INPUT); 



  // idk
  Serial.print("address: ");

  // log about address pins on start
  int reada1 = digitalRead(address1);
  int reada2 = digitalRead(address2);
  int reada3 = digitalRead(address3);
  int reada4 = digitalRead(address4);
  int reada5 = digitalRead(address5);
  int reada6 = digitalRead(address6);
  int reada7 = digitalRead(address7);
  int reada8 = digitalRead(address8);
  int reada9 = digitalRead(address9);
  int reada10 = digitalRead(address10);
  int reada11 = digitalRead(address11);
  int reada12 = digitalRead(address12);
  int reada13 = digitalRead(address13);
  int reada14 = digitalRead(address14);
  int reada15 = digitalRead(address15);
  int reada16 = digitalRead(address16);
  int reada17 = digitalRead(address17);
  int reada18 = digitalRead(address18);
  int reada19 = digitalRead(address19);
  int reada20 = digitalRead(address20);
  int reada21 = digitalRead(address21);
  int reada22 = digitalRead(address22);
  int reada23 = digitalRead(address23);
  int resultreada = reada1+ reada2+ reada3+ reada4+ reada5+ reada6+ reada7+ reada8+ reada9+ reada10+ reada11+ reada12+ reada13+ reada14+ reada15+ reada16+ reada17+ reada18+ reada19+ reada20+ reada21+ reada22;
  Serial.println(resultreada, HEX);
}

void loop() {
  digitalWrite(clockpin, HIGH);
  delay(10);
  digitalWrite(clockpin, LOW);
}

int address_input(){
      digitalWrite(RW, LOW);
      pinMode(address1, INPUT);
      pinMode(address2, INPUT);
      pinMode(address3, INPUT);
      pinMode(address4, INPUT);
      pinMode(address5, INPUT);
      pinMode(address6, INPUT);
      pinMode(address7, INPUT);
      pinMode(address8, INPUT);
      pinMode(address9, INPUT);
      pinMode(address10, INPUT);
      pinMode(address11, INPUT);
      pinMode(address12, INPUT);
      pinMode(address13, INPUT);
      pinMode(address14, INPUT);
      pinMode(address15, INPUT);
      pinMode(address16, INPUT);
      pinMode(address17, INPUT);
      pinMode(address18, INPUT);
      pinMode(address19, INPUT);
      pinMode(address20, INPUT);
      pinMode(address21, INPUT);
      pinMode(address22, INPUT);
  }

int address_output(){
      digitalWrite(RW, HIGH);
      pinMode(address1, OUTPUT);
      pinMode(address2, OUTPUT);
      pinMode(address3, OUTPUT);
      pinMode(address4, OUTPUT);
      pinMode(address5, OUTPUT);
      pinMode(address6, OUTPUT);
      pinMode(address7, OUTPUT);
      pinMode(address8, OUTPUT);
      pinMode(address9, OUTPUT);
      pinMode(address10, OUTPUT);
      pinMode(address11, OUTPUT);
      pinMode(address12, OUTPUT);
      pinMode(address13, OUTPUT);
      pinMode(address14, OUTPUT);
      pinMode(address15, OUTPUT);
      pinMode(address16, OUTPUT);
      pinMode(address17, OUTPUT);
      pinMode(address18, OUTPUT);
      pinMode(address19, OUTPUT);
      pinMode(address20, OUTPUT);
      pinMode(address21, OUTPUT);
      pinMode(address22, OUTPUT);
  }
