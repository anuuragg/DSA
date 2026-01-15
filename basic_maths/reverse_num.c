#include<stdio.h>

int revNum(int num){
    int rev = 0;
    for(int i = num; i > 0; i = i / 10){
        int temp = i % 10;
        rev = rev * 10 + temp;
    }

    return rev;

}

int main(){
    int num;

    printf("Enter a number to reverse it: ");
    scanf("%d", &num);
    
    int rev = revNum(num);
    printf("reversed number: %d", rev);

    return 0;
}