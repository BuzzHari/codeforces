#include<stdio.h>
#include<math.h>

int main(){
    long long int m,n,a;
    scanf("%lld %lld %lld", &m, &n, &a); 
    long long int ans = ceil(m/(double)a)*ceil(n/(double)a);
    printf("%lld\n", ans);
    return 0;
}
