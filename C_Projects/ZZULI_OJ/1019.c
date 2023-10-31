// 某公园门票的票价是每人50元，一次购票满30张，每张可以少收2元。试编写自动计费系统程序。
// 输入一个正整数，表示购票的数量。
// 输出一个整数，表示用户实际需要支付的金额。
#include <stdio.h>
#define NORMAL_PRICE 50
#define DISCOUNT_PRICE 48
int main(void){
    int n;
    scanf("%d", &n);
    if (n<30)
    {
        printf("%d", n * NORMAL_PRICE);
    }
    else{
        printf("%d", n * DISCOUNT_PRICE);
    }
    return 0;
}