// 输入一个正整数n(n<=20)，输出1到n之间阶乘表。
// 输入只有一个正整数n。
// 输出1到n之间的阶乘表，格式见输出样例。每行两个数据，第一个数据占4列，第二个数据占20列，左对齐。
// Hint: 注意int类型的表示范围。 
#include <stdio.h>
#include <math.h>
long long ret(int x);

int main(void){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		printf("%-4d%-20lld\n", i, ret(i));
	}
	return 0;
}

long long ret(int x){
	long long init = 1;
	for (int i = 1; i <= x; i++){
		init *= i;
	}
	return init;
}

// int类型可以表示的数字是有限位的，要根据题目要求灵活选用long或者long long。 