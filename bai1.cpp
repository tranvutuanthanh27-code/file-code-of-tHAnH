#include <iostream>
using namespace std;

int main()
{
    float sodudauthang;
    float tienrut;
    float tiengui;
    float phigiaodich;
    float soducuoithang;

    cout << "so du dau thang:";
    cin >> sodudauthang;

    cout << "tien rut:";
    cin >> tienrut;

    cout << "tien gui:";
    cin >> tiengui;

    phigiaodich = 0.01 * (tiengui + tienrut);
    soducuoithang = sodudauthang - tienrut + tiengui - phigiaodich;

    cout << "phi giao dich la : " << phigiaodich << endl;
    cout << "so du cuoi thang la:" << soducuoithang << endl;

    return 0;
}