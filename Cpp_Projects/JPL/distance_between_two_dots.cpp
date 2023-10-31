#include <bits/stdc++.h>
using namespace std;
float distance(float x1, float y1, float x2, float y2);

int main(void){
    float x1, y1, x2, y2, radius, diameter, circumference, square;
    cout << "输入圆心坐标 x1 y1：";
    cin >> x1 >> y1;
    cout << "输入圆心坐标 x2 y2：";
    cin >> x2 >> y2;
    radius = distance(x1, y1, x2, y2);
    diameter = 2 * radius;
    circumference = M_PI * diameter;
    square = M_PI * radius * radius;
    cout << "半径：" << radius << endl;
    cout << "直径：" << diameter << endl;
    cout << "周长：" << circumference << endl;
    cout << "面积：" << square << endl;
    return 0;
}

float distance(float x1, float y1, float x2, float y2){
    float distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}