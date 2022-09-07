//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//数组例子：素数
#include <stdio.h>

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

int main(void){
    const int number =100;
    int prime[number]={2};
    int count=1;
    int i=3;
    while(count <number){
        if(isPrime(i, prime, count)){
            prime[count++]=i;//做了两件事：1.把i放在count=1的位置；2.cpunt++。
        }
        i++;
    }
    for(i=0;i<number;i++){
        printf("%d",prime[i]);
        if((i+1)%5)printf("\t");
        else printf("\n");
    }
    return 0;
    
    
//    int x;
//    scanf("%d",&x);
//    if(isPrime(x)){
//        printf("%d is a prime.\n",x);
//    }else{
//        printf("%d is not a prime.\n",x);
//    }
//    return 0;
}
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
    int ret=1;
    int i;
    for( i=0; i<numberOfKnownPrimes; i++ ){
        if(x % knownPrimes[i]==0){
            ret = 0;
            break;
        }
    }
    return ret;
}
