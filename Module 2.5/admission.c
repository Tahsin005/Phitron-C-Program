#include<stdio.h>

int main(){
    int phy,chem,math,total;
    printf("Enter number of all three subjects: ");
    scanf("%d %d %d", &phy, &chem, &math);
    total=phy+chem+math;
    if(math>=65 && phy>=55 && chem>=50 && (total>=190 || (math+phy)>=140))
        printf("The candidate is eligible for admission");
    else printf("The candidate is not eligible for admission")    ;
    return 0;
}