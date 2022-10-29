#include<stdio.h>
int main()
{	double a=0;
    double b;
	printf("请输入购买的斤数：",a);
    scanf("%lf",&a);
	if(a<5)
	{
	b=a*3;
	} 
 	else
	{
	b=15+(a-5)*2.4;
	}
	 printf("应付数额：%f元",b);
	 return 0;
}