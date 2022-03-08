#include<bits/stdc++.h>
#define M 1000000
using namespace std;

vector<int>primes;

bool isprime(int n){
    if(n == 1) return false;
    if(!(1 & n)) return false;
    /*
    auto it = find(primes.begin() , primes.end() , n);
    return (it != primes.end() ? true : false);
    */
    for(int i = 3 ; i * i <= n ; i += 2){
        if(n % i == 0) return false;
    }
    return 1;

}

void sieve(){
    bool isprime[M];
    for(int i = 0 ; i<M ; i++) isprime[i] = true;
    for(int i = 3 ; i * i <= M ; i += 2){
        if(isprime[i]){
            for(int j = i * i ; j <= M ;j += i)
                isprime[j] = false;
        }
    }
    primes.push_back(2);
    for(int i = 3 ; i <= M ; i += 2){
        if(isprime[i]) primes.push_back(i);
    }
}

int main()
{
    //sieve();
    int n ; cin >> n ;
    bool p = isprime(n);
    cout << (p ? "YES" : "NotPrime") << "\n";
}






















