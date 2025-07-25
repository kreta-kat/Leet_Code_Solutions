#include <iostream>
#include <vector>
using namespace std;

bool checkSetBit(int n, int i)
{
    if((n &(1 << i)) != 0)
    {
        return true;
    }
    
    return false;
}

int singleElement(vector<int> &arr, int n)
{
    int ans = 0;
    for(int i=0; i<32;i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(checkSetBit(arr[j],i))
            {
                count++;
            }
        }
        
        if(count%4 == 2)
        {
            ans = ans + (1 << i);
        }
    }
    
    return ans;
}


int main() {
    int n;
    cout << "Enter size of array to determine unique element which occurs twice when others occurrence is 4"<<endl;
    
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << singleElement(arr,n)<<endl;
    
    return 0;
}
