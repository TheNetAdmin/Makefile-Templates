#include <stdio.h>
#include "./src1/f1.h"
#include "./src2/f2.h"
#include "./src2/subsrc1/f3.h"
#include "./src3/subsrc2/f4.h"

int main() {
    printf("%d\n", f1(1, 2));
    printf("%d\n", f2(1, 2));
    printf("%d\n", f3(1, 2));
    printf("%d\n", f4(1, 2));
    return 0;
}