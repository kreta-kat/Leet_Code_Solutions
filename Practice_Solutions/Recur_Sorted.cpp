#include <iostream>

using namespace std;

bool checkSorted(int arr[], int n, int idx)
{
    if(idx == n) {return true;}
    
    if(checkSorted(arr,n,idx+1))
    {
        if(arr[idx] < arr[idx+1]) { return true; }
        else { return false;}
    }
    else { return false;}
}

int main() {
   int n;
   cout << "Enter array size"<<endl;
   cin >> n;
   int arr[n];
   
   for(int i=0; i<n;i++)
   {
      cin >> arr[i]; 
   }
   
   cout << (checkSorted(arr,n-1,0) ? "Array is sorted": "Array is not sorted");
    
    
    return 0;
}