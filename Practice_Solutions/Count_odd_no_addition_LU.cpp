#include <iostream>
#include <vector>
using namespace std;

vector<int> count_oddNo(vector<int> &arr, int n)
{
    vector<int> prefix_odd(n);
    prefix_odd[0] =arr[0]%2;
    for(int i =1; i<n;i++)
    {
     prefix_odd[i] = prefix_odd[i-1] + arr[i]%2;
    }
    
    return prefix_odd;
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
    cout<<"Enter size for query table"<<endl;
    int q;
    cin>>q;
    vector<vector<int>> queries(q,vector<int>(2));
    for(int i=0; i<q;i++)
    {
        for(int j=0; j<2;j++)
        {
            cin >> queries[i][j];
        }
    }
    vector<int> pf_odd = count_oddNo(arr, n);
    for(int i=0; i<q;i++)
    {
        int lb = queries[i][0];
        int rb = queries[i][1];
        int ans = pf_odd[rb] - pf_odd[i-1];
        cout <<ans<< " ";
    }
    cout <<endl;
    return 0;
}