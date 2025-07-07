#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum_BruteForce(vector<int> arr)
{
    int n = arr.size();
    
    vector<int> result(n);
    for(int i=0; i<n; i++)
    {
        int sum =0;
        for(int j=0; j<=i; j++)
        {
            sum+=arr[j];
        }
        result[i] = sum;
    }
    return result;
}

vector<int> prefixSum_Optimised(vector<int> arr)
{
    int n = arr.size();
    
    vector<int> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    return prefix_sum;
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
    vector<int> result1 = prefixSum_BruteForce(arr);
    for(int i =0; i<n; i++)
    {
        cout << result1[i]<<" ";
    }
    cout <<endl;
    vector<int> result2 = prefixSum_Optimised(arr);
    for(int i =0; i<n; i++)
    {
        cout << result2[i]<<" ";
    }
    cout<<endl;
    return 0;
}