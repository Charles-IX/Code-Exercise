// 从键盘输入2个整数x、y值，表示平面上一个坐标点，判断该坐标点处于第几象限，并输出相应的结果。
// 输入x，y值表示一个坐标点。坐标点不会处于x轴和y轴上，也不会在原点。
// 输出对应的象限，用数字1,2,3,4分别对应四个象限。
#include <stdio.h>
int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0){
        if (y > 0){
            printf("1");
        }
        if (y < 0){
            printf("4");
        }
    }
    if (x < 0){
        if (y < 0){
            printf("3");
        }
        if (y > 0){
            printf("2");
        }
    }
    return 0;
}