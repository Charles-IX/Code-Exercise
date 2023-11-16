// 数列的定义如下：数列的第一项为item，以后各项为前一项的平方根，求数列的前n项的和。
// Input: 由两个整数item（item<10000）和 n(n<1000)组成，item和n的含义如前所述。
// Output: 输出该数列的和，占一行，要求精度保留2位小数。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	int item, n;
	double sum = 0;
	scanf("%d %d", &item, &n);
	double set[n];
	set[0] = item;
	for (int i = 1; i < n; i++){
		set[i] = sqrt(set[i - 1]);
	}
	for (int i = 0; i < n; i++){
		sum += set[i];
	}
	printf("%.2f", sum);
	return 0;
}