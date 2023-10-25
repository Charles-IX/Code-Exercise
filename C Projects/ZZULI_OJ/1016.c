// 设银行1年期定期存款年利率为2.25%，存款本金为capital元，试编程计算并输出n年后的本利之和。
// （注: 目前银行活期存款的利息是按单利计息的。如果是定期存款，连本带息转入下一个存期，那么会继续计入定期的，相当于是复利。）
// 输入一个正整数和一个实数，分别代表存款年数和存款本金。
// 输出一个实数为n年后的本利之和，小数点后保留6位数字。
#include <stdio.h>
#define RATE 1.0225
int main(void){
    int n;
    double capital;
    scanf("%d %lf", &n, &capital);
    for (int i = 1; i<=n; i++){
        capital *= RATE;
    }
    printf("%.6f", capital);
    return 0;
}

// capital *= RATE 等价于 capital = capital * RATE
// 赋值语句是把右边的值赋给左边。
// 当数据精度逼近float极限的时候，改用double，同时注意转换说明：scanf中要用%lf。