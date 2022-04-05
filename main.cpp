#include <iostream>
using namespace std;
/*
Ramadan Kareem
          *
         ***
        *****
       *******
      *       *
     *         *
    *           *
   *             *
  *               *
 * Ramadan Kareem  *
  *               *
   *             *
    *           *
     *         *
      *       *
       *******
        *****
         ***
          *
         ***
        ** **
       **   **
*/
#define mod 1000000007
#define run() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define F first
#define S second
#define ll long long
#define pb push_back
#define mp make_pair
#define nn "\n"
#define yes cout <<"YES"<< nn
#define no  cout << "NO"<< nn
#define sort_(x) sort(x.begin(),x.end())
#define rsort(x) sort(x.rbegin(),x.rend())
void solve()
{
    string s;
    //Ramadan Kareem
    getline(cin,s);
    int l=0,m=1,r;
    for(int i=1; i<=4; i++)
    {
        for(int j=10; j>=i; j--)
        {
            cout<<' ';
        }
        for(int j=1; j<=(i*2)-1; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=7; i<=12; i++)
    {
        for(int j=12; j>=i; j--)
        {
            cout<<' ';
        }
        for(int j=1; j<=1; j++)
        {
            cout<<'*';
        }
        if(i<12)
        {
            for(int j=2; j<=i*2-6; j++)
            {
                cout<<' ';
            }
            for(int j=1; j<=1; j++)
            {
                cout<<'*';
            }
        }
        else
            cout<<" "<<s<<"  *";
        cout<<endl;
    }

    for(int i=5; i>=1; i--)
    {
        for(int j=6-i+1; j>=1; j--)
        {
            cout<<' ';
        }
        for(int j=1; j>=1; j--)
        {
            cout<<'*';
        }
        for(int j=i*2+7; j>2; j--)
        {
            cout<<' ';
        }

        for(int j=1; j<=1; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=4; i>=1; i--)
    {
        for(int j=6-i+4; j>=0; j--)
        {
            cout<<' ';
        }

        for(int j=i*2-1; j>=1; j--)
        {
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i=2; i<=4; i++)
    {
        for(int j=6-i+4; j>=0; j--)
        {
            cout<<' ';
        }
        int c=0;
        for(int j=i*2-1; j>=1; j--)
        {
            if(j<=(i*2-1)-2&&j>=3)
                cout<<' ';
            else
                cout<<'*';
        }
        cout<<endl;
    }


}
int main()
{
    run();
    solve();
}
