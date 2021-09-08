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


// bool myComparison(const pair<ll,ll> &a,const pair<ll,ll> &b) {  return  ( a.second < b.second ); }


void read_and_solve()
{
    int t = LL, css  = 0 ;
    while(t--)
    {

        int n = II ;
        int a[n+2], i, j ;
        for( i = 1 ; i <= n ; i++ )
            a[i] = II ;

        sort(a+1, a+n+1 ) ;
        int  cnt = 0 ;

        for( i = 1 ; i <= n-2 ; i++ )
        {
            for( j = i+1 ; j <= n-1 ; j++ )
            {
                int x = a[i] + a[j] ;
                int l = j+1, h = n, mid;
                while(h > l )
                {
                    mid = ( h + l + 1 ) / 2 ;
                    if (  a[mid] >= x )
                        h = mid  -1 ;
                    else
                        l = mid ;
                }
                if( a[l] < x  )
                    cnt  +=(l-(j)) ;

            }
        }
        pf("Case %d: %d\n", ++css, cnt) ;


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

    read_and_solve();

    return 0;
}







