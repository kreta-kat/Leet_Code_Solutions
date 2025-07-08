#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>prefix_max(vector<int> &arr, int n)
{
    vector<int>pmax(n);
    pmax[0] = arr[0];
    for(int i=0; i<n; i++)
    {
        pmax[i] = max(pmax[i-1], arr[i]);
    }
    cout<<endl;
    cout<<"Printing Prefix Max"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<< pmax[i] << " ";
    }
    cout<<endl;
    return pmax;
    
}

vector<int>suffix_max(vector<int> &arr, int n)
{
    vector<int> smax(n);
    smax[n-1] = arr[n-1];
    for(int i=n-2; i>= 0; i--)
    {
        smax[i] = max(smax[i+1], arr[i]);
    }
    cout<<endl;
    cout<<"Printing Suffix Max"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<< smax[i] << " ";
    }
    cout<<endl;
    return smax;
    
}

int rainWaterTrapping(vector<int> &arr, int n)
{
    vector<int> pmax = prefix_max(arr, n);
    vector<int> smax = suffix_max(arr, n);
    int amount =0;
    //for index 0 and last amount stored = 0
    for(int i=1; i<n-1;i++)
    {
        int lb = pmax[i-1];
        int rb = smax[i+1];
        int yb = min(lb, rb);
        int contribution = yb - arr[i];
        if(contribution > 0)
        {
            amount +=contribution;
        }
    }
    return amount;
}


int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter input for array"<<endl;
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    int ans = rainWaterTrapping(arr,n);
    cout << "Amount of Rainwater Stored "<< ans;
    return 0;
}