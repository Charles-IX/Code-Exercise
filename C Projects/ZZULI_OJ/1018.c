// 输入一个整数，判断该数是奇数还是偶数。
// 输入整数n。
// 如果该数是奇数就输出“odd”，偶数就输出“even”（输出不含双引号）。
#include <stdio.h>
#include <math.h>
int main(void){
    int n, m, x;
    scanf("%d", &n);
    m = abs(n);
    x = m % 2;
    switch (x)
{
    case 1:
        printf("odd");
        break;
    
    case 0:
        printf("even");
        break;
}
    return 0;
}