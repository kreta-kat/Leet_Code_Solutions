#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int max_chunks(vector<int> &arr, int n)
{
    int count =0; 
    int maxtillnow= INT_MIN;
    for(int i =0; i<n;i++)
    {
        maxtillnow= max(maxtillnow,arr[i]);
        
        if(maxtillnow == i)
        {
            count++;
        }
    }
    
    return count;
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
    
    int ans = max_chunks(arr,n);
    cout << ans;
    return 0;
}
