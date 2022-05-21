#include <bits/stdc++.h>
// cerr << " Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " ms  \n " ;
using namespace std;
#define int long long
#define pi acos(-1)
#define all(x) x.begin(), x.end()
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl;
#define debg cout << "yes" << endl;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define vec vector<int>
#define firs first
#define sec second
#define fo(i, n) for (int i = 0; i < n; i++)
#define foo(i, a, n) for (int i = a; i <= n; i++)
#define ln length()
#define spc(x) cout << x << " ";
#define ent(x) cout << x << "\n";
#define mem(x, v) memset(x, v, sizeof(x));
int power(int n, int m)
{
    int ans = 1;
    while (m)
    {
        ans *= n;
        m--;
    }
    return ans;
}
int32_t main()
{
    fast;
    int n, x;
    cin >> n;
    vec v(n);
    fo(i, n)
    {
        cin >> v[i];
    }
    int sum = 0;
    int k = 0;
    int c = 0;
    map<int, int> mp;
    mp[0] = 1;
    fo(i, n)
    {

        sum += v[i];
     
         int d=sum%n;
         if(d<0)d+=n;
        c += mp[ d];
        
        mp[d]++;
    }
    ent(c)
}