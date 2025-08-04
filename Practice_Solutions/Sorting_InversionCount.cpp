#include <iostream>
#include <vector>

using namespace std;

static int ans; 

void merge(vector<int> &arr, int n ,int s, int m, int e)
{
    vector<int> temp(e-s+1);
    int p1 = s;
    int p2 = m+1;
    int p3 = 0;
    
    while(p1<=m && p2<=e)
    {
        if(arr[p1] <= arr[p2])
        {
            temp[p3] = arr[p1];
            p1++, p3++;
        }
        else {
            // arr[p1] > arr[p2]
            temp[p3] = arr[p2];
            p2++, p3++;
            ans += (m-p1+1);
        }
    }
    
    while(p1<=m)
    {
        temp[p3] = arr[p1];
        p3++, p1++;
    }
    
    while(p2 <=e)
    {
        temp[p3] = arr[p2];
        p2++, p3++;
    }
    
    //swap
    p3=0;
    for(int i =s; i<=e; i++)
    {
        arr[i] = temp[p3];
        p3++;
    }
}

void mergeSort(vector<int> &arr, int n, int s, int e)
{
    if(s >= e)
    {
        return;
    }
    
    int m = (s + e)/2;
    
    mergeSort(arr,n,s,m);
    mergeSort(arr,n,m+1,e);
    
    merge(arr,n,s,m,e);
}

int inversionCount(vector<int> &arr, int n)
{
    ans = 0 ;
    mergeSort(arr,n,0,n-1);
    return ans;
}

int main() {
    int n;
    cout << "Enter Size of Array"<<endl;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = inversionCount(arr,n);
    cout << "Inversion count where a[i] > arr[j] but i < j: ";
    cout << ans;
    
    return 0;
}