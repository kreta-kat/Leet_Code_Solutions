#include <iostream>
#include <vector>

using namespace std;

void rearrange_subArray(vector<int> &arr, int n, int s, int e)
{
    //ref = arr[s];
    int p1 = s+1;
    int p2 = e;
    
    while(p1 <= p2)
    {
        if(arr[p1] <= arr[s])
        {
            p1++;
        }
        else if(arr[p2] > arr[s])
        {
            p2--;
        }
        else
        {
            //swap
            // int temp = arr[p1];
            // arr[p1] = arr[p2];
            // arr[p2] = temp;
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
    }
    //swap arr[s] & arr[p2]
    // int temp = arr[s];
    // arr[s] = arr[p2];
    // arr[p2] = temp;
    swap(arr[s],arr[p2]);
}

int main() {
    int n,s,e;
    cout << "Enter Size of Array"<<endl;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Enter s and e to rearrange the subarray in correct position "<<endl;
    cin >> s >> e;
    rearrange_subArray(arr,n,s,e);
    
    cout << "Rearrange Array so that arr[s] should go to correct position and elements <= arr[s] to left and element > arr[s] to right "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}