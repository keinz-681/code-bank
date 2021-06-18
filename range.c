#include<stdio.h>
/*
弧のカーブを算出する公式
R=((w/2)^2+h^2)/2h
※わっかり辛くてﾒﾝｺﾞ
*/
int main(void)
{
    double w,h;
    printf("w= ");
    scanf("%lf",&w);
    printf("h= ");
    scanf("%lf",&h);
    double a=w/2;
    double aa=a*a;
    double b=h*h;
    double d=2*h;
    double e=aa+b;
    double r=e/d;
    printf("R=%f",r);
    printf("入力してエンター押すと閉じます。\n");
    scanf("%lf",&timpo);    

    return 0;
}
