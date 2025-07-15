#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void print_boundary(vector<vector<int>> &arr, int n, int m)
{
    int i = 0;
    int j = 0;
    int rsteps = n-1;
    int csteps = m-1;
    while( csteps >= 1 && rsteps >= 1)
    {
        for(int k =0; k<csteps; k++)
        {
            cout<<arr[i][j] << " ";
            j++;
        }
        
        for(int k =0; k<rsteps; k++)
        {
            cout<<arr[i][j] << " ";
            i++;
        }
        
        for(int k =0; k<csteps; k++)
        {
            cout<<arr[i][j] << " ";
            j--;
        }
        
        for(int k =0; k<rsteps; k++)
        {
            cout<<arr[i][j] << " ";
            i--;
        }
        
        i++;
        j++;
        rsteps = rsteps-2;
        csteps = csteps-2;
    }
    //in even case steps = 0; for that element left
    if(rsteps == 0)
    {
        for(int k =0; k < csteps+1; k++)
        {
            cout << arr[i][j] << " ";
            j++;
        }
    }
    else if(csteps == 0)
    {
        for(int k =0; k < rsteps+1; k++)
        {
            cout << arr[i][j] << " ";
            i++;
        }
    }
}

int main() {
    int n,m;
    cout<< "Enter no of rows and columns for array"<<endl;
    cin >> n;
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
        cin >> arr[i][j];
        }
    }
    
    print_boundary(arr, n, m);

    return 0;
}
