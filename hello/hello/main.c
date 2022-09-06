//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//

#include <stdio.h>
//会交换a和b的值吗？
void swap(int a,int b);
int main(){
    int a=5;
    int b=6;
    swap(a,b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
}
//不会交换a和b的值：C语言在调用函数时，只能传值给函数
//  过去                    =>     现在
//----------------------------------------
//  形式参数form parameter   =>     参数
//  实际参数real parameter   =>     值
