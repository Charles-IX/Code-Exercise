// 给你三个正整数，判断用这三个整数做边长是否能构成一个三角形。
// 输入为三个int范围的正整数，中间有一个空格隔开。
// 如果能构成三角形，输出"Yes"，否则输出"No"。
#include <stdio.h>
int main(void){
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c){
        temp = b;
        b = c;
        c = temp;
    }
    if (b + c > a && a - b < c){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}