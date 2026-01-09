#include <stdio.h>

typedef enum { false, true } bool;

void squareStarPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
}

void triangleStarPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void triangleNumberPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}

void tNumberPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
}

void revStarPattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            printf("*");
        }
        printf("\n");
    }
}

void revNumberPattern(int n){
    for(int i = 0; i < n; i++){
        int z = 1;
        for(int j = n; j > i; j--){
            printf("%d", z);
            z++;
        }
        printf("\n");
    }
}

void starTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*i+1; j++){
            printf("*");
        }
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        printf("\n");
    }
}

void revStarTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*n - (2*i+1); j++){
            printf("*");
        }
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        printf("\n");
    }
}

void mixedStarTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*i+1; j++){
            printf("*");
        }
        for(int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*n - (2*i+1); j++){
            printf("*");
        }
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        printf("\n");
    }
}

void mixedStarHalf(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void binaryTriangle(int n){
    int z = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", z % 2);
            z++;
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    
    squareStarPattern(5);
    printf("\n");
    triangleStarPattern(5);
    printf("\n");
    triangleNumberPattern(5);
    printf("\n");
    tNumberPattern(5);
    printf("\n");
    revStarPattern(5);
    printf("\n");
    revNumberPattern(5);
    printf("\n");
    starTriangle(5);
    printf("\n");
    revStarTriangle(5);
    printf("\n");
    mixedStarTriangle(5);
    printf("\n");
    mixedStarHalf(5);
    printf("\n");
    binaryTriangle(5);
    printf("\n");

    return 0;
}