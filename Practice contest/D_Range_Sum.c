#include <stdio.h>
long long int max(long long int a, long long int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
long long int min(long long int a, long long int b){
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    long long int t;
    scanf("%lld", &t);
    while (t--){
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int ma = max(a, b);
        long long int mi = min(a, b);
        mi--;
        long long r1 = mi * (mi + 1) / 2;
        long long r2 = ma * (ma + 1) / 2;
        printf("%lld\n", r2 - r1);
    }
    return 0;
}