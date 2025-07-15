#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int kadane_algo(vector<int> &arr, int n)
{
    int sum =0;
    int ans = INT_MIN;
    for(int i=0; i<n;i++)
    {
        if(sum >= 0)
        { 
            sum = sum + arr[i];
        }
        else {
            sum = arr[i];
        }
        ans = max(sum, ans);
    }
    return ans;
}

int flip_bits(vector<int> &arr, int n)
{
    int count_1=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            arr[i] = -1;
            count_1++;
        }
        else {
            arr[i] = 1;
        }
    }
    
   int ans = kadane_algo(arr,n);
   if(ans > 0)
   {
       return ans + count_1;
   }
   else
   {
       return count_1;
   }
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    
    int ans = flip_bits(arr,n);
    cout << ans;
    return 0;
}
