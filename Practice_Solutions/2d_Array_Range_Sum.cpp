#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int range_sum(vector<vector<int>> &psum, int x1, int y1, int x2, int y2)
{
    int ans = 0;
    ans += psum[x2][y2];
    //formula 
    //psum[x2][y2] - psum[x1-1][y2] - psum[x2][y1-1] + psum[x1-1][y1-1]
    //edge case
    if(x1-1 >= 0)
    {
       ans = ans - psum[x1-1][y2];
    }
    
    if(y1-1 >= 0)
    {
        ans = ans - psum[x2][y1-1];
    }
    if(x1-1 >= 0 && y1-1 >= 0)
    {
        ans = ans + psum[x1-1][y1-1];
    }
    return ans;
}
vector<vector<int>> prefix_2d_sum(vector<vector<int>> &arr, int n, int m)
{
    vector<vector<int>> pSum(n, vector<int>(m));
    //addition in each row
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if( j == 0)
            {
                pSum[i][j] = arr[i][j];
            }
            else {
               pSum[i][j] =  pSum[i][j-1] + arr[i][j];
            }
        }
    }
    
    //addition in each column
    for( int j =0; j<m; j++)
    {
        for(int i =1; i<n; i++)
        {
            pSum[i][j] = pSum[i-1][j] + pSum[i][j];
        }
    }
    return pSum;
}

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
    cout<< "Enter Queries to get Submatrix Range sum - TL and BR"<<endl;
    cout<<"x1 y1 & x2 y2"<<endl;
    vector<vector<int>> queries(2 ,vector<int>(2));
    for(int i=0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cin >> queries[i][j];
        }
    }
    cout<<endl;
    
    vector<vector<int>> prefix_sum = prefix_2d_sum(arr,n,m);
    int ans = range_sum(prefix_sum,queries[0][0], queries[0][1], queries[1][0], queries[1][1]);
    
    cout <<ans;
    return 0;
}