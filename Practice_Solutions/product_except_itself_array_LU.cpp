#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptItself(vector<int> &arr, int n)
{
    vector<int> Prefix_Product(n);
    Prefix_Product[0]= arr[0];
    for(int i=1; i<n;i++)
    {
        Prefix_Product[i] = Prefix_Product[i-1]*arr[i];
    }
    //update it to get product except itself
    int suffix=1;
    for(int i =n-1; i>0 ; i--)
    {
        Prefix_Product[i] = Prefix_Product[i-1]*suffix;
        //suffix will give product to right of that element
        //Prefix_Product[i-1] gives product to left of that element
        suffix = suffix*arr[i];
    }
    Prefix_Product[0] = suffix;
    return Prefix_Product;
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
    vector<int> ans = productExceptItself(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<< ans[i] << " ";
    }
    return 0;
}