/*
 
1)           2)             3)                4)             5)            6)       7)             8)           9)           10)          11)         12)        13)            14)           15)         16)       17)               18)            19)           20)       21)              22)              23)             24)                  25)             26)             27)             28)          29)                      30)              31)        32)                 33)            34)             35)               36)  
                  
*            * * * * *      * * * * *              *         *            *         1             A            a            1            A           a          *********     * * * * *        *           *         P                1 2 3 4 5      5 5 5 5 5      *        1                1                 1         1   2   3   4   5            1            *             * * * * *       1      5        15                  1      1             1        1 1 1 1 1              1         1 2 3 4 5       * * * * * *      * * * * * *                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
* *          * * * *          * * * *            * *        ***          * *        1 2           A B          a b          2  3         B C         b c         *******       * * * *        ***         * *        P I              1 2 3 4        4 4 4 4       * *       2 6              2 9             1 2 1       16  17  18  19  6          2 1 2          * *           *       *         2  4          14  13                2  2             2 2          2 2 2 2            1 2           1 2 3 4       * *     * *       *       *
* * *        * * *              * * *          * * *       *****        * * *       1 2 3         A B C        a b c        4  5  6      D E F       d e f        *****         * * *        *****       *   *       P I Y            1 2 3          3 3 3        *   *      3 7 10           3 8 10         1 3 3 1      15  24  25  20  7        3 2 1 2 3        * * *         *       *           3           12  11  10              3            3 3 3            3 3 3          1 2 3             1 2 3       *   * *   *         *   * 
* * * *      * *                  * *        * * * *      *******      * * * *      1 2 3 4       A B C D      a b c d      7  8  9      G H I J     g h i j       ***           * *        *******     *     *      P I Y U          1 2            2 2         *     *     4 8 11 13        4 7 11 14     1 4 6 4 1     14  23  22  21  8      4 3 2 1 2 3 4      * * * *       *       *         2  4          9   8   7   6         4  4         4 4 4 4              4 4        1 2 3 4               1 2       *   * *   *          * *
* * * * *    *                      *      * * * * *     *********    * * * * *     1 2 3 4 5     A B C D E    a b c d e    10 11 12     K L M N O   k l m n o      *             *          *****       *   *       P I Y U S        1              1          *********    5 9 12 14 15     5 6 12 13 15                13  12  11  10  9    5 4 3 2 1 2 3 4 5    * * *         * * * * *       1       5       5   4   3   2  1    5       5    5 5 5 5 5                5      1 2 3 4 5                 1       * *     * *           *
                                                                                                                                                                                              ***         * *        P I Y U S H                                                                                                                                    * *                                                                                                                                              * * * * * *
                                                                                                                                                                                               *           *                                                                                                                                                        *                                     
                                                                                                                                                                                                                            
*/

#include <stdio.h>
#include <string.h>

//pattern 1
void pat_1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//pattern 2
void pat_2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
//pattern 3
void pat_3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

//pattern 4
void pat_4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

//pattern 5
void pat_5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-(i-1) && j<=n+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//pattern 6
void pat_6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-(i-1) && j<=n+(i-1)){
                if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//pattern 7
void pat_7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
}

//pattern 8
void pat_8(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c\t",64+j);
        }
        printf("\n");
    }
}

//pattern 9
void pat_9(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c\t",96+j);
        }
        printf("\n");
    }
}

//PATTERN 10
void pat_10(int n){
    for(int i=1;i<=n;i++){
        int k=(i*i-i)/2;
        for(int j=1;j<=i;j++){
            printf("%d\t",j+k);
        }
        printf("\n");
    }
}

//PATTERN 11
void pat_11(int n){
    for(int i=1;i<=n;i++){
        int k=(i*i-i)/2;
        for(int j=1;j<=i;j++){
            printf("%c\t",64+j+k);
        }
        printf("\n");
    }
}

//PATTERN 12
void pat_12(int n){
    for(int i=1;i<=n;i++){
        int k=(i*i-i)/2;
        for(int j=1;j<=i;j++){
            printf("%c\t",96+j+k);
        }
        printf("\n");
    }
}

//pattern 13
void pat_13(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(j>=i && j<=2*n-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//pattern 14
void pat_14(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(j>=i && j<=2*n-i){
                if((i+j)%2==0){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//pattern 15
void pat_15(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*n-1; j++) {
            if (j >= n-(i-1) && j <= n+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=2;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(j>=i && j<=2*n-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//pattern 16
void pat_16(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if((j>n && j-i==n-1) || (j<=n && j+i==n+1) ){
                printf("*");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for(int i=2;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(i==1 || i==j || i+j==2*n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

//pattern 17
void pat_17(char str[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}
//pattern 18
void pat_18(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
}

//pattern 19
void pat_19(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d\t",n-i+1);
        }
        printf("\n");
    }
}

//pattern 20
void pat_20(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i==n || (j>n && j-i==n-1) || (j<=n && j+i==n+1) ){
                printf("*\t");
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}
//pattern 21
void pat_21(int n){
    for(int i=1;i<=n;i++){
    int k=i;
        for(int j=1;j<=i;j++){
            printf("%d\t",k);
            k=n+k-j;
        }
        printf("\n");
    }
}

//pattern 22
//pattern 23
//pattern 24
//pattern 25
//pattern 26
void pat_26(int n){
    for(int i=1;i<=(n-n/2);i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=(n-n/2) + 1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 27
void pat_27(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

//pattern 28
void pat_28(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1){
                if(j<=n/2+1){
                    if(i<=n/2+1){
                        printf("%d\t",i);
                    }
                    else{
                        printf("%d\t",n-i+1);
                    }
                }
                else{
                    printf("%d\t",j);
                }
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}

//pattern 29
void pat_29(int n){
    for(int i=1;i<=n;i++){
        int k=(n*n+n)/2 - (i*i-i)/2;
        for(int j=1;j<=i;j++){
            if(k<=9){
                printf("%d\t\t\t",k);
            }
            else{
                printf("%d\t\t",k);
            
            }
            k-=1;
        }
        printf("\n");
    }
}

//pattern 30
void pat_30(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1){
                printf("%d\t",i);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}

//pattern 31
void pat_31(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}

//pattern 32
void pat_32(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}

//pattern 33
void pat_33(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//pattern 34
void pat_34(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("  ");
        }
        for(int j=1;j<=n-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//pattern 35
void pat_35(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n || i==j || i+j==n+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

//pattern 36
void pat_36(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(i==1 || i==j || i+j==2*n){
                printf("*\t");
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    //odd no. required in 26,28,30
    

    return 0;
}
