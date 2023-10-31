/* 某公司规定，销售人员工资由基本工资和销售提成两部分组成，其中基本工资是1500元/月，销售提成规则如下：
销售额小于等于10000元时，按照5%提成；
销售额大于10000元但小于等于50000元时，超出10000部分按照3%提成；
销售额大于50000元时，超出50000部分按照2%提成。
编写程序，根据销售额计算员工收入。 */
// 输入一个整数表示销售额。
// 输出员工的薪水，保留2位小数。
#include <stdio.h>
#define BASE 1500
int main(void){
    int sales;
    float salary;
    scanf("%d", &sales);
    if (sales <= 10000){
        salary = BASE + sales * 0.05;
    }
    else if (sales <= 50000){
        salary = BASE + (sales - 10000) * 0.03 + 10000 * 0.05;
    }
    else{
        salary = BASE + (sales - 50000) * 0.02 + 10000 * 0.05 + 40000 * 0.03;
    }
    printf("%.2f", salary);
    return 0;
}