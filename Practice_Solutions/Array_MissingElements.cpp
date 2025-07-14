#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n ;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        
    }
    cout<<endl;
    cout <<"calculating Missing Elements" <<endl;
    
    int i =0;
    while(i<n)
    {
        // if number is at correct place and if i is negative or value or greater than n
        if(arr[i] == i+1 || arr[i] < 1 || arr[i] > n)
        {
            i++;
        }
        else 
        {
            // index not matching swapping to correct place
            int index = arr[i] -1;
            //condition for duplicates
            if(arr[i] == arr[index])
            {
                i++;
            }
            else {
            //swap
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            }
        }
    }
    //check for missing number
    int ans = n+1;
    for(int i =0; i<n; i++)
    {
        if(arr[i] != i+1)
        {
            ans = i+1;
            break;
        }
    }
    
    cout <<"Missing Number is:  " << ans;
    return 0;
}