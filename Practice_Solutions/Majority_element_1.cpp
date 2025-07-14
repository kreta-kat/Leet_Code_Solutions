#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cout<< "Enter size of array"<<endl;
    cin >> n ;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        
    }
    cout<<endl;
    cout <<"Calculating Majority Element" <<endl;
    int val = arr[0];
    int count = 1;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] == val)
        {
            count++;
        }
        else
        {
            if(count == 0)
            {
                val = arr[i];
                count = 1;
            }
            else
            {
                count--;
            }
        }
    }
    
    cout << "Majority element is "<<val;
    return 0;
}