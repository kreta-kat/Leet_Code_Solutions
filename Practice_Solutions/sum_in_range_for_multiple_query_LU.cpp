// Given a array of elements n and Q queries on an array foreach query calculate Sum of all elements in given range
#include <iostream>
#include <vector>
using namespace std;

int prefixSum_BruteForce(vector<int> arr, int start_index, int last_index)
{
    int n = arr.size();
    
    int sum =0;
    for(int i=start_index; i<=last_index; i++)
    {
        sum += arr[i];
        
    }
    return sum;
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
    int qn;
    cout << "enter size for queries"<<endl;
    cin >>qn;
    vector<vector<int>> queries(qn,vector<int>(2));
    cout << "Enter input for queries"<<endl;
    for(int q =0; q<qn; q++)
    {
        for(int r=0; r<2;r++)
        {
            cin >> queries[q][r];
        }
    }
    cout<<"Print Sum within Range Using Brute Force"<<endl;
    
    for(int i =0; i<qn; i++)
    {
         cout<<prefixSum_BruteForce(arr,queries[i][0],queries[i][1])<<endl;
    }
    cout <<endl;
     cout<<"Print Sum within Range Using Prefix Sum"<<endl;
    vector<int> prefix_Array = prefixSum_Optimised(arr);
    for(int i =0; i<qn; i++)
    {
        int left = queries[i][0];
        int right = queries[i][1];
        if(left>0){
        cout<<prefix_Array[right] - prefix_Array[left-1]<<endl;
        }
        else
        {
            cout<<prefix_Array[right];
        }
    }
    cout<<endl;
    return 0;
}