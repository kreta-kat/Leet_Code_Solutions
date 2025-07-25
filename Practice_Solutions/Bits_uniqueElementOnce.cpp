#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int> &arr, int n)
{
    int ans =0;
    for(int i=0; i<n; i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array to determine unique element"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << singleElement(arr,n);
    
    return 0;
}
