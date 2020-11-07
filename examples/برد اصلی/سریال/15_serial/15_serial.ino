/*
روشن و خاموش کردن led با دستور r و t                               
این دستور Serial.available در هنگامی که عبارتی ارسال شود به if اجازه می دهد که وارد دستورات بشود       
در صورتی که هیچ اطلاعاتی از سریال ارسال نشده باشد این if شرطش غلط است و وارد  زیر برنامه هاش نمی شود       
data_ = Serial.read(); این دستور اطلاعاتی که از سریال گرفته است را ذخیره می کند در متغیر 
*/
#include <arsalearn.h>
int data_=0;
void setup() {
  run();
}
void loop() {
  if(Serial.available())
  {
    data_ = Serial.read();
    if(data_ == 'r')pin(led,high);
    if(data_ == 't')pin(led,low);
  }
}
