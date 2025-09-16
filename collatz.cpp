#include <iostream> //import
using namespace std;
#include <cstdlib>

int main(int argc, char *argv[]) {
    int num = stoi(argv[1]);

    cout << num << endl;

    while (num > 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        cout << num << endl;
    }

    return 0;
}