#include <iostream>
#include <vector>

using namespace std;
void sub_array(vector<int> &arr, int s, int e)
{
    for(int i=s; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}
void print_subArrary_bruteForce(vector<int> &arr, int n)
{
    for(int s =0; s<n; s++)
    {
        for(int e = s; e<n ; e++)
        {
            //sub_array[s,e];
            sub_array(arr,s,e);
        }
    }
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }

    print_subArrary_bruteForce(arr,n);
    return 0;
}