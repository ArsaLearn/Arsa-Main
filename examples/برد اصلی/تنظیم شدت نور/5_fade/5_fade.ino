/*
 کنترل میزان روشنایی  led                                  
          pin(عدد بین 0 تا 255 برای تنظیم میزان روشنایی,اسم پایه);  
    تابع تاخیر که سبب می شمو به میزان مشخص شده برنامه صبر کند                  
                                 delay(عدد بر حسب میلی ثانیه);
                                 مشخص کردن قسمتی از حافظه برای ذخیر سازی یک مقدار که نام حافظه را به دلخواه میشود انتخاب کرد  
                                 int یعنی قسمتی از حافظه را انتخاب می کند
                                     i  میتونه هر اسمی به انگلیسی داشته باشه و کاملا اختیاریه
                                   مقدار اولیه را مساوی صفر قرار دادیم ;0=                                       
i = i + 1; قسمتی از حافظه را مقدارش با یک جمع کردیم و حاصل را قرار دادیم داخل همون حافظه و عدد حافظه آبدیت می شود
اگر شرط صحیح باشه جلوی این دستور هر برنامه ای باشد اجرا می شود (شرط)if                
                           هنگامی که مقدار i  به عدد 255 به بالا برسد طبق این شرط دستور جلود ()if اجرا می شود و مقدار که در حافظه ذخیره شده را صفر می کند
 */
#include <arsalearn.h>
int i = 0;
void setup() {
  run();
}
void loop() {
  pin(led , i);
  i = i + 1;
  delay(10);
  if(i > 255) i = 0;
}
