// 输入三个正整数，判断用这三个整数做边长是否能构成一个直角三角形。
// 输入三个正整数。
// 能否构成直角三角形。如能，输出"yes"。若不能，输出"no"。
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
    if (b * b + c * c == a * a){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}