// 输入3个整数，输出它们的1次幂、2次幂和3次幂。
// 输出3行，每行3个整数，分别是它们的1次幂、2次幂和3次幂，每个整数占9列，不足9列左对齐。
#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%-9d%-9d%-9d\n", a, a*a, a*a*a);
    printf("%-9d%-9d%-9d\n", b, b*b, b*b*b);
    printf("%-9d%-9d%-9d\n", c, c*c, c*c*c);
    return 0;
}