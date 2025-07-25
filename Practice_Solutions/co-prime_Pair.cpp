#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout <<"Enter N to calculate co-prime Pairs"<<endl;
    cin >>n;
    for(int i=0;i<n/2; i++)
    {
        cout << (2*i+1) << " " << (2*i +2)<<endl;
    }
    return 0;
}