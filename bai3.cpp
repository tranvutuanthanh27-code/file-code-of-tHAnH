#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d, e, f, sum;
    double average;

    cout << "Nhap so nguyen duong co 5 chu so: ";
    cin >> n;

    a = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;
    d = n / 1000 % 10;
    e = n / 10000 % 10;
    f = n / 100000;

    cout << f << " " << e << " " << d << " " << c << " " << b << " " << a << endl;

    sum = a + b + c + d + e + f;
    cout << "tong cac chu so la : " << sum << endl;

    average = (a + b + c + d + e + f) / 6.0;
    cout << "so trung binh la : " << average << endl;

    return 0;
}
