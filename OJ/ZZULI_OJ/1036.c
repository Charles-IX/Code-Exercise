// 给你一个年份和月份，求该月有多少天。
// 输入一个年份（正整数），一个月份（1-12），中间有一个空格隔开。
// 输出该月的天数，单独占一行。
#include <stdio.h>
int leap(int year);
int main(void){
    int yy, mm;
    scanf("%d %d", &yy, &mm);
    if (mm == 2){
        if (leap(yy) == 1){
            printf("29");
        }
        else{
            printf("28");
        }
    }
    else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12){
        printf("31");
    }
    else{
        printf("30");
    }
    return 0;
}

int leap(int year){
    if (year % 100 == 0){
        if (year % 400 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if (year % 4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

// if条件中如果需要用“或”，记得写 mm == 1 || mm == 3 || mm == 5 而不是 mm == 1 || 3 || 5 。
// 当有很多个“或”时，可以考虑使用switch()。