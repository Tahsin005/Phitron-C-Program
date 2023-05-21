#include<stdio.h>

int main(){
    //While
    int i;
    i=1;
    while(i<=5){
        printf("%d\n", i);
        i++;
    }
    //Do while---runs atleast 1 times
    i=99;
    do{
        printf("%d\n", i);
        i++;
    } while(i<=5);
    return 0;
}