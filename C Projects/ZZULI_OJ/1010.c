// 输入圆的半径，求圆的周长和面积。 要求定义圆周率为如下宏常量 #define PI 3.14159
// 输入半径r的值，为一实数。
// 输出一行，包括周长和面积。数据之间用一个空格隔开，数据保留小数后面两位。
#include <stdio.h>
#define PI 3.14159
int main(void){
    float r;
    scanf("%f", &r);
    printf("%.2f %.2f", 2*r*PI, r*r*PI);
    return 0;
}