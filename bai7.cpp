#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double R, C, S;

    cout << "nhap do dai cua a:";
    cin >> a;
    cout << "nhap do dai cua b:";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    R = double(c) / 2;
    S = (a * b) / 2;

    cout << "do dai canh huyen la :" << c << endl;
    cout << "ban kinh duong tron ngoai tiep tam giac la :" << R << endl;
    cout << "dien tich tam giac la : " << S << endl;

    return 0;
}