#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<vector<int>> prefix(vector<vector<int>> &arr, int n, int m)
{
    vector<vector<int>> pfSum(n, vector<int>(m));
    //row additon
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(j == 0)
            {
                pfSum[i][j] = arr[i][j];
            }
            else {
                pfSum[i][j] = pfSum[i][j-1] + arr[i][j];
            }
        }
    }
    //col addition
    for(int j = 0; j<m; j++)
    {
        for(int i=1; i<n; i++)
        {
            pfSum[i][j] = pfSum[i-1][j] + pfSum[i][j];
        }
    }
    
    return pfSum;
}

int sum_Region(int x1, int y1, int x2, int y2, vector<vector<int>> &pfSum)
{
    int ans = 0;
    ans = ans + pfSum[x2][y2];
    if(x1 -1 >= 0)
    {
        ans = ans - pfSum[x1-1][y2];
    }
    if(y1 -1 >= 0)
    {
        ans = ans - pfSum[x2][y1-1];
    }
    if(x1-1 >=0 && y1-1 >= 0)
    {
        ans = ans + pfSum[x1-1][y1-1];
    }
    return ans;
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
    cout<<endl;
    cout <<"calculating prefix sum" <<endl;
    vector<vector<int>> pfSum = prefix(arr,n,m);
    cout <<"Calculating max of submatrix"<<endl;
    int ans = INT_MIN;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            //BR coordinates fixed = n-1, m-1
            int sum = sum_Region(i, j, n-1, m-1, pfSum);
            ans = max(ans,sum);
        }
        
    }
    
    cout <<"Sum for Maximum SubMatrix " << ans;
    return 0;
}