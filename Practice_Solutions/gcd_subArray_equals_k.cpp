#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    int temp = gcd(b%a,a);
    
    return temp;
}

int subArray_eq_k(int arr[],int n,int k)
{
    int count =0;
    
    for(int sp=1; sp<n; sp++)
    {
        int ans =0;
        for(int ep = sp; ep <n; ep++)
        {
            ans = gcd(ans, arr[ep]);
            
            if(ans < k)
                {break;}
            if(ans == k)
                {
                    count++;
                }    
        }
    }
    
    return count;
}


int main() {
    int n,k;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Enter K to which gcd should be equal to"<<endl;
    cin >>k;
    
    int ans = subArray_eq_k(arr,n,k);
    cout <<"No of subarray with gcd equal to "<<k<<endl;
    cout <<ans;
    return 0;
}