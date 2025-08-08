#include <iostream>
#include <vector>

using namespace std;

bool two_Sum(vector<int> &arr, int n, int k)
{
    int i=0, j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j] == k)
        {
            return true;
        }
        else if(arr[i]+arr[j] > k)
        {
            j--;
        }
        else
        {
            //arr[i]+arr[j] < k
            i++;
        }
    }
    
    return false;
}

int main() {
    int n,k;
    cout << "Enter Size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter sum to find"<<endl;
    cin >> k;
    
    cout << (two_Sum(arr,n,k) ? "There exists a pair[i,j] such that A[i] + A[j] ==K" : "There does not exist a pair[i,j] such that A[i] + A[j] == K"); 

    return 0;
}