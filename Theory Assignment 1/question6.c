#include<stdio.h>
void pass_by_value(int n){
    n=50;
    //the value of n is changed to 50
    //but any changes inside this function would not affect in main fucntion
}
int main(){
    int n=100;
    printf("The value of n before passing to the function %d\n",n);
    pass_by_value(n);
    printf("The value of n after passing the value to the function %d",n);
    return 0;
}