 #include<cstdio>
using namespace std;
long long int a,b,c,i,arr[1501];
long long int f(long long int n)
{
if(arr[n]>0)return arr[n];
else
{
arr[n]=(a*f(n-1)+b*f(n-i)+c*f(n-7))%1000000007;
return arr[n];
}
}
int main()
{
long long int t,n;
scanf("%lld",&t);
for(i=1;i<=7;i++)arr[i]=1;
for(i=8;i<1501;i++)arr[i]=0;
while(t--)
{
	for(i=1;i<=7;i++)arr[i]=1;
for(i=8;i<1501;i++)arr[i]=0;

scanf("%lld%lld%lld%lld",&a,&b,&c,&i);
scanf("%lld",&n);
printf("%lld\n",f(n));
}
}
