#include <cstdlib>  // atof
#include <iomanip>
#include <iostream>
using std::abs;
using namespace std;

const double EPSILON = 0.0001;

int main (int argc, char *argv[]) {
    double i = stod (argv[1]);

    if (i < 0){
    cout << "Input must be greater than 0" << endl;
    return 1;
    }
    double low = 0;
    double high = i;
    double mid;

    while (true){
        mid = (low + high) / 2;
        double square = mid * mid;
        cout << mid << " (" << square << ")" << endl;
        if (abs (square - i) < EPSILON) break;
        if (square > i){
            high = mid;
        }else{
            low = mid;
        }
    }
    return 0;
}
