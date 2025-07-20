#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector<int> &arr, int n)
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
    cout << "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >>arr[i];
    }
    cout <<uniqueElement(arr,n);
    return 0;
}
