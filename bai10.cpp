#include <iostream>
using namespace std;
int main()
{
    int n;
    double k, r, totalpay;

    cout << "nhap so tap vo muon mua :" << endl;
    cin >> n;
    cout << "so tien cho moi tap vo :" << endl;
    cin >> k;
    cout << "mua moi tap vo duoc giam gia r % :" << endl;
    cin >> r;

    totalpay = n * k * r / 100.0;

    cout << "tong so tien phai tra khi mua so tap vo la :" << totalpay << endl;

    return 0;
}