#include <iostream>
#include <vector>
using namespace std;

void reverse_array(vector<int> &arr, int idx1, int idx2)
{
    while(idx1 < idx2)
    {
        int temp = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = temp;
        idx1++;
        idx2--;
    }
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter input for array"<<endl;
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter k to rotate the array" <<endl;
    int k;
    cin >> k;
    //Effective rotations of k when k > n
    k=k%n;
    //Reverse the whole array;
    reverse_array(arr,0,n-1);
    //Reverse first k elements
    reverse_array(arr,0,k-1);
    //Reverse last k elements
    reverse_array(arr,k,n-1);
    //Output Array
    for(int item: arr)
    {
        cout<<item<<" ";
    }
    
    return 0;
}