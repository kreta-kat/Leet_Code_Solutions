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
    cout << "Enter indexes which to swap" <<endl;
    int idx1, idx2;
    cin >> idx1 >> idx2;
    reverse_array(arr,idx1,idx2);
    
    for(int item: arr)
    {
        cout<<item<<" ";
    }
    
    return 0;
}