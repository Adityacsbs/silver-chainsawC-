#include<stdio.h>

int main ()
{
	int a=9;
	float b=5;
	int increment,decrement, modulus;
	
	 printf("%f\n",a+b);
	 printf("%f\n",a-b);
	 printf("%f\n",a*b);
	 printf("%f\n",a/b);
	 modulus=9%6;
	printf("%d\n",modulus);
	
	increment=a++;
	printf("%f\n",a+b);
	
		
	decrement=--a;
	printf("%f\n",a-b);
		decrement=a--;
		printf("%f",a-b);
	
	
	
	
	
	
	return 0;
}
