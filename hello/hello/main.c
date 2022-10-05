//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//取地址运算
#include <stdio.h>
int main(void){
    int a[10];
    
    printf("%p\n",&a);//0x7ff7bfeff270
    printf("%p\n",a);//0x7ff7bfeff270
    printf("%p\n",&a[0]);//0x7ff7bfeff270
    printf("%p\n",&a[1]);//0x7ff7bfeff274
}


//数组的地址
//数组单元的地址
//相邻的数组单元的地址
