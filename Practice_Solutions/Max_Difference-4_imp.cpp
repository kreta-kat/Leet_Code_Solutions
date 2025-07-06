//abs(arr[i] - arr[j]) +i-j 
// max (max-diff2, max-diff3)
//max (arr[i]+i - (arr[i]+j) , (arr[i] - i) - (arr[j]-j)))
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int max_no(vector<int> &arr)
{
    int min_no = INT_MAX;
    int max_no = INT_MIN;
    
    for(int i=0; i<arr.size();i++)
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
    return max_no-min_no;
    
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
    //Equation is arr[i] - arr[j] - i + j -> {arr[i] - i} - {arr[j] - j} i.e indexes should be subtracted make an updated array -> arr[i] - i    
    vector<int> arr2(n);
    for(int i=0; i<n; i++)
    {
        arr2[i] = arr[i] -i;
    }
    // Calculate max value of arr[i] - arr[j] + i - j
    for(int i =0; i<n; i++)
    {
        arr[i] = arr[i] + i;
    }
    //For maximum difference - calculate max and min 
    //cond1 = (arr[i]+i) - (arr[j] + j)
    int cond1 = max_no(arr);
    //cond1 = (arr[i]-i) - (arr[j] - j)
    int cond2 = max_no(arr2);
    cout << "Max difference is ";
    cout<< cond1 << " " << cond2<< endl;
    cout <<(cond1>cond2? cond1 : cond2);
     
     return 0;
}


//alternate
int max_difference(vector<int> &arr, bool add_index) {
    int min_val = INT_MAX, max_val = INT_MIN;
    
    for (int i = 0; i < arr.size(); i++) {
        int val = add_index ? arr[i] + i : arr[i] - i;
        min_val = min(min_val, val);
        max_val = max(max_val, val);
    }

    return max_val - min_val;
}

int main() {
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter input for array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cond1 = max_difference(arr, true);  // arr[i] + i
    int cond2 = max_difference(arr, false); // arr[i] - i

    cout << "Max difference is: " << max(cond1, cond2) << endl;
    return 0;
}