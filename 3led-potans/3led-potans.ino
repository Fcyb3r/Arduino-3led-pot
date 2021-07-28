// 3led night lamb project

int kled=2;//kr led 2nolu pine bağlandı
int sled=3; 
int yled=4;

 //pot degerini d harfine atadım
int pot=A0; //potansiyometreyi A0(analog sıfıra bağladık)

void setup() {
//Bu kısım unutmuyoruz bir kere çalıştırılıyor!!!

pinMode(kled,OUTPUT);
pinMode(sled,OUTPUT);  //3 led için out çektik
pinMode(yled,OUTPUT);

pinMode(pot,INPUT);
Serial.begin(9600);
}

void loop() {

        int potdeg=analogRead(pot);
  Serial.println("POTANSİYOMETRE DEĞERİ:");
  Serial.println(potdeg);
  delay(100); //Bu sayı ne kadar az olur ise değer aktarımı o kadar hızlı olur
  analogWrite(kled,potdeg/4);
  analogWrite(sled,potdeg/4);
  analogWrite(yled,potdeg/4);



  
}
