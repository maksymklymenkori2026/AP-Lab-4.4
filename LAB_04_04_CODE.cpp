// лаба 4.4
// варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;
    
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(6) << "x" << " |"
    << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp-dx;
    while(x <= xk-dx){
        x += dx;
        if (x <= -R)
           y = x+R;
        else
            if (x >= -R && x <= 0)
                y = sqrt(R*R - x*x);
            else
                if (x > 0 && x <= 6)
                    y = R - x*R/6;
                else // x > 6
                    y = x-6;


        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << y
        << " |" << endl;
    }

    cin.get();
    return 0;
}