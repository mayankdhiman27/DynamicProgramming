#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
int fib[n];
fib[0]=0;
fib[1]=1;
for(int i=2;i<n;i++){
fib[i]=fib[i-1]+fib[i-2];
}

for(int j=0;j<n;j++){
printf("%d ",fib[j]);
}
printf("\n");
}
