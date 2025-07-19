#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number to print odd even"<<endl;
    cin >> n;
    
    if((n & 1) == 0)
    {
        cout <<"even";
    }
    else
    {
        cout <<"odd";
    }
    return 0;
}