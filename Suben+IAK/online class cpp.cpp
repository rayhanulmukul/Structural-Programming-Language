/i hate ___
#include<bits/stdc++.h>

#define ll long long int
#define ld long double
#define pb push_back
#define mk make_pair
#define ii pair<int,int>

using namespace std;
double pi=2*acos(0.0);

/*freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);*/

template<typename T>
ostream& operator<<(ostream &os, const vector<T> &v) {
    os << '{';
    for (const auto &x : v) os << " " << x;
        return os << '}';
}

void solve(){
    string s; cin>>s;
    int ans=0;
    int n=s.size();
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')ans++;
            else break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int test_cases=1;
    //cin>>test_cases;

    for (int tc=1;tc<=test_cases;tc++){

        solve();
        //cout << "Case " << tc << ": " << solve() <<endl;
        //printf("Case %d: %.10lf\n",tc,ans);

    }

    return 0;
}
/*
    problems are the sign of life
*/
