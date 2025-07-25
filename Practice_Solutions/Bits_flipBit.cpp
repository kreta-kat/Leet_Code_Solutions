#include <iostream>

using namespace std;

int flipBit(int n, int i)
{    
    int ans = ( n ^ (1 << i));
    return ans;
}


int main() {
    int n,i;
    cout << "Enter N and i to flip its ith bit"<<endl;
    cin >> n >> i;
    cout << flipBit(n,i);
    return 0;
}
