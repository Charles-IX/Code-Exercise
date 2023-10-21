/* 商场夏季促销，购物500元以下，不打折；
购物500元（含）以上，95折；
购物1000元（含）以上，9折；
购物3000元（含）以上，85折；
购物5000元（含）以上，8折。
根据消费金额，确定用户实际需要支付的数目。 */
// 输入一个实数，表示消费金额。
// 输出一个实数，表示用户实际需要支出的数目，保留两位小数。
#include <stdio.h>
int main(void){
    float price, pay;
    scanf("%f", &price);
    if (price >= 5000){
        pay = price * 0.8;
    }
    else if (price >= 3000){
        pay = price * 0.85;
    }
    else if (price >= 1000){
        pay = price * 0.9;
    }
    else if (price >= 500){
        pay = price * 0.95;
    }
    else{
        pay = price;
    }
    printf("%.2f", pay);
    return 0;
}