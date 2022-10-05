//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//数组例子：构造范围内的素数表
#include <stdio.h>
int main(){
    const int maxNumber=25;
    int isPrime[maxNumber];
    int i;
    int x;
    
    //初始化数组
    for(i=0;i<maxNumber;i++){
        isPrime[i]=1;
    }
    
    //标记范围内的i倍数为合数
    for(x=2;x<maxNumber;x++){
        if(isPrime[x]){
            for(i=2;i*x<maxNumber;i++){
                isPrime[i*x]=0;
            }
        }
    }
    
    //输出范围内质数
    for(i=2;i<maxNumber;i++){
        if(isPrime[i]){
            printf("%d\t",i);
        }
    }
    
    printf("\n");
}
