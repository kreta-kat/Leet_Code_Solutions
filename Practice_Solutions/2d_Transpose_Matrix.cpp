#include <iostream>
#include <vector>

using namespace std;
void print_transpose_matrix(vector<vector<int>> &arr,int n, int m)
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

    print_transpose_matrix(arr,n, m);
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