#include<stdio.h>
int main(void)
{
    int a,b,c;
    double hensati;
    while(1)
    {
        printf("lineの友達の数:");
        scanf("%d",&a);
        printf("Twitterのフォロワー数:");
        scanf("%d",&b);
        c=a-b;
        hensati=c/10;
        printf("あなたのリア充偏差値は%fです。\n",hensati+50);
    }
return 0;
}