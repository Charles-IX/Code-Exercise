// 假设美元与人民币的汇率是1美元兑换6.5573元人民币，编写程序输入美元的金额，输出能兑换的人民币金额。
// 输入一个实数，为美元的金额。
// 输出能兑换的人民币的数值。输出保留2位小数。
#include <stdio.h>
#define RATE 6.5573
int main(void){
    float dollar;
    scanf("%f", &dollar);
    printf("%.2f", dollar*RATE);
    return 0;
}