#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m, n;
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}