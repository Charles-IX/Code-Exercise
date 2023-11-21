/*  小明对某些数字有偏爱，例如，他喜欢7的倍数，而不喜欢4的倍数，如果一个整数是7的倍数，而不是4的倍数，小明会认为这个数字是他的幸运数字。
现在给定两个整数m和n，请你帮小明找m到n范围内的最大的幸运数字。如果m到n范围内没有幸运数字，则输出“no”  */
// Input: 两个正整数m和n（m <= n，且均小于10的9次方）。 
// Output: 一个整数，即m到n范围内的最大的幸运数字。 
#include <stdio.h>
int main(void){
    long long m, n;
    int invalid = 1;
    scanf("%lld %lld", &m, &n);
    for (long long i = n; i >= m; i--){
        if (i % 7 == 0 && i % 4 != 0){
            printf("%lld", i);
            invalid = 0;
            break;
        }
    }
    if (invalid){
        printf("no");
    }
    return 0;
}