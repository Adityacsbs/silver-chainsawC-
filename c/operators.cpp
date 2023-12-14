#include<stdio.h>
int main ()
{
	int a,b,c;
	
	printf("enter three numbers a,b,c\n");
	scanf("%d\n%d\n%d",&a,&b,&c,&c);
	
	if(a>b&&a>c){
		printf("the largest number is %d",a);
	}
	else if(b>a&&b>c){
		printf("the largest number is %d",b);
	}
	else if(a>b||c>b){
		printf("a=%d is larger than b=%d also c=%d is larger than b=%d ",a,b,c,b);
	}
	
	else{
		printf("the largest number is %d",c);
	}
	
	
	return 0;
}
