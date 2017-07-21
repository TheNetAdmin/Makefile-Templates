#include <iostream>
#include "./src1/f1.h"
#include "./src2/f2.h"
#include "./src2/subsrc1/f3.h"
#include "./src3/subsrc2/f4.h"
using namespace std;

int main() {
    cout << f1(1, 2) << endl;
    cout << f2(1, 2) << endl;
    cout << f3(1, 2) << endl;
    cout << f4(1, 2) << endl;
    return 0;
}