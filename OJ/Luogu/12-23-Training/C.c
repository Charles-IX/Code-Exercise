#include <stdio.h>
int main(void){
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if (a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if (a >= b && b >= c){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}