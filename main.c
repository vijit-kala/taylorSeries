#include <stdio.h>
#include <stdio.h>


double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else{
        r = e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int revFact(int n){
    if(n == 20+1) return 1;
    return n*revFact(n+1);
}


int main(){
    printf("%lf",e(3,10));
    revFact(5);
    return 0;
}
