// 从键盘输入一个任意的三位正整数，分别求出其个位、十位和百位上的数字。
#include <stdio.h>
int main(void){
    int a, b, c, d;
    scanf("%d", &a);
    b=a%10;
    c=(a/10)%10;
    d=(a/100)%10;
    printf("%d %d %d\n", b, c, d);
    return 0;
}