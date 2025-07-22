#include <iostream>
#include <cstdlib>

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

bool gcd_subseq(int arr[], int n)
{
   int ans = abs(arr[0]);
   
   for(int i=1; i<n; i++)
   {
       ans = gcd(ans, abs(arr[i]));
   }
   
   if(ans == 1)
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
    
    bool ans = gcd_subseq(arr,n);
    cout << ((ans) ? "Yes, there exists subsequence with gcd=1 ": "No, there does not exist subsequence with gcd=1");
    return 0;
}