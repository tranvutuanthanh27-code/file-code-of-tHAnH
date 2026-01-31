#include <iostream>
using namespace std;
int main()
{

    double r, Sht, Cvht;
    const double PI = 3.14;

    cout << "nhap do dai ban kinh hinh tron :";
    cin >> r;

    Sht = PI * pow(r, 2);
    Cvht = 2 * PI * r;

    cout << "dien tich hinh tron la :" << Sht << endl;
    cout << "chu vi hinh tron la : " << Cvht << endl;

    return 0;
}