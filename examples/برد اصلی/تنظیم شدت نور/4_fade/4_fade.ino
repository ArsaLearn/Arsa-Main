/*
 کنترل میزان روشنایی  led                                  
          pin(عدد بین 0 تا 255 برای تنظیم میزان روشنایی,اسم پایه);  
    تابع تاخیر که سبب می شمو به میزان مشخص شده برنامه صبر کند                  
                                 delay(عدد بر حسب میلی ثانیه);
 */
#include <arsalearn.h>
void setup() {
  run();
}
void loop() {
  pin(led,0);
  delay(200);

  pin(led,50);
  delay(200);

  pin(led,100);
  delay(200);

  pin(led,150);
  delay(200);

  pin(led,200);
  delay(200);

  pin(led,250);
  delay(200);
}
