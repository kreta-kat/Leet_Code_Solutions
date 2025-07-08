#include <iostream>
#include <vector>
using namespace std;

int bruteForce_pivotIndex(vector<int> arr, int start_index, int last_index)
{
    int n = arr.size();
    
    int sum =0;
    for(int i=start_index; i<=last_index; i++)
    {
        sum += arr[i];
        
    }
    return sum;
}

vector<int> prefixSum(vector<int> arr)
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
    
    cout<<"Print Pivot Index Using Brute Force"<<endl;
    int brute_ans=0;
    for(int i =1; i<n-1; i++)
    {
         int left_sum = bruteForce_pivotIndex(arr, 0, i-1);
         int right_sum = bruteForce_pivotIndex(arr, i+1, n-1);
         if(left_sum == right_sum)
         {
             brute_ans++;
         }
    }
    //for 0 index
    if(bruteForce_pivotIndex(arr,1,n-1) == 0)
    {
        brute_ans++;
    }
    //for last index
    if(bruteForce_pivotIndex(arr,0,n-2) == 0)
    {
        brute_ans++;
    }
    cout<<"Brute Force ans "<< brute_ans<<endl;
    cout<<"Print Pivot Index Using Prefix Sum"<<endl;
    vector<int> prefix_Array = prefixSum(arr);
    int prefix_ans=0;
    for(int i=1; i<n-1; i++)
    {
        int left_sum = prefix_Array[i-1];
        int right_sum = prefix_Array[n-1] - prefix_Array[i];
        if(left_sum == right_sum)
         {
             prefix_ans++;
         }
    }
    //for0 index
    if(0 == prefix_Array[n-1] - prefix_Array[0])
    {
        prefix_ans++;
    }
    //for last index
    if(prefix_Array[n-2] == 0)
    {
        prefix_ans++;
    }
    cout<<"Prefix Sum - Pivot index "<<prefix_ans<<endl;
    return 0;
}