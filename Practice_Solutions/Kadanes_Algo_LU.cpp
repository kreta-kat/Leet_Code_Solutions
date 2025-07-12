#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int kadanes_algo(vector<int> &arr, int n)
{
    int sum =0;
    int ans = INT_MIN;
    for(int i=0; i<n;i++)
    {
        if(sum >= 0)
        {
            //add to sum
            sum += arr[i];
        }
        else {
            //break the sum as it is less than 0 and won't be the sub-array
            //replace with arr[i]
            sum = arr[i];
        }
        ans = (sum>ans) ? sum : ans;
    }
    return ans;
}
int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }

    int ans = kadanes_algo(arr, n);
    cout<< "Maximun Sub array sum using kadane's algo: " << ans;
    return 0;
}