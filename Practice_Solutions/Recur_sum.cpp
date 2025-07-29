#include <iostream>
using namespace std;

int sum(int n)
{
    if(n ==1) return 1;
    
    int temp = sum(n-1);
    return n + temp;
}
int main() {
    int n;
    cout << "Enter number to sum 1 to n"<<endl;
    cin >> n;
    int ans = sum(n);
    cout << ans;
    return 0;
}