#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int subArray_maxProduct(vector<int> &arr, int n)
{
    int prefix_product = 1;
    int max_1 = INT_MIN;
    
    for( int i =0; i<n; i++)
    {
        if(prefix_product == 0) {
            prefix_product = arr[i];
        }
        else {
            prefix_product = prefix_product * arr[i];
        }
        
        max_1 = (prefix_product > max_1) ? prefix_product : max_1; 
    }
    
    int suffix_product = 1;
    int max_2 = INT_MIN;
    
    for(int i = n-1 ; i >= 0; i--)
    {
        if(suffix_product == 0) {
            suffix_product = arr[i];
        }
        else {
            suffix_product = suffix_product * arr[i];
        }
        
        max_2 = (suffix_product > max_2) ? suffix_product : max_2;
    }
    
return (max_2 > max_1) ? max_2 : max_1;
}


int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }

    cout <<"Maximum Product with Sub Array "<< subArray_maxProduct(arr, n);
    return 0;
}