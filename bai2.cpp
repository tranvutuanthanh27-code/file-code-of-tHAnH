#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double T;
    double x, y;
    int n;

    cout << "- nhap gia tri cua x : ";
    cin >> x;

    cout << "- nhap gia tri cua Y :";
    cin >> y;

    cout << "- nhap gia tri cua n :";
    cin >> n;

    if ((pow(x, 5) + exp(log(abs(y)) + 1)) >= 0 && (2 + abs(n)) > 0)
    {

        T = sqrt(pow(x, 5) + exp(log(abs(y)) + 1)) + (1 + sin(x * M_PI / 180)) / (cos(n * x * M_PI / 180) + sqrt(2 + abs(n)));

        cout << "- gia tri cua T la :" << T << endl;
    }
    else
    {
        cout << "- khong co gia tri thoa man ";
    }

    return 0;
}