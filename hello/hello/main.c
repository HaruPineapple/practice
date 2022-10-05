//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//数组例子：搜索
#include <stdio.h>
int search(int key,int a[],int length);

int main(void){
    int a[]={1,3,5,7,2,4,10,8,9,};
    int x;
    int loc;
    printf("请输入一个数字：");
    scanf("%d",&x);
    loc=search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc != -1){
        printf("%d位置在%d。\n",x,loc);
    }else{
        printf("%d不存在。\n",x);
    }
    return 0;
}

int search(int key,int a[],int length){
    int ret =-1;
    int i;
    for(i=0; i<length; i++){
        if(a[i]==key){
            ret = i;
            break;
        }
    }
    return ret;
}
