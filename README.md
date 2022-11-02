### GhostWeb-IDE
<p align="center">
<a href="https://rubika.ir/pro_Team_25"><img src="https://raw.githubusercontent.com/Arashvscode/GhostWeb_IDE/main/icon-512.png" width="150" high="150"/>
</a>
</p>

Report program bugs here, it will be checked


اینجا میتونید باگ های خودتان رو از طریق Issues

ارسال کنید


## دریافت از
<p align="center">
<a href="https://myket.ir/app/Ninja.coder.Ghostemane.code?utm_source=search-ads-gift&utm_medium=cpc"><img src="https://myket.ir/core/images/logo/get-en.png" width="200"/> </a>
</p>

# 1.4.1

- اضافه شدن زبان جدید
- رفع باگ ها و کراش برنامه
- اضافه شدن ذخیره خودکار
- اضافه شدن ترمینال shell
- رفع باگ مولتی تب
- و اضافه شدن چند ویژگی دیگر


## 1.4.2

- رفع خطای مولتی تب فایل های حذف شده


- تغییر اساسی گرافیک

- ویژگی های جدید در دست ساخت است


## 1.4.3

- انتخاب چند گزینه ای برای برش و کپی و حذف اضافه شد
- انیمیشن در کد ادیتور و سایر بخش ها اضافه شد
- سرعت کد ادیتور به صورت چشم گیری افزایش یافت
- تم را میتوانید از دارای هم اجرا کنید اگر فایل موجود نبود
- در حال حاظر امکان تغییر نام فایل وجود ندارد ولی هم اکنون این گزینه است اما غیر فعال است
- پنل دارای های کپی کات و ... عوض شد
- ویژگی های بیشتری بزودی بازنویسی میشوند
- اضافه شدن دست رسی به کارت خارجی
- موزیک پلیر اضافه شد برای نمایش اهنگ که میخواهید به صفحات وب خودتون اضافه کنید
- پیش نمایش موزیک و فیلم اضافه شد
- کنسول جاوا اسکریپت اضافه شد مانند کروم ولی به صورت انلاین چیزی حدور 700 کیلو بایت از نت شما مصرف میشود
- ویژگی فشرده کردن پروژه و استخراج پروژه با فرمت .web اضافه شد
- اضافه شدن ماژول رنگ های اصلی
- اضافه شدن زبان php و بروز شدن برخی از زبان ها و رفع باگ تکمیل کننده خودکار متن
- تحلیل کننده کد بهتر شد این بار با پروگس بار نمایش داده میشود
 با تشکر از محمد و امیر علی و بقیه دوستان در اپدیت این برنامه همواره به ما کمک میکنند 


## 1.4.4

- رفع خطای تجزیه کارت خارجی
- پروژه های web  را سریع تر استخراج کنید فلن ساخت ممکن نیست ولی با برنامه های دیگر فشرده کنید

- رفع مشکل مسیر D8 tools حالا مسیر فعلی رو نمایش میده
- این امکان وجود داره که فایل های Apk رو نصب کنید
- پیش نمایش حروف اول کلمات کلیدی مانند اندروید استدیو
- پیش نمایش سریع تر شد در عکس و فیلم و اهنگ
- نمایش عکس های .tiff و همچین تغییر دادن به jpg png bmp و برعکس
- انمیشن کد ادیتور دستی شد به دلخواه میتونید خاموش و روشن کنید 
- موقعیت اسکرول ویو عمودی و افقی رو خاموش روشن کنید
- برای اعمال تم جدید پوشه GhoatWeb Ide حتمان یک بار پاک کنید


## 1.4.5

- حالت موبایل و لپ تاپ فعال شد
- حالا میتونید در بخش title دامنه خودتون رو مشاهده کنید
- اگر html شما دارای عکس باشد نمایش خواهد داد شد
- انیمیشن کد ادیتور نسبت به قبل روان تر شد
- کد های جاوا اسکریپت هم اکنون در کنسول هم اجرا میشون و خطا ها به خوبی نمایش داده میشوند
- کنسول قدیمی جاوا اسکریپت حذف شد و کنسول جدید اضافه شد 
- تمام اکتیوتی ها دارای فونت شدن
- دریافت پس زمینه عکس از سیستم به جای پس زمینه رنگ
- الگوریتیم جدید جستجو جایگزین و جایگزین کردن همه

- [x] اماده انتشار
### Code Testi 

``` html
     <!--code by Ghost web IDE version 1.4.3-->
<!--بهتر است این قسمت حذف نشود -->
<html lang="en">
	<head>
		<!--meta code dont Romved-->
		<meta charset="UTF-8">
		<!--code Style -->
		<style>
		*{
		background-color: black;
		text-align: center;
		}
		p , h1 {
		font-weight: normal;
		color: #ffffb9;
		}
		</style>
		</head>
		<!--class Style -->
	<div class="Ghost">
	<!--Text Styles -->
	<h1>Hello word to Ghost web</h1>
	<p>in paiam faqet bari test ast na hish aml card digeh</p>
		</div>
	<!--End codes good luck code by ninja coder-->
	</html>


```
### ماژول زیبا
```cpp
 #include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_opengl.h>
#include "triangle_renderer.hpp"

int main(int argc, char *argv[])
{
	if (!al_init())
	{
		fprintf(stderr, "Error not Open File");
		return 1;
	}

	ALLEGRO_DISPLAY *display = al_create_display(640, 480);
	if (display == NULL)
	{
		fprintf(stderr, "File not Found\n");
		return 1;
	}

	
	triangle_init();

	while (true)
	{
		
		triangle_render(al_get_time() * 1000);
		
		al_flip_display();
	}

	al_destroy_display(display);
	return 0;
}
```
