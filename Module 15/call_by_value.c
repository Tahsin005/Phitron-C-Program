#include<stdio.h>
void fun(int x){
    // printf("fun x er address %p\n",&x);
    x=200;
}
int main(){
    int x=10;
    // printf("main x er address %p\n",&x);
    fun(x);
    printf("main e x er value %d\n",x);
    return 0;
}