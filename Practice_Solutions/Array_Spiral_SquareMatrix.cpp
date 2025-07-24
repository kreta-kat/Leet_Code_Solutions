#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void print_boundary(vector<vector<int>> &arr, int n)
{
    int i = 0;
    int j = 0;
    int steps = n-1;
    while( steps >= 1)
    {
        for(int k =0; k<steps; k++)
        {
            cout<<arr[i][j] << " ";
            j++;
        }
        
        for(int k =0; k<steps; k++)
        {
            cout<<arr[i][j] << " ";
            i++;
        }
        
        for(int k =0; k<steps; k++)
        {
            cout<<arr[i][j] << " ";
            j--;
        }
        
        for(int k =0; k<steps; k++)
        {
            cout<<arr[i][j] << " ";
            i--;
        }
        
        i++;
        j++;
        steps = steps-2;
    }
    //in even case steps = 0; for that element left
    if(steps == 0)
    {
        cout << arr[i][j];
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
    print_boundary(arr, n);

    return 0;
}
