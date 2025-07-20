#include <iostream>
#include <vector>
using namespace std;

int bitSet(int no, int k)
{
    int ans = no | (1<<k);
    return ans;
}

int main() {
    int n,k;
    cout << "Enter no"<<endl;
    cin >> n;
    cout << "enter k"<<endl;
    cin >> k;
    cout << bitSet(n,k);
    return 0;
}