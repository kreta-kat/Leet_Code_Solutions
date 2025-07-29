#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n ==1 || n == 0) return n;
    
    int temp1 = fibo(n-1);
    int temp2 = fibo(n-2);
    return temp1 + temp2;
}
int main() {
    int n;
    cout << "Enter number to calculate fibbonacci"<<endl;
    cin >> n;
    int ans = fibo(n);
    cout << ans;
    return 0;
}