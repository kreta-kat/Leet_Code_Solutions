#include <iostream>
#include <vector>

using namespace std;

int subArray_bound_Maximum(vector<int> &arr,int n,int l,int r)
{
    int ans =0;
    //last greater index
    int lgei =0;
    // previous valid count for condition ep <L
    int prev_valid_count=0;
    //marking each and ep and finding valid starting points
    for(int ep =0; ep < n; ep++) {
        if(arr[ep] > r)
        {
            lgei = ep+1;
            prev_valid_count=0;
        }
        else if (arr[ep] >= l && arr[ep] <= r)
        {
            ans += ep - lgei + 1;
            prev_valid_count = ep - lgei + 1;
        }
        else
        {
            //arr[ep] <L
            ans += prev_valid_count;
        }
    }
    return ans;
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

    int l, r;
    cout << "Enter Left and Right Values"<<endl;
    cin >>l >> r;

    int ans = subArray_bound_Maximum(arr,n,l,r);
    cout<< "no. of sub array with maximum value within [l,r] " << ans;
    return 0;
}