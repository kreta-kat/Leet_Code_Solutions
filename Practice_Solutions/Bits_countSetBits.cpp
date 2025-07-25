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

int countSetBits(int n)
{
    int count =0;
    for(int i=0; i<32; i++)
    {
        if(checkSetBit(n,i))
        {
            count++;
        }
    }
    
    return count;
}


int main() {
    int n;
    cout << "Enter N to count total no. of set Bits"<<endl;
    cin >> n;
    cout << countSetBits(n);
    return 0;
}
