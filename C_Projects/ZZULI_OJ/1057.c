// 输入一个正整数n，判断n是否是素数，若n是素数，输出”Yes”,否则输出”No”。
// 输入一个正整数n(n<=1000)。
// 如果n是素数输出"Yes"，否则输出"No"。输出占一行。
// Hint: 1不是素数。
#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    int invalid = 0;
    scanf("%d", &n);
    if (n == 1){
        printf("No");
    }
    else if (n == 2){
        printf("Yes");
    }
    else {
        for (int i = 2; i <= sqrt(n) + 1; i++){
            if (n % i == 0){
                invalid = 1;
                break;
            }
        }
        if (invalid){
            printf("No");
        }
        else {
            printf("Yes");
        }
    }
    return 0;
}