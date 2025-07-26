#include <iostream>
#include <vector>

using namespace std;

bool checkSetBit(int n, int i)
{
    if((n & (1 << i)) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int maxAndPair(vector<int> &arr, int n)
{
    for(int i=31; i>=0; i--)
    {
        int count =0;
        for(int j=0; j<n; j++)
        {
            if(checkSetBit(arr[j],i) == true)
            {
                count++;
            }
        }
        
        if(count >= 2)
        {
            for(int j=0; j<n; j++)
        {
            if(checkSetBit(arr[j],i) == false)
            {
                arr[j]=0;
            }
        }
        }
        
    }
    
    int idx1 = -1;
    int idx2 = -1;
    for(int k = 0; k<n; k++)
    {
        if((arr[k] > 0) && (idx1 == -1))
        {
            idx1 = k;
        }
        else if ((arr[k] > 0) && (idx2 == -1))
        {
            idx2 = k;
            break;
        }
    }
    
    return arr[idx1] & arr[idx2];
}

int main() {
    int n;
    cout << "Enter size of array to determine max of arr[i] and arr[j]"<<endl;
    
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << maxAndPair(arr,n);
    
    return 0;
}