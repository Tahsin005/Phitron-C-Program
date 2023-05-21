#include <stdio.h>
#include <limits.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int j = k - 1;
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        if (i == j){   
            printf("%d ", min);
            j += k;
            min = INT_MAX;
        }
    }
    if(n % k != 0){
        printf("%d ", min);
    }
    return 0;
}