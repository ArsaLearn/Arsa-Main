/*
نمایش مقدار شمارش با ارسال دستور s از طریق سریال مانیتور کامپیوتر                
دستور ++p هر بار اجرا می شود یک واحد به p اضافه می شود                       
سه تا متغییر تعریف شده که مقدار اولیه آن ها صفر شده                            
هنگامی که دستور s از طریق سریال مانیتور ارسال می شود به سمت برد اصلی با توسط دستور زیر مقدار p نمایش می دهد    
توسط دستور Serial.println عبارتی که داخل پرانتز نوشته شده را در سریال مانیتور کامپیوتر می توانید ببنید       
 */
#include <arsalearn.h>
int i = 0,p = 0,data_=0;
void setup() {
  run();
}
void loop() {
  i = pin(key);
  if(i == up) 
  {
    p++;
  }
  data_ = Serial.read();
  if(data_ == 's') Serial.println(p);
}
