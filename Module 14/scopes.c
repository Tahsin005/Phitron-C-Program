#include<stdio.h>
//global variable
int x=500;

void fun(void){
    int s=900;
    // printf("Fun e s er address %d\n",&s);
    printf("Fun e x er address %p\n",&x);
}
int main(){
    int s=100;
    // printf("Main e s er address %d\n",&s);
    printf("Main e x er address %p\n",&x);
    fun();
    return 0;
} 