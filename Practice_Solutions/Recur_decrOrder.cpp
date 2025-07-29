#include <iostream>
using namespace std;

void decr_order(int n)
{
    if(n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout <<n<<" ";
    decr_order(n-1);
}
int main() {
    int n;
    cout << "Enter number to print 1 to n"<<endl;
    cin >> n;
    decr_order(n);
    return 0;
}