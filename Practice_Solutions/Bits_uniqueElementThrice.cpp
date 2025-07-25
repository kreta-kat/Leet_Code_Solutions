#include <iostream>
#include <vector>
using namespace std;

bool checkSetBit(int n, int i)
{
    if((n & (1 << i)) != 0)
    {
        return true;
    }
    else {
        return false;
    }
}
int singleElement(vector<int> &arr, int n)
{
    int ans =0;
    //to iterate bits index
    for(int i=0; i<32; i++)
    {
        int count =0;
        //to calculate for each number in array's ith bit index
        for(int j=0; j<n; j++)
        {
            if(checkSetBit(arr[j],i))
            {
                count++;
            }
        }

        if((count%3) == 1)
        {
            ans = ans + (1 << i);
        }
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array to determine unique element when others occurrence is 3"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << singleElement(arr,n);
    
    return 0;
}
