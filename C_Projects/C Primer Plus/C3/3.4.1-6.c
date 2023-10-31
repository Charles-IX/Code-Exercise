// 要求用户输入一个值，然后显示该值的八进制和十六进制
#include <stdio.h>
int main(void){
    int value;
    printf("Please input an integer: ");
    scanf("%d",&value);
    printf("DEC = %d , OCT = %#o , HEX = %#x",value,value,value);

    return 0;
}