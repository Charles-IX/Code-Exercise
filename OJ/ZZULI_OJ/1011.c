// 输入圆柱体的底面半径r和高h，计算圆柱体的表面积并输出到屏幕上。要求定义圆周率为如下宏常量 #define PI 3.14159
// 输入两个实数，为圆柱体的底面半径r和高h。
// 输出一个实数，即圆柱体的表面积，保留2位小数。
#include <stdio.h>
#define PI 3.14159
int main(void){
    float r, h;
    scanf("%f %f", &r, &h);
    printf("%.2f", 2*r*PI*h + 2*r*r*PI);
    return 0;
}

// 教训：写转换说明的时候不要把%写掉了喵