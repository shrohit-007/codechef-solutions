#include<bits/stdc++.h>
#define ll long long
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
    int n;cin>>n;
    int red[3],green[3],blue[3];
    for(int i=0;i<3;i++)
    cin>>red[i];
    for(int i=0;i<3;i++)
    cin>>green[i];
    for(int i=0;i<3;i++)
    cin>>blue[i];
    int j=0;
    int ans=0;
    for(int i=0;i<3;i++)
    {
       if(i==0)
       {
           j=0;
           if(red[j]<n)
           {
               if(green[j]>0)
               {
                   ans+=green[j];
                   red[j]+=green[j];
                   if(red[j+1]>=green[j])
                   {
                       red[j+1]-=green[j];
                       green[j+1]+=green[j];
                       green[j]=0;
                   }
                   else if(green[j]>red[j+1])
                   {
                       green[j]-=red[j+1];
                       green[j+1]+=red[j+1];
                       red[j+1]=0;
                       red[j+2]-=green[j];
                       green[j+2]+=green[j];
                       green[j]=0;
                   }
                   else
                   {
                       red[j+1]=0;
                       green[j+1]+=green[j];
                       green[j]=0;
                   }
               }
               if(blue[j]>0)
               {
                   ans+=blue[j];
                   red[j]+=blue[j];
                   if(red[j+2]>=blue[j])
                   {
                       red[j+2]-=blue[j];
                       blue[j+2]+=blue[j];
                       blue[j]=0;
                   }
                   else if(blue[j]>red[j+2])
                   {
                       blue[j]-=red[j+2];
                       blue[j+2]+=red[j+2];
                       red[j+2]=0;
                       red[j+1]-=blue[j];
                       blue[j+1]+=blue[j];
                       blue[j]=0;
                   }
                   else
                   {
                       red[j+2]=0;
                       blue[j+2]+=blue[j];
                       blue[j]=0;
                   }
               }
           }
           
       }
       else if(i==1)
       {
           j=1;
           if(green[j]<n)
           {
               ans+=n-green[j];
               break;
           }
       }
    }
    cout<<ans<<endl;


}
int main()
{
    fios int t=1;
    cin>>t;
    while(t--)
    solution();
}
   
