#include <iostream>
#include <cstdlib>
#include <vector>
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

vector<int> suffix_gcd(int arr[], int n)
{
    vector<int> sgcd(n);
    sgcd[n-1] = abs(arr[n-1]);
    for(int i = n-2; i>=0; i--)
    {
        sgcd[i] = gcd(sgcd[i+1], abs(arr[i]));
    }
    
    return sgcd;
}

vector<int> prefix_gcd(int arr[], int n)
{
    vector<int> pgcd(n);
    pgcd[0] = abs(arr[0]);
    for(int i=1; i<n; i++)
    {
        pgcd[i] = gcd(pgcd[i-1], abs(arr[i]));
    }
    
    return pgcd;
}

int delete_to_maximize(int arr[],int n)
{
    //calc prefix gcd and suffix gcd
    vector<int> pgcd = prefix_gcd(arr,n);
    vector<int> sgcd = suffix_gcd(arr,n);
    
    int ans = sgcd[1];
    for(int i=1; i<n-1; i++)
    {
        int left = pgcd[i-1];
        int right = sgcd[i+1];
        int overall = gcd(left, right);
        ans = max(ans, overall);
    }
    
    ans = max(ans, pgcd[n-2]);
    
    return ans;
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
    
    int ans = delete_to_maximize(arr,n);
    cout <<"Max GCD after removing an element"<<endl;
    cout <<ans;
    return 0;
}