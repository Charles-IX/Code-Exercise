// 求1! + 2! + ……n!
// 输入一个整数n，你可以假定n不大于10。
// 输出一个整数，即阶乘累加的结果，单独占一行。
#include <stdio.h>
long long ret(int x);

int main(void){
	int n;
	long long sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		sum += ret(i);
	}
	printf("%lld", sum);
	return 0;
}

long long ret(int x){
	long long init = 1;
	for (int i = 1; i <= x; i++){
		init *= i;
	}
	return init;
}