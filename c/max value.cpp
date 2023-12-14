#include<stdio.h>

int main()
{
	int i,j;
	
	i=2;
	
	while(i>0){
		j=1;
		i++;
	}
	printf("the maximum value of integer is %d\n",j);
	printf("the value after overflowing is %d\n",i);
	
	
	return 0;
}
