#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverse_array(vector<vector<int>> &arr, int n, int m)
{
    for(int i = 0; i<n; i++)
    {
        int sp = 0;
        int ep = m-1;
        while(sp < ep)
        {
            swap(arr[i][sp], arr[i][ep]);
            sp++;
            ep--;
        }
    }
}
void transpose_matrix(vector<vector<int>> &arr,int n, int m)
{
    for(int i =0; i<n;i++)
    {
        for(int j=0; j<i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
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
    
    reverse_array(arr, n, m);
    transpose_matrix(arr,n, m);
    
    cout<<endl<<endl;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout <<endl;
    }
    
    return 0;
}