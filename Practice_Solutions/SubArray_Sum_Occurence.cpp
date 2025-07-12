#include <iostream>
#include <vector>

using namespace std;

void optimised_sum_Array_occurrence(vector<int> &arr, int n)
{
    int sum =0;
    for(int i =0; i<n; i++)
    {
        // no of occurence of arr[i] = no. of valid starting point * no. of valid end point
        // valid starting point = [0,i] -> i-0+1 = i+1
        // valid ending point = [i, n-1] -> n -1 - i +1 = n-i
        // value -> occurence * arr[i]
        int occurrence = (i+1) * (n - i);
        sum += occurrence * arr[i];
    }
    cout <<sum<<endl;
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

    optimised_sum_Array_occurrence(arr,n);
    return 0;
}