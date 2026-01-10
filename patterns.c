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
}

void symetricNumTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        for(int j = 0; j <= 2*n - (2*i + 1); j++){
            printf(" ");
        }
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }
}

void linearTriangle(int n){
    int count = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

void alphabetTriangle(){
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", alphabets[j]);
        }
        printf("\n");
    }
}

void revAlphabetTriangle(){
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 5; i >= 0; i--){
        for(int j = 0; j < i; j++){
            printf("%c", alphabets[j]);
        }
        printf("\n");
    }
}

void alphabetTriangleM(){
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 0; i <= 4; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", alphabets[i]);
        }
        printf("\n");
    }
}

void alphabetTriangleP(){
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3-i-1; j++){
            printf(" ");
        }

        for(int j = 0; j <= i; j++){
            printf("%c", alphabets[j]);
        }
        
        for(int j = i-1; j >= 0; j--){
            printf("%c", alphabets[j]);
        }
        
        for(int j = 0; j <= 3-i-1; j++){
            printf(" ");
        }
        printf("\n");
    }
}

void halfAlphabetTriangle(){
    char alphabets[5] = {'A', 'B', 'C', 'D', 'E'};
    for(int i = 0; i <= 4; i++){
        int f = 4;
        for(int j = 0; j <= i; j++){
            printf("%c ", alphabets[f]);
            f--;
        }
        printf("\n");
    }
}

void innerSpcePattern(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n-i-1; j++){
            printf("*");
        }
        for(int j = 2; j <= 2*i+1; j++){
            printf(" ");
        }
        for(int j = 0; j <= n-i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        for(int j = 0; j < 2*n - (2*i); j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void outterSpcePattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        for(int j = 0; j < 2*n - (2*i); j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= n-i-1; j++){
            printf("*");
        }
        for(int j = 2; j <= 2*i+1; j++){
            printf(" ");
        }
        for(int j = 0; j <= n-i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

void starBorder(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || j == n-1 || i == 0 || i == n-1){
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }
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

    symetricNumTriangle(4);
    printf("\n");

    linearTriangle(5);
    printf("\n");

    alphabetTriangle();
    printf("\n");

    revAlphabetTriangle();
    printf("\n");

    alphabetTriangleM();
    printf("\n");

    alphabetTriangleP();
    printf("\n");
    
    halfAlphabetTriangle();
    printf("\n");

    innerSpcePattern(5);
    printf("\n");
    
    outterSpcePattern(5);
    printf("\n");

    starBorder(4);
    printf("\n");
    
    return 0;
}