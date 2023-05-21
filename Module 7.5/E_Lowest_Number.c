#include <stdio.h>

int main() {
  int n,min,pos;
  scanf("%d", &n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }
  
  min=arr[0];
  pos=0;

  for(int i=1;i<n;i++){
    if(arr[i]<min) {
      min=arr[i];
      pos=i;
    }
  }
  printf("%d %d", min, pos+1);
  return 0;
}
