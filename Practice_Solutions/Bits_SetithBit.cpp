#include <iostream>

using namespace std;

int setithBit(int n, int i)
{    
    int ans = (n | (1 << i));
    return ans;
}


int main() {
    int n,i;
    cout << "Enter N and i to set its ith bit"<<endl;
    cin >> n >> i;
    cout << setithBit(n,i);
    return 0;
}