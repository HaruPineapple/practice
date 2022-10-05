//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//指针的使用
#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void){
    int a[]={1,2,3,4,5,6,7,12,33,44,55};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min,max);
}

void minmax(int a[],int len,int *min,int *max){
    int i;
    *min=*max=a[0];
    for(i=1;i<len;i++){
        if(a[i]<*min){
            *min=a[i];
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
}
