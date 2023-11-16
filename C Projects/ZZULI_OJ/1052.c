// 输入n和a，求a+aa+aaa+…aa…a(n个a)，如当n=3,a=2时，2+22+222的结果为246。 
// 输入包含两个整数，n和a,含义如上述，你可以假定n和a都是小于10的非负整数 。 
// 输出前n项和，单独占一行。 
#include <stdio.h>
#include <math.h>
int blyat(int x, int y);

int main(void){
    int n, a;
    scanf("%d %d", &n, &a);
    int set[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        set[i] = blyat(i, a);
    }
    for (int i = 0; i < n; i++){
        sum += set[i];
    }
    printf("%d", sum);
    return 0;
}

int blyat(int x, int y){
    int blyat = 0;
    for (int i = 0; i <= x; i++){
        blyat += pow(10, i) * y;
    }
    return blyat;
}