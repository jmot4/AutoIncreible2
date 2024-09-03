// C++ code
//
bool band=false;
int j=14;
void setup()
{
  for(int i=2;i<=13;i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  if(band==false)
    j--;
  else
    j++;
  digitalWrite(j,HIGH);
  delay(200);
  digitalWrite(j,LOW);
   
  if(j==2)
    band=true;
  if(j==14)
    band=false;
}