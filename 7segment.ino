int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
int arr[10][7]={
  {1,1,1,1,1,1,0},//0
  {0,1,1,0,0,0,0},//1
  {1,1,0,1,1,0,1},//2
  {1,1,1,1,0,0,1},//3
  {0,1,1,0,0,1,1},//4
  {1,0,1,1,0,1,1},//5
  {1,0,1,1,1,1,1},//6
  {1,1,1,0,0,0,0},//7
  {1,1,1,1,1,1,1},//8
  {1,1,1,1,0,1,1},//9
  };
  int cnt=2;
void setup() {
 // Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
 // pinMode(dt,OUTPUT);
}

void loop() {
  for(int i=0;i<10;i++)
  {
      cnt=2;
      for(int j=0;j<7;j++)
      {
        digitalWrite(cnt,arr[i][j]);
        cnt++;
      }
      delay(1000);
  }
 // Serial.println(cnt++);
}
