// 鸡和兔关在一个笼子里，鸡有2只脚，兔有4只脚，没有例外。已知现在可以看到笼子里m个头和n只脚，求鸡和兔子各有多少只？
// 输入两个整数heads和feet，分别代表笼子里头的个数和脚的个数。(假设heads和feet都在合法的数据范围内)
// 依次输出鸡和兔的只数。（数字为0的也要输出）
#include <stdio.h>
int main(void){
    int m, n, x, y;
    scanf("%d %d", &m, &n);
    y = (n - 2*m)/2;
    x = m - y;
    printf("%d %d", x, y);
    return 0;
}