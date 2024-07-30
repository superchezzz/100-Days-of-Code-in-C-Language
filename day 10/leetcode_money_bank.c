#include<stdio.h>

int totalMoney(int n) {
    int t=0, w=0, d;
    for(int i=1; i<=n; i++){
        d=(i-1)%7;
        if(d==0&&i!=1){
            w++;
        }
        t+=(w+d+1);
    }
    return t;
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int money=totalMoney(n);
    printf("%d", money);
    return 0;
}