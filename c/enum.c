#include<stdio.h>

enum days {sun,mon,tues,wed,thrus,fri,sat};

void print_day ( 8--enum day d)
{
    switch(d){
        case sun: printf("sunday");break;
        case mon: printf("monday");break;
        case tues: printf("tuesday");break;
        case wed: printf("wednesday");break;
        case thrus: printf("thrusday");break;
        case fri: printf("friday");break;
        case sat: printf("saturday");break;
        default : printf("%d is an error",d);

    }
}enum day next_day{enum day d}{
    return(d + 1 % 7);

}
int main(){ 
    
    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    
    print_day(next_day(today));
    printf("\n\n");

    return 0;

}