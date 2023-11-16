// 给定两个整数m和n，求出m~n这段连续的整数中所有偶数的平方和以及所有奇数的立方和。
// Input: 由两个整数m和n组成，你可以假定m<=n.
// Output: 应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。32位整数足以保存结果。
#include <stdio.h>
int main(void){
	int m, n;
	long a = 0, b = 0;
	scanf("%d %d", &m, &n);
	int set[n - m +1];
	for (int i = 0; i <= n - m; i++){
		set[i] = m + i;
	}
	for (int i = 0; i <= n - m; i++){
		if (set[i] % 2 == 0){
			a += set[i] * set[i];
		}
		else{
			b += set[i] * set[i] * set[i];
		}
	}
	printf("%ld %ld", a, b);
	return 0;
}