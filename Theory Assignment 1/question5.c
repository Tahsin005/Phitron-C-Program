#include<stdio.h>
#include<string.h>
int is_palindrome(char str[],int len){
    int palindrome=1; 
    for(int i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            palindrome=0; 
            break;
        }
    }
    if(palindrome){
        return 1;
    }    
    else{
        return 0;
    }
}
int main(){
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);

    int result=is_palindrome(str,len);
    if(result){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
   return 0;
}
