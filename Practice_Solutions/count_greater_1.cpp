//Given a array elements count total n, no. elements having atleat 1 element greater than itself
//here max number of array will never have any element greater to itself
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int max_element(vector<int> &arr, int n)
{
    int max = INT_MIN;
    for(int i =0; i<n; i++)
    {
          if(arr[i] > max)
          {
              max = arr[i];
          }
    }
    return max;
}

int max_count(vector<int> &arr, int n, int max_ele)
{
    int count = 0;
    for(int i =0; i<n; i++)
    {
        if(max_ele == arr[i])
        {
            count++;
        }
    }
    return count;
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
    int max_number = max_element(arr, n);
    int count = max_count(arr, n, max_number);
    cout<< "No of elements having numbers greater than itself are: "<< n-count;
    
    return 0;
}