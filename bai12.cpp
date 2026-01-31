#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3;
    double AB, AC, BC;
    double S, Cv, P;

    cout << "nhap hoanh do cua A :" << endl;
    cin >> x1;
    cout << "nhap tung do cua A :" << endl;
    cin >> y1;
    cout << "nhap hoanh do cua B :" << endl;
    cin >> x2;
    cout << "nhap tung do cua B :" << endl;
    cin >> y2;
    cout << "nhap hoanh do cua C : " << endl;
    cin >> x3;
    cout << "nhap tung do cua C :" << endl;
    cin >> y3;

    cout << "vay toa do cua A la : A (" << x1 << "," << y1 << ")" << endl;
    cout << "vay toa do cua B la : B (" << x2 << "," << y2 << ")" << endl;
    cout << "vay toa do cua C la : C (" << x3 << "," << y3 << ")" << endl;

    AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    cout << "do dai canh AB la :" << AB << endl;
    cout << "do dai canh AC la :" << AC << endl;
    cout << "do dai canh BC la :" << BC << endl;

    if (AB + AC > BC && AC + BC > AB && AB + BC > AC)
    {
        cout << "thoa man dieu kien la 1 tam giac" << endl;

        Cv = AB + AC + BC;
        P = (AB + AC + BC) / 2.0;
        S = sqrt(P * (P - AB) * (P - AC) * (P - BC));

        cout << "chu vi tam giac tren la :" << Cv << endl;
        cout << "dien tich tam giac tren la :" << S << endl;
    }
    else
    {
        cout << "khong thoa man dieu kien la 1 tam giac" << endl;
    }

    return 0;
}