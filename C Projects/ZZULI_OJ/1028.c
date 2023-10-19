// 根据一个年份，判断是否是闰年。
// 输入为一个整数，表示一个年份。
// 如果是闰年，输出"Yes"，否则输出"No"。输出单独占一行。
// Hint: 公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
#include <stdio.h>
int main(void){
    int year;
    scanf("%d", &year);
    if (year % 100 == 0){
        if (year % 400 == 0){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    else if (year % 4 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}