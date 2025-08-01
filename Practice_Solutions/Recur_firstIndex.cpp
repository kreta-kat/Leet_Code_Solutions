#include <iostream>

using namespace std;

int firstIndex(int arr[], int n, int k, int idx)
{
    if(idx == n)
    {
        return -1;
    }
    
    int ans = firstIndex(arr,n,k,idx+1);
    if(arr[idx] == k) { return idx; }
    else { return ans; }
}

int main() {
   int n,k;
   cout << "Enter array size"<<endl;
   cin >> n;
   int arr[n];
   
   for(int i=0; i<n;i++)
   {
      cin >> arr[i]; 
   }
   cout << "Enter k to find its first index in array"<<endl;
   cin >> k;
   
   int ans = firstIndex(arr,n,k,0);
   cout << "The first occurence of "<< k << " is "<< ans;
    
    
    return 0;
}