#include <iostream>
#include <iomanip>
#define pi 3.14159
 
using namespace std;
 
int main() {
    
    double R;
    
    cin >> R;
    
    double A = pi * (R * R);
 
    cout << "A=" << fixed <<setprecision(4) << A << endl;
    
    return 0;
}
