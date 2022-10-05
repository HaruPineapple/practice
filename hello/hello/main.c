//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//取地址运算
#include <stdio.h>
int main(void){
    int i=0;
    int p;
    p=(int)&i;
    printf("0x%x\n",&p);//0xbfeff298
    printf("%p\n",&i);//0x7ff7bfeff29c
    printf("%lu\n",sizeof(int));//4
    printf("%lu\n",sizeof(&i));//8
}

//变量的地址
//相邻变量的地址
//&的结果的sizeof
