#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n, m;
    cout<< "Enter rows and column of array"<<endl;
    cin >> n >> m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout << endl;
    for(int i=0; i<n;i++)
    {
        for(int j = 0; j<m; j++)
        {
        cin >> arr[i][j];
        }
    }
    cout<<endl;
    int sum =0;
    cout<< "Sum of all submatrix "<<endl;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            int occurrence = (i+1)*(j+1)*(n-i)*(m-j);
            sum += occurrence * arr[i][j];
        }
    }
    
    cout <<sum;
    return 0;
}