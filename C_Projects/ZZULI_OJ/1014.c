//  给出三角形的三条边，求三角形的面积。
//  输入三角形的三条边长（实数），数据之间用空格隔开。
// 输出三角形的面积，结果保留2位小数。
#include <stdio.h>
#include <math.h>
int main(void){
    float a, b, c, p;
    scanf("%f %f %f", &a, &b, &c);
    p = (a + b + c)/2;
    printf("%.2f", sqrt(p*(p - a)*(p - b)*(p - c)));
    return 0;
}