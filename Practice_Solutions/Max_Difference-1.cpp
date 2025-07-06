// Calculate max value of arr[i] - arr[j]
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

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
    
    //For maximum difference - calculate max and min 
    int max_no = INT_MIN;
    int min_no = INT_MAX;
    
    for(int i=0; i<n;i++)
    {
        if(arr[i]>max_no)
        {
            max_no = arr[i];
        }
        if(arr[i]<min_no)
        {
            min_no = arr[i];
        }
    }
    
    cout<< "max no "<< max_no<<endl;
    cout << "min no " << min_no<<endl;
    cout<< "Max difference is "<< max_no - min_no;
     
     return 0;
}
