#include<stdio.h>

int main()

{

    int n,z=0;

    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)

    {

        scanf("%d", &arr[i]);

    }

    for(int i=1;i<n;i++)

    {

        if(arr[0]==arr[i])

            z++;

    }

    printf("%d", n-z-1);




    return 0;

}
