#include<stdio.h>
#include<stdbool.h>

bool palindrome(int num){
    int rev = 0;
    for(int i = num; i > 0; i = i / 10){
        int temp = i % 10;
        rev = rev * 10 + temp;
    }

    if (num == rev){
        return true;
    } else {
        return false;
    }
}

int main(){
    int num;

    printf("Enter a number to check whether it's palindrome or not: ");
    scanf("%d", &num);

    if(palindrome(num)){
        printf("Palindrome Number");
    } else{
        printf("Not Palindrome");
    }
}