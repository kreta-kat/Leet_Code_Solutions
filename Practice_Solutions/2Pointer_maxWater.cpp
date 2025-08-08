#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxWater(vector<int> &arr,int n)
{
    int i=0;
    int j = n-1;
    int ans = INT_MIN;
    
    while(i<j)
    {
        int height = j-i;
        int width =  min(arr[i],arr[j]);
        int w = height * width;
        ans = max(w,ans);
        
        if(arr[i] <= arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter Size of array where each element represents height of each wall"<<endl;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = maxWater(arr,n);
    
    cout << "Maximum water containing b/w 2 walls is "<<ans;

    return 0;
}