#include<stdio.h>
#include<string.h>
// void fun(int* a,int n){
//     *a=69;
//     *(a+2)=67;
// }
void fun(char* a){
    // *a='G';
    a[0]='G';
}
int main(){
    // int a[5]={10,20,30,40,50};
    // fun(a,5);
    // for(int i=0;i<5;i++){
    //     printf("%d ",a[i]);
    // }
    char a[]="Hello";
    fun(a);
    printf("%s",a);
    return 0;
}