/*
کنترل led توسط بلوتوٍث                                               
                          bt_name("ArsaLearn"); از طریق این دستور نام دلخواه را قرار میدهیم
                                   bt_pin(); این دستور عدد پایه از بلوتوث بدست می آید
پیش فرض هنگامی که بلوتوث عدد ندارد پایه خروجی دستور بالا 100 است که باید با دستور شرط جلوگیری کرد هنگام نبودن شماره پایه
      bt_av() این دستور هنگامی که اطلاعات بر درگاه بلوتوث میآید این دستور اجازه می دهد اطلاعات اجرا شود
*/
#include <arsalearn.h>
int pin_num,pin_num_copy;
void setup() {
  run();
  bt_name("ArsaLearn");
}
void loop() {
  if(bt_av())
  {
    pin_num_copy = bt_pin();
    if(pin_num_copy != 100) pin_num = pin_num_copy;
    pin(pin_num,bt_data());
  }
delay(2);
}
