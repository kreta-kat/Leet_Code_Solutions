#include <iostream>
#include <vector>

using namespace std;

vector<int> prefix_sum(vector<int> &arr, int n)
{
    vector<int> pf_sum(n);
    pf_sum[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        pf_sum[i] = pf_sum[i-1] + arr[i];
    }
    
    return pf_sum;
}

void optimised_sum_subArray_PrefixSum(vector<int> &pf_sum, int n)
{
    int sum=0;
    for(int s =0; s<n; s++)
    {
        for(int e = s; e<n; e++)
        {
            if(s == 0)
            {
                sum += pf_sum[e];
            }
            else {
            sum += pf_sum[e] - pf_sum[s-1];
            }
        }
    }
    cout <<sum<<endl;
}

int sub_array(vector<int> &arr, int s, int e)
{
    int sum =0; 
    for(int i =s; i<=e; i++)
    {
        sum += arr[i];
    }
    return sum;
}
void sum_subArrary_bruteForce(vector<int> &arr, int n)
{
    int sum =0;
    for(int s =0; s<n; s++)
    {
        for(int e = s; e<n ; e++)
        {
            //sub_array[s,e];
            sum += sub_array(arr,s,e);
        }
    }
    cout <<sum<<endl;
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }

    sum_subArrary_bruteForce(arr,n);
    vector<int> pf_sum = prefix_sum(arr, n);
    optimised_sum_subArray_PrefixSum(pf_sum, n);
    return 0;
}