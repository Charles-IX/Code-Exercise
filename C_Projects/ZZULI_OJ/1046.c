//  给你n个整数，求他们中所有奇数的乘积。 
//  第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。 
//  输出n个数中的所有奇数的乘积，占一行。 
#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    int total = 1;
    for (int i = 0; i < n; i++){
        if (set[i] % 2 == 1){
            total *= set[i];
        }
    }
    printf("%d", total);
    return 0;
}