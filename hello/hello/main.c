//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//

#include <stdio.h>
//求多值的平均数，并输出比平均数大的值
int main(){
    int x;
    double sum=0;
    int cnt=0;
    int number[100];//定义了一个变量，这个变量是数组。里面每个单元是int，数组大小是100=可以放100个int
    scanf("%d",&x);
    while(x!=-1){
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0){
        printf("%f\n",sum/cnt);
        int i;
        for (i=0;i<cnt;i++){
            if(number[i]>sum/cnt){
                printf("%d\n",number[i]);
            }
        }
    }
    return 0;
}
