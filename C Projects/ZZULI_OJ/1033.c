/* 给定一个百分制成绩, 请根据百分制成绩输出其对应的等级。转换关系如下：
90分及以上为’A’，80~89为’B’， 70~79为’C’， 60~69为’D’，60分以下为’E’。 */
// 一个百分制成绩（0~100的整数)。
// 输出对应的等级。
#include <stdio.h>
int main(void){
    int grades;
    scanf("%d", &grades);
    if (grades >= 90){
        printf("A");
    }
    else if (grades >= 80){
        printf("B");
    }
    else if (grades >= 70){
        printf("C");
    }
    else if (grades >= 60){
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;    
}