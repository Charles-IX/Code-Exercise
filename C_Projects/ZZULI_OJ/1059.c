//  输入一批学生的成绩（整数），输出最高分。 
//  输入包含多个非负整数和一个负整数。该负数不作为有效成绩，只表示输入结束。 
//  输出一个整数，即最高分。单独占一行。 
#include <stdio.h>
int main(void){
    int score = 0, highscore = 0;
    while (1){
        scanf("%d", &score);
        if (score > highscore){
            highscore = score;
        }
        if (score < 0){
            break;
        }
    }
    printf("%d", highscore);
    return 0;
}

// 不要执着于创建一个“长度未知的数组”，也许需要用到“长度未知”的数组时就意味着这道题本身并不需要使用数组。