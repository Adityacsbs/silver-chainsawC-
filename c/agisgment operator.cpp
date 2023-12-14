#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	printf("enter all four numbers a,b,c,d\n");
	scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
	
	a+=b*c+d;
	printf("\na=%d",a);
	
}
