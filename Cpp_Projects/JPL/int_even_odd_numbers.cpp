#include <bits/stdc++.h>
using namespace std;
int judge_odd(int a);
int judge_even(int a);

int main(void){
    int n;
    int odd = 0, even = 0;
    cin >> n;       // 读取一个n，就是你要输入的整数序列总共有多少个数
    int set[n];     // 创建一个刚好能放下这么多数字的数组
    for (int i = 0; i < n; i++){
        cin >> set[i];      // 循环读取同一行内输入的所有数字，以空格分开
    }
    for (int i = 0; i < n; i++){
        odd += judge_odd(set[i]);
        even += judge_even(set[i]);
    }
    cout << odd << " " << even;
    return 0;
}

int judge_odd(int a){
    if (a % 2 == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int judge_even(int a){
    if (a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}