/*Bismillahir Rahmanir Rahim */

#include<bits/stdc++.h>
#define ll                      long long int
#define ull                     unsigned long long int
#define nl                      printf("\n")
#define sc                      scanf
#define pf                      printf
#define all(a)                  (a.begin()),(a.end())
#define UNIQUE(X)               (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)          (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define MOD                     1000000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define v_min(a)                *min_element(a.begin(),a.end())
#define v_max(a)                *max_element(a.begin(),a.end())
#define v_sum(a)                accumulate(a.begin(),a.end(),0)
#define SORT(a)                 sort(a.begin(),a.end())
#define v_rev(a)                reverse(a.begin(),a.end())
#define II                      ( { int a ; scanf("%d",&a) ; a; } )
#define LL                      ( { ll a ; scanf("%lld",&a) ; a; } )
#define DD                      ({double a; scanf("%lf", &a); a;})
#define SS                      ( {string st ; cin>> st ; st ; } )
#define atoz(a)                  a.begin() , a.end()
#define lower_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::tolower )
#define upper_str(name1)         transform(name1.begin() , name1.end() , name1.begin(),::toupper )

/*
************************************************************
   Md Moin Uddin ( Ruman ) ,
  10th batch CSE ,ID : 11808011 ,
  Comilla University (2017-2018)
  Email : moinruman11@gmail.com, Phone : 01879-238107 .
************************************************************
                                                          */
using namespace std;


void read_and_solve()
{
int t = II , css = 0 ;
while(t--)
{
    int n  = II  ,i , j ;
    int x = 0 , cnt = 0 ;
    for( i = 0 ; i< n ; i++ )
    {
        int y = II ;
         x = x^y ;
         if(y == 1)
            cnt++;
    }
    if( cnt == n )
    {
        if( (cnt % 2 ) == 0)
            pf("Case %d: Alice\n" , ++css) ;
        else
            pf("Case %d: Bob\n" , ++css ) ;
    }
    else
    {
        if( x == 0 )
            pf("Case %d: Bob\n" , ++css) ;
        else
            pf("Case %d: Alice\n" , ++css) ;
    }
}



}


int main()
{
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);

    read_and_solve();

    return 0;
}


// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }

/*

// Binary search Method is as follows :
ll bin( ll a[], ll n, ll  sr   )
{
    ll lo = 0, hi = n, mid   ;
    while(  hi  >  lo  )
    {
        mid = (  lo + hi + 1  ) /  2 ;
        if(  a[mid] <= sr  )  // upper bound
            lo  =   mid  ;    // if lo == mid then ---> mid = (lo + hi + 1 ) / 2 ; else mid = ( lo + hi ) / 2 ;
        else
            hi =  mid - 1 ;

    }
    return hi ;



}

// Power Function Method is as follows :
ll Pow( ll x, ll n , ll M )
{

    ll result = 1 ;
    while( n > 0 )
    {
        if( n % 2 == 1 )
            result = ( result  * x ) % M ;
        x = ( x * x ) % M ;
        n = n / 2 ;
    }
    return result;
}

// modInverse Function Method is as follows :
ll modInverse( ll A , ll M )
{
    return Pow ( A , M - 2 , M ) ;
}

 */


