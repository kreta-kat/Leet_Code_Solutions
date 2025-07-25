#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> smallest_prime_factor(int n)
{
    vector<int> spf(n+1);
    for(int i=0;i<=n;i++)
    {
        spf[i] = i;
    }
    
    for(int i=2; i*i<=n; i++)
    {
        if(spf[i] == i)
        {
            //number is prime
            for(int j = i*i; j<=n; j=j+i)
            {
                spf[j] = min(spf[j],i);
            }
        }
    }
    
    return spf;
}
vector<int> sieve_of_eratosthenes(int n)
{
    vector<bool> number_array(n+1,true);
    number_array[0] =number_array[1] = false;
    for(int i =2; i*i <= n; i++)
    {
        if(number_array[i])
        {
            //is prime
            for(int j =i*i; j<=n; j=j+i)
            {
                number_array[j] = false;
            }
        }
    }
    
    //ans array consisting primes only
    vector<int> ans;
    for(int i=0; i<=n; i++)
    {
        if(number_array[i])
        {
            ans.push_back(i);
        }
    }
    
    return ans;
}

int main() {
    int n,q;
    cout <<"Enter number for range to calculate smallest prime factors for multiple queries"<<endl;
    cin >> n;
    cout<<"Enter query array size"<<endl;
    cin >> q;
    vector<int> query(q);
    for(int i=0; i<q; i++)
    {
        cin >> query[i];
    }
    vector<int> smallest_pf = smallest_prime_factor(n);
    
    for(int i=0; i<q; i++)
    {
        int x = query[i];
        while(x>1)
        {
            cout<<smallest_pf[x]<<" ";
            x = x/smallest_pf[x];
        }
        cout <<endl;
    }

    return 0;
}