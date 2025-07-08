#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> RangeAddition(vector<int> &arr, int n, vector<vector<int>> &queries) {
    vector<int> result(n);
    for(int i =0; i<queries.size();i++)
    {
        int si = queries[i][0];
        int li = queries[i][1];
        int incr = queries[i][2];
        result[si] += incr;
        if(li+1 < n)
        {
            result[li+1] -= incr;
        }
    }
    vector<int> psum(n);
    psum[0] = result[0];
    for(int i=1; i<n; i++)
    {
        psum[i] = psum[i-1] + result[i];
    }
    return psum;
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << endl;
    cout << "Enter size of K queries"<<endl;
    int k;
    cin >>k;
    vector<vector<int>> queries(k,vector<int>(3));
    cout << "Input Query Table -> si, ei and increment"<< endl;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> queries[i][j];
        }
    }
    cout<<endl;
    vector<int> result = RangeAddition(arr, n, queries);
    cout<< "output"<<endl;
    for(int i = 0; i<result.size(); i++)
    {
        cout <<result[i] << " ";
    }
    return 0;
}