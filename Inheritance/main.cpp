#include "BitString.h"

int main() {
    BitString bs1("1010");
    BitString bs2("1101");

    BitString bs3 = bs1 + bs2;
    bs3.changeSign();

    return 0;
}
