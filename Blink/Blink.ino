void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for(int N = 1; N <= 50; N++) {
    Serial.print(N);
    Serial.print('\t');
    Serial.println(N*N);
  }
}

void loop() {

}
