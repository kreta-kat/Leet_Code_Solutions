#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int> &arr, int n, int s, int m, int e)
{
    vector<int> temp(e-s+1);
    int p1 = s;
    int p2 = m+1;
    int p3 = 0;
    
    while((p1<=m) && (p2<=e))
    {
        if(arr[p1] < arr[p2])
        {
            temp[p3] = arr[p1];
            p1++, p3++;
        }
        else
        {
            temp[p3] = arr[p2];
            p2++, p3++;
        }
    }
    
    while(p1<=m)
    {
        temp[p3] = arr[p1];
        p3++, p1++;
    }
    
    while(p2<=e)
    {
        temp[p3] = arr[p2];
        p2++, p3++;
    }
    //place in array
    p3=0;
    for(int i=s; i<=e ; i++)
    {
        arr[i] = temp[p3];
        p3++;
    }
    
}

void mergeSort(vector<int> &arr, int n, int s, int e)
{
    //base case
    if(s == e)
    {
        return;
    }
    
    int m = s + (e-s)/2;
    
    mergeSort(arr,n,s,m);
    mergeSort(arr,n,m+1,e);
    
    merge(arr,n,s,m,e);
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
    
    mergeSort(arr,n,0,n-1);
    cout << "Sorted Array after Merge Sort is "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}