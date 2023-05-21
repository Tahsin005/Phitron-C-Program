#include<stdio.h>
// void fun(int arr[],int n){
void fun(int* arr,int n){
    //array te size pass korte hoi..naile kaj kore na
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    fun(arr,5);
    return 0;
}