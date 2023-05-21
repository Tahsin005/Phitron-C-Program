#include<stdio.h>

int main(){
    int a[5]={10,20,30,40,50};
    // printf("0th index er address - %p\n",&a[0]);
    // printf("0th index er address - %p\n",a);
    // printf("Oth index er value %d\n",a[0]);
    // printf("Oth index er value %d\n",*a);
    // printf("1st index er value %d\n",a[1]);
    // printf("1st index er value %d\n",*(a+1));
    // printf("%d\n",*(1+a));
    /*
    a[1] -> *(a+1);
    *(a+1) -> a[1];
    *(1+a) -> a[1] / 1[ar];
    */
   printf("%d\n",*(a+1));
   printf("%d\n",*(1+a));
   printf("%d\n",a[1]);
   printf("%d\n",1[a]);
    return 0;
}