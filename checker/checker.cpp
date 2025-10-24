#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    registerTestlibCmd(argc, argv);

    int expectedValue = ans.readInt();
    int userValue = ouf.readInt();

    if (userValue == expectedValue) quitf(_pc(2), "Output is correct.");
    else if (abs(userValue - expectedValue) <= 10) quitf(_pc(1), "The absolute difference is within limits for 1 point. Expected %d, found %d.", expectedValue, userValue);
    else quitf(_pc(0), "Wrong answer. Expected %d, found %d.", expectedValue, userValue);
}