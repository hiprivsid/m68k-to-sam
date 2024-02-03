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
  // Addres
int const addres1 = 27;
int const addres2 = 28;
int const addres3 = 29;
int const addres4 = 30;
int const addres5 = 31;
int const addres6 = 32;
int const addres7 = 33;
int const addres8 = 34;
int const addres9 = 35;
int const addres10 = 36;
int const addres11 = 37;
int const addres12 = 38;
int const addres13 = 39;
int const addres14 = 40;
int const addres15 = 41;
int const addres16 = 42;
int const addres17 = 43;
int const addres18 = 44;
int const addres19 = 45;
int const addres20 = 46;
int const addres21 = 47;
int const addres22 = 48;

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

  // addres space setup
  digitalWrite(RW, LOW);
  pinMode(addres1, INPUT);
  pinMode(addres2, INPUT);
  pinMode(addres3, INPUT);
  pinMode(addres4, INPUT);
  pinMode(addres5, INPUT);
  pinMode(addres6, INPUT);
  pinMode(addres7, INPUT);
  pinMode(addres8, INPUT);
  pinMode(addres9, INPUT);
  pinMode(addres10, INPUT);
  pinMode(addres11, INPUT);
  pinMode(addres12, INPUT);
  pinMode(addres13, INPUT);
  pinMode(addres14, INPUT);
  pinMode(addres15, INPUT);
  pinMode(addres16, INPUT);
  pinMode(addres17, INPUT);
  pinMode(addres18, INPUT);
  pinMode(addres19, INPUT);
  pinMode(addres20, INPUT);
  pinMode(addres21, INPUT);
  pinMode(addres22, INPUT); 



  // idk
  Serial.print("addres pins");

  // log about addres pins on start
  Serial.println(digitalRead(addres1));
  Serial.println(digitalRead(addres2));
  Serial.println(digitalRead(addres3));
  Serial.println(digitalRead(addres4));
  Serial.println(digitalRead(addres5));
  Serial.println(digitalRead(addres6));
  Serial.println(digitalRead(addres7));
  Serial.println(digitalRead(addres8));
  Serial.println(digitalRead(addres9));
  Serial.println(digitalRead(addres10));
  Serial.println(digitalRead(addres11);
  int reada12 = digitalRead(addres12);
  int reada13 = digitalRead(addres13);
  int reada14 = digitalRead(addres14);
  int reada15 = digitalRead(addres15);
  int reada16 = digitalRead(addres16);
  int reada17 = digitalRead(addres17);
  int reada18 = digitalRead(addres18);
  int reada19 = digitalRead(addres19);
  int reada20 = digitalRead(addres20);
  int reada21 = digitalRead(addres21);
  int reada22 = digitalRead(addres22);
  Serial.println();
};

void loop() {
  digitalWrite(clockpin, HIGH);
  delay(10);
  digitalWrite(clockpin, LOW);
}

int addres_input(){
      digitalWrite(RW, LOW);
      pinMode(addres1, INPUT);
      pinMode(addres2, INPUT);
      pinMode(addres3, INPUT);
      pinMode(addres4, INPUT);
      pinMode(addres5, INPUT);
      pinMode(addres6, INPUT);
      pinMode(addres7, INPUT);
      pinMode(addres8, INPUT);
      pinMode(addres9, INPUT);
      pinMode(addres10, INPUT);
      pinMode(addres11, INPUT);
      pinMode(addres12, INPUT);
      pinMode(addres13, INPUT);
      pinMode(addres14, INPUT);
      pinMode(addres15, INPUT);
      pinMode(addres16, INPUT);
      pinMode(addres17, INPUT);
      pinMode(addres18, INPUT);
      pinMode(addres19, INPUT);
      pinMode(addres20, INPUT);
      pinMode(addres21, INPUT);
      pinMode(addres22, INPUT);
  }

int addres_output(){
      digitalWrite(RW, HIGH);
      pinMode(addres1, OUTPUT);
      pinMode(addres2, OUTPUT);
      pinMode(addres3, OUTPUT);
      pinMode(addres4, OUTPUT);
      pinMode(addres5, OUTPUT);
      pinMode(addres6, OUTPUT);
      pinMode(addres7, OUTPUT);
      pinMode(addres8, OUTPUT);
      pinMode(addres9, OUTPUT);
      pinMode(addres10, OUTPUT);
      pinMode(addres11, OUTPUT);
      pinMode(addres12, OUTPUT);
      pinMode(addres13, OUTPUT);
      pinMode(addres14, OUTPUT);
      pinMode(addres15, OUTPUT);
      pinMode(addres16, OUTPUT);
      pinMode(addres17, OUTPUT);
      pinMode(addres18, OUTPUT);
      pinMode(addres19, OUTPUT);
      pinMode(addres20, OUTPUT);
      pinMode(addres21, OUTPUT);
      pinMode(addres22, OUTPUT);
  }
