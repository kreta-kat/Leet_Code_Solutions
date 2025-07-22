#include <iostream>
#include <unordered_map>

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

bool x_of_kind(int arr[], int n)
{
    unordered_map<int, int> hm;
    for(int i = 0; i<n; i++)
    {
        if(hm.find(arr[i]) != hm.end())
        {
            //if hashmap contains increase count
            int temp = hm[arr[i]];
            hm[arr[i]] = temp+1;
        }
        else
        {
            hm[arr[i]] = 1;
        }
    }
    
    int ans=0;
    for(auto key : hm)
    {
        ans = gcd(ans, key.second);
    }
    if(ans >= 2)
    {
        return true;
    }
    return false;
}


int main() {
    int n;
    cout <<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout <<((x_of_kind(arr,n))? "Cards Partition into one or more groups possible":"Cards Partition into one or more groups not possible");
    return 0;
}