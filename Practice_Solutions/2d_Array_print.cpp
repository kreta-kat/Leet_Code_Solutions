#include <iostream> 
#include <vector> 

using namespace std; 
 
int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<int>>array(row,vector<int>(col));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >>array[i][j];
        }
    }
    cout<<"-------------------" << endl;
    //print row wise
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<"-------------------"<<endl;
    //print col wise
    for(int j=0; j<col; j++)
    {
        for(int i=0; i<row; i++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------"<<endl;
    //print wave form even rows - L-R odd rows - R-L
    for(int i=0; i<row; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<col; j++)
            {
                cout <<array[i][j] << " ";
            }
        }
        else
        {
            for(int j = col-1; j>=0; j--)
            {
                cout <<array[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
    
}