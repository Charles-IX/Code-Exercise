#include <stdio.h>
int main(void){
    float height;
    printf("Enter your height in centimetre.");
    scanf("%f", &height);
    printf("Your height in inch is %f.", height / 2.54);
}