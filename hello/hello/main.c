//
//  main.c
//  hello
//
//  Created by Haru on 2022/9/6.
//
//数组例子：构造范围内的素数表
#include <stdio.h>
int main(){
    const int size=3;
    int board[size][size];
    int i,j;
    int numOfX;
    int numOfO;
    int result=-1;//-1:没输赢，1:X赢，0:O赢
    
    //读入二维数组
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&board[i][j]);
        }
    }
    
    //判断行
    for(i=0;i<size && result==-1;i++){
        numOfO=numOfX=0;
        for(j=0;j<size;j++){
            if(board[i][j]==1){
                numOfX++;
            }else{
                numOfO++;
            }
        }
        if(numOfO==size){
            result=0;
        }else if(numOfX==size){
            result=1;
        }
    }
    
    //判断列
    if(result==-1){
        for(j=0; j<size && result==-1;j++){
            numOfO=numOfX=0;
            for(i=0;i<size;i++){
                if(board[i][j]==1){
                    numOfX++;
                }else{
                    numOfO++;
                }
            }
            if(numOfO==size){
                result=0;
            }else if(numOfX==size){
                result=1;
            }
        }
    }
   
    //判断对角线
        //正对角线
    numOfO=numOfX=0;
    for(i=0;i<size;i++){
        if(board[i][i]==1){
            numOfX ++;
        }else if(board[i][i]==0){
            numOfO ++;
        }
    }
    if(numOfO==size){
        result=0;
    }else{
        result=1;
    }
        //反对角线
    numOfO=numOfX=0;
    for(i=0;i<size;i++){
        if(board[i][size-i-1]==1){
            numOfX ++;
        }else{
            numOfO ++;
        }
    }
    
    return 0;
}
