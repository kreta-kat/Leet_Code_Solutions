#include <iostream>
#include <vector>

using namespace std;

void rearrange(vector<int> &arr, int n)
{
    //ref arr[0]
    int p1=1;
    int p2 = n-1;
    while(p1<=p2)
    {
        if(arr[p1] <= arr[0])
        {
            p1++;
        }
        else if(arr[p2] > arr[0])
        {
            p2--;
        }
        else {
            //swap arr[p1] & arr[p2]
            int temp = arr[p1];
            arr[p1] = arr[p2];
            arr[p2] = temp;
            p1++;
            p2--;
        }
    }
    
    //swap arr[0], arr[p2]
    int temp = arr[0];
    arr[0] = arr[p2];
    arr[p2] = temp;
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
    
    rearrange(arr,n);
    
    cout << "Rearrange Array so that arr[0] should go to correct position and elements <= arr[0] to left and element > arr[0] to right "<< endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}