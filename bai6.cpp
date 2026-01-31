#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double x1, x2, y1, y2, distance;

    cout << "tung do cua A la :";
    cin >> y1;
    cout << "hoanh do cua A la: ";
    cin >> x1;
    cout << "tung do cua B la:";
    cin >> y2;
    cout << "hoanh do cua B la :";
    cin >> x2;

    cout << "toa do A la : A(" << x1 << "," << y1 << endl;
    cout << "toa do B la : B(" << x2 << "," << y2 << endl;

    kc = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "khoach cach 2 diem A va B la :" << distance << endl;

    return 0;
}