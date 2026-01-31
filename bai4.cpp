#include <iostream>
using namespace std;
int main()
{

    int a, b, mul, sum, sub;
    double div, mod;

    cout << "nhap so nguyen a:" << endl;
    cin >> a;
    cout << " nhap so nguyen b :" << endl;
    cin >> b;

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = double(a) / b;
    mod = a % b;

    cout << "tong a và b la :" << sum << endl;
    cout << "hieu a và b la : " << sub << endl;
    cout << "chia lay phan nguyen la :" << div << endl;
    cout << "tich a va b la : " << mul << endl;
    cout << "chia lay phan du la : " << mod << endl;

    return 0;
}
