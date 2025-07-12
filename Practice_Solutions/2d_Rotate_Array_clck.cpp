#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse_array(vector<int> tr, int m)
{
    int sp = 0;
    int ep = m-1;
    while(sp<ep)
    {
        int temp = tr[sp];
        tr[sp] = tr[ep];
        tr[ep] = temp;
        sp++;
        ep--;
    }
    return tr; 
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

void print_rotate_matrix_clockwise(vector<vector<int>> &arr,int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0 ;j<m; j++)
        {
            vector<int> temp = reverse_array(arr[i],m);
            arr[i] = temp;
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
    
    transpose_matrix(arr,n, m);
    print_rotate_matrix_clockwise(arr,n, m);
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