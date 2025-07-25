#include <iostream>

using namespace std;

bool checkSetBit(int n, int i)
{    // & operation with n and 1<<i to check the ith index bit
    if((n & (1 << i)) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int n,i;
    cout << "Enter N and i to check if its ith bit is set or not"<<endl;
    cin >> n >> i;
    cout << (checkSetBit(n,i) ? "Bit is set" : "Bit is not set");
    return 0;
}
