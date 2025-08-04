#include <iostream>
#include <vector>

using namespace std;


vector<int> merge(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> temp(n+m);
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    while(p1<n && p2<m)
    {
        if(a[p1] < b[p2])
        {
            temp[p3] = a[p1];
            p1++, p3++;
        }
        else
        {
            temp[p3] = b[p2];
            p2++, p3++;
        }
    }
    
    while(p1<n)
    {
        temp[p3] = a[p1];
        p1++, p3++;
    }
    
    while(p2<m)
    {
        temp[p3] = b[p2];
        p2++, p3++;
    }
    
    return temp;
}

int main() {
    int n,m;
    cout << "Enter Size of Sorted array A" << endl;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter Size of Sorted array B" << endl;
    cin >> m;
    
    vector<int> b(m);
    for(int i=0; i<m;i++)
    {
        cin >> b[i];
    }
    
    vector<int> ans = merge(a,b,n,m);
    
    cout << "Sorted Combined Array"<< endl;
    for(int i=0; i<(n+m); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}