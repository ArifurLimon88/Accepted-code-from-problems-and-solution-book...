#include<bits/stdc++.h>
using namespace std;
#define LOL ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define llu long long unsigned int
#define pf printf
#define sf scanf
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int ,int>
//const int sz=;
int ara[15][3];
int sts[15];
int n;
int Lcm(int a,int b)
{
    return (a/__gcd(a,b))*b;
}
bool fun(int time)
{
    int cnt=0,i,j;
    for(i=0;i<n;i++){
        if(sts[i]<=ara[i][0]) ++cnt;
    }
    if(n==cnt)  return true;
    for(i=0;i<n;i++){
        if(((ara[i][0]+ara[i][1])==sts[i]) || (sts[i]==ara[i][0] && (2*cnt>=n))) sts[i]=1;
        else ++sts[i];
    }
    return false;
}
int main()
{
    LOL
    int a,b,c,i,j,k,q,p,x,y,sum,ct,ct1,m,l,r,len,x1,y1,mn,mx,ans,h,sum1;
    char ch;
    double d;
    string str1,str2,str;
    bool bl,bl1;
    int cs=1,t;
    while(cin>>n && n)
    {
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                cin>>ara[i][j];
            }
            sts[i]=ara[i][2];
        }
        int lcm=1;
        for(i=0;i<n;i++){
            lcm=Lcm(lcm,(ara[i][0]+ara[i][1]));
        }
        bl=false;
        cout<<"Case "<<cs<<": ";
        for(i=1;i<=lcm+2;i++){
            bl=fun(i);
            if(bl) {
                cout<<i<<endl;
                bl=true;
                break;
            }
        }
        if(!bl) cout<<"-1"<<endl;
        ++cs;
    }


}
