#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    int count_tiger=0,count_pathan=0,count_draw=0;
    for(int i=1;i<=test;i++){
        int x1,x2;
        scanf("%d %d",&x1,&x2);
        if(x1>x2){
            count_tiger++;
        }
        else if(x1<x2){
            count_pathan++;
        }
        else if(x1==x2){
            count_draw++;
        }
    }
    if(count_tiger>count_pathan){
        printf("Tiger");
    }
    else if(count_pathan>count_tiger){
        printf("Pathan");
    }
    else if(count_tiger==count_pathan){
        printf("Draw");
    }
    return 0;
}