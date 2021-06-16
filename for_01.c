#include<stdio.h>
int main(void)
{
    int n,m,sum=0;
    printf("n="); 
    scanf("%d",&n);
    printf("m="); 
    scanf("%d",&m);
    if (n<0 || m<0 || m<=n)
    {
        printf("入力した値が間違っています\n"); 
        return 0;
    }
    int i;
    for ( i = 1; n <=m; n++){
    sum+=n;
    }
    if (sum>=0)
    {
        printf("sum= %d",sum);
        return 0;
    }
    if (sum<=0)
    {
        printf("sum=%d オーバーフロー\n",sum);
    }
return 0;
}