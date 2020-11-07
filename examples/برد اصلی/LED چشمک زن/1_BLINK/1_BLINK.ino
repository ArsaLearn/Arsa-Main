/*
  برنامه چشمک زن led                
         pin(حالت روشن یا خاموش و اسم پایه);
  تابع تاخیر که سبب می شمو به میزان مشخص شده برنامه صبر کند  
          delay(عدد بر حسب میلی ثانیه);
 */
#include <arsalearn.h>
void setup() {
  run();
}
void loop() {
pin(led,high);
delay(1000);
pin(led,low);
delay(1000);
}
