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

int unsetiBit(int n, int i)
{    
    if (checkSetBit(n,i))
    {
        return (n ^ (1 << i));
    }
    
    return n;
}


int main() {
    int n,i;
    cout << "Enter N and i to unset its ith bit"<<endl;
    cin >> n >> i;
    cout << unsetiBit(n,i);
    return 0;
}
