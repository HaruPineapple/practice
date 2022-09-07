//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//

#include <stdio.h>
//用数组统计数的个数
int main(){
    
    const int number=10;//觉得数组大小
    int x;
    int count[number];//定义数组
    int i;
    for(i=0;i<number;i++){
        count[i]=0;
    }//初始化数组
    scanf("%d",&x);
    while(x!=-1){
        if (x>=0 && x<=9){
            count[x] ++;//数组参与运算
        }
        scanf("%d",&x);
    }
    for(i=0;i<number;i++){
        printf("%d:%d\n",i,count[i]);
    }//遍历数组输出
    return 0;
}
