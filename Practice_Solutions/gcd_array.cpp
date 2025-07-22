#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    int temp = gcd(b%a,a);
    
    return temp;
}

int main() {
    int n;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    //calc gcd of array
    int ans = abs(arr[0]);
    for(int i=1; i<n; i++)
    {
        ans = gcd(ans,abs(arr[i]));
    }
    cout <<"GCD of the array is"<<endl;
    cout <<ans;

    return 0;
}