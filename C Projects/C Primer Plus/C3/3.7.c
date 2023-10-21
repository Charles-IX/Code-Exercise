#include <stdio.h>
int main(void){
    float salary;

    printf("Enter your desired monthly salary:");
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\t$%.2f a month is $%.2f a year.", salary, salary*12);  //不在开头加\n是因为似乎在Windows环境下输入数值按回车后总是会自动换行，加上后会多换一行
    printf("\rWow!\n");

    return 0;
}