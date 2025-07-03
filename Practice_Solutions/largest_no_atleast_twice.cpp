#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int highestNumberIndex(vector<int> &arr)
{
    int max = INT_MIN;
    int secondmax = INT_MAX;
    int idx1= -1;
    for(int i =0; i<arr.size(); i++)
    {
        if(max<arr[i])
        {
            secondmax = max;
            max = arr[i];
            idx1=i;
        }
        else if(arr[i]>secondmax)
        {
            secondmax=arr[i];
        }

    }
    return secondmax*2<=max?idx1:-1;
}
    
int main() {
    vector<int> arr = {3,2,4,7,8,24};
    int ans = highestNumberIndex(arr);
    if(ans>-1){
        cout << "Highest Number atleast twice is "<< ans;
    }
    else{
        cout <<"Not present";
    }
}