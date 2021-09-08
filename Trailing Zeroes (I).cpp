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
#define flash_all ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }

#define Max 1000006
bool mark[ Max ];
vl prime ;

ll sieve( ll n )
{
    ll i, j, lmt = sqrt(n) ;
    mark[1] = 1 ;
    for(i = 4 ; i <= n ; i += 2 )
        mark[i] = 1 ;
    prime.pb(2);
    for(i = 3 ; i <= n ;  i += 2 )
    {

        if( mark[i] == 0 )
        {
            prime.pb(i);
            if( i <= lmt )
            {
                for( j = i*i ; j <= n ; j += ( 2 * i ) )
                    mark[j] = 1 ;

            }
        }

    }

}





ll primeFactorize( ll n )
{

    ll ans = 1 ;

    for( ll i = 0; i < prime.size() and prime[i] * prime[i] <= n ; i++ )
    {
        ll k = 1 ;
        if( n % prime[i] == 0 )
        {

            while( n % prime[i] == 0 )
            {
                n /= prime[i];
                k++;
                if(n==0 or n==1) break;

            }
            ans *= k ;


        }
    }
    if( n > 1 )
        ans *= 2 ;

    return ans ;
}






void read_and_solve()
{
    sieve(Max);
    ll t = LL ;
    ll css = 0 ;
    while(t--)
    {

        ll n = LL ;


        ll ans =  primeFactorize( n ) -1 ;
        printf("Case %lld: %lld\n" , ++css , ans) ;



    }


}


/*

 SET :
        set<int>S;
        set<int>::iterator it;
        for(int i=1;i<100;i++)
          {
            S.insert(i%10);
          }

        cout<<"Set size: "<<S.size()<<endl;

        cout<<"Set element: ";
        for(it=S.begin();it!=S.end();it++)
            cout<<(*it)<<" ";
        cout<<endl;


       }


*/

int main()
{
    CIN ;

    read_and_solve();

    return 0;
}






