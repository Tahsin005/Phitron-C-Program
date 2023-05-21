#include<stdio.h>
/*Write a C program to accept a coordinate point in an XY 
coordinate system and 
determine in which quadrant the coordinate point lies.*/
int main(){
    float x,y;
    printf("Enter the X and Y axis of the coordinate system: ");
    scanf("%f %f", &x, &y);
    if(x>0 && y>0) printf("1st quadrant");
    else if(x<0 && y>0) printf("2nd quadrant");
    else if(x<0 && y<0) printf("3rd quadrant");
    else if(x>0 && y<0) printf("4th quadrant");
    else if(x==0 && y==0) printf("At origin");
    return 0;
}