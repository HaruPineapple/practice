//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//数组例子：统计个数
#include <stdio.h>

int main(void){
    const int number=10;
    int i;
    int count[number];
    int x;
    
    //初始化数组
    for(i=0;i<number;i++){
        count[i]=0;
    }
    
    printf("请输入0-9之间的数字\n");
    //每次操作后的判断
    scanf("%d",&x);
    while(x != -1){
        if(x>=0 && x<number){
            count[x] ++;
        }
        scanf("%d",&x);
    }
    
    //输出
    for(i=0;i<number;i++){
        printf("%d:%d\n",i,count[i]);
    }
    
    return 0;
}
