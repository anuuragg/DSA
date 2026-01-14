#include<stdio.h>

int countDigits(int num){
    int count = 0;
    while(num > 0){
        count++;
        num = num / 10;
    }
    return count;
}

int main(){
    int num;
    
    printf("Enter a number to count its digits: ");
    scanf("%d", &num);

    int digits = countDigits(num);

    printf("The number %d has %d digits.", num, digits);

    return 0;
}
