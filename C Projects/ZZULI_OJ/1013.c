// 给定A(x1, y1), B(x2, y2)两点坐标，计算它们间的距离。
// 输入包含四个实数x1, y1, x2, y2，分别用空格隔开，含义如描述。其中0≤x1,x2,y1,y2≤100。
// 输出占一行，包含一个实数d，表示A, B两点间的距离。结果保留两位小数。
#include <stdio.h>
#include <math.h>
int main(void){
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("%.2f", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
    return 0;
}