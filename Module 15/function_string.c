#include<stdio.h>
#include<string.h>
void fun(char ar[]){
    //string e length pass kora lage na
    printf("%d", strlen(ar));
}
int main(){
    char ar[20]="Hello";
    fun(ar);
    return 0;
}