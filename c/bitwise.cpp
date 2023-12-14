#include<stdio.h>
int main()
{
	int x,y,z;
	
	printf("enter three numbers x,y,z\n");
	scanf("%d\n%d\%d",&x,&y,&z);
	
	printf("answers\n");
	printf("%d\n",x|y);
	printf("%d\n",y|z);
	printf("%d\n",y|z);
	printf("%d\n",x&z);
	printf("%d\n",y&z);
	
	return 0;
	
	
}

