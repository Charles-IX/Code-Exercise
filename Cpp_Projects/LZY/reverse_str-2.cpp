#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m,n;
    string str,str1;
    getline(cin,str);
    n=(str.length())-1;
    for(m=0;m<=n;m++){
        str1[n-m]=str[m];
    }
    cout<<str1;
    return 0;
}
