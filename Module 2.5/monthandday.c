#include<stdio.h>

int main(){
    int no_of_month;
    printf("Enter the number of months: ");
    scanf("%d", &no_of_month);
    if(no_of_month==1|| no_of_month==3|| no_of_month==5|| no_of_month==7|| no_of_month==8|| no_of_month==10|| no_of_month==12) 
        printf("%d th have 31 days", no_of_month);
    else if(no_of_month==2) printf("%d th have 28/29 days", no_of_month);
    else printf("%d th have 30 days", no_of_month);
    return 0;
}