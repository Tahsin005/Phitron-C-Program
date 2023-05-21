#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //exact row
    // int e;
    // scanf("%d",&e);
    // for(int i=0;i<m;i++){
    //     printf("%d ",a[e][i]);
    // }

    //exact column
    int c;
    scanf("%d",&c);
    for(int i=0;i<n;i++){
        printf("%d ",a[i][c]);
    }

    return 0;
}