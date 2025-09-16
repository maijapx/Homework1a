// :D
#include <iostream> //import
using namespace std;
#include <cstdlib>

int main(int argc, char *argv[]) {

    int start = stoi(argv[1]);
    int end = stoi(argv[2]);
    int divisor = stoi(argv[3]);

    if (start < end ) {
        for (int i = start; i <= end; i++){
            if (i % divisor == 0) {
                cout << i << endl;
            }
        }

   } else {
        for (int i = start; i >= end; i--) {
            if (i % divisor == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}