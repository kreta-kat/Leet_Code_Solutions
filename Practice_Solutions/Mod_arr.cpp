#include <iostream>
using namespace std;

int arrayMod(int arr[], int n, int m)
{
    long long ans = 0;
    int PlaceValue = 1;
    
    for(int i =n-1; i >= 0; i--)
    {
        ans = (ans%m + ((arr[i]%m) * (PlaceValue%m))%m)%m;
        PlaceValue = ((PlaceValue%m) * (10%m))%m;
    }
    
    return ans;
}
int main() {
    int n,m;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    cout <<"Enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    cout <<"Enter mod"<<endl;
    cin >> m;
    int ans = arrayMod(arr,n,m);
    cout <<ans;
    return 0;
}