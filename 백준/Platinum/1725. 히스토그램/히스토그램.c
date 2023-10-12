#include <stdio.h>

int n, v[100000];
long long min(long long a, long long b) { return a<b?a:b; }
long long max(long long a, long long b) { return a>b?a:b; }
long long dnc(int s, int e)
{
    if(s+1==e) return v[s];
    if(s+2==e) return max(max(min(v[s],v[s+1])*2,v[s]),v[s+1]);
    int c=(s+e)/2;
    int i=c-2, j=c+1;
    long long r=min(v[c-1],v[c]), m=r*2;
    while(s<=i && j<e)
    {
        r=min(v[i]<v[j]?v[j++]:v[i--],r);
        m=max(r*(j-i-1),m);
    }
    while(s<=i)
    {
        r=min(v[i--],r);
        m=max(r*(j-i-1),m);
    }
    while(j<e)
    {
        r=min(v[j++],r);
        m=max(r*(j-i-1),m);
    }
    return max(m, max(dnc(s,c), dnc(c,e)));
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",v+i);
    printf("%lld\n",dnc(0,n));
}