#include <iostream>
#include <vector>

using namespace std;

bool checkSetBit(int n, int i)
{
    if((n & (1 << i)) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<vector<int>> printSubseq(vector<int> arr, int n)
{
    vector<vector<int>> ans;
    //calculate the total no. of subsequences
    int total_subSeq = 1 << n;
    
    for(int i=0; i<total_subSeq; i++)
    {
        vector<int> temp;
        for(int j=0; j<n; j++)
        {
            if(checkSetBit(i,j) == true)
            {
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter Size of Array"<<endl;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    vector<vector<int>> ans = printSubseq(arr,n);
    
    cout << "Printing all subsequence of array"<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout <<endl;
    }
    
    return 0;
}