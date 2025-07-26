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

void unique2singleElement(vector<int> &arr, int n)
{
    //XOR operation
    int v = 0;
    for(int i=0; i<n; i++)
    {
        v = v ^ arr[i];
    }
    
    //find 1st set bit in sum
    int idx=0;
    for(int i =0; i<32; i++)
    {
        if(checkSetBit(v,i) == true)
        {
            idx = i;
            break;
        }
        
    }
    //division in 2 sets and xor of 2 sets
    int set1 = 0;
    int set2 = 0;
    for(int i=0; i<n; i++)
    {
        if(checkSetBit(arr[i], idx) == true)
        {
            set2 = set2 ^ arr[i];
        }
        else
        {
            set1 = set1 ^ arr[i];
        }
    }
    
    cout <<set1 << " " << set2;
}

int main() {
    int n;
    cout << "Enter size of array to determine 2 unique element when others occurrence is 2"<<endl;
    
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    unique2singleElement(arr,n);
    
    return 0;
}