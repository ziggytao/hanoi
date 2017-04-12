//
//  main.c
//  hanoi
//
//  Created by 陶越 on 17/2/24.
//  Copyright © 2017年 陶越. All rights reserved.
//

#include <stdio.h>
//汉诺塔问题，用递归方法
void hanoi( int n, char a, char b, char c);
//斐波那契：这一年等于前两年之和
int Fibonacci(int);
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    for(i = 1; i < 20; i++){
        printf("%d\n",Fibonacci(i));//注意i从1开始而不是0，否则出错
    }
    char a = 'a',b = 'b',c = 'c';
    hanoi(2,a,b,c);
    return 0;
}
//首先n － 1块从a移到b，即hanoi(n - 1,a,c,b)
//然后把最底下一块从a移到c
//最后把n － 1块从b移到c，即hanoi(n - 1,b,a,c)
void hanoi( int n, char a, char b, char c)
{
    if(n == 1){
        printf("%c -> %c\n",a,c);
    }
    else{
        hanoi( n - 1, a, c, b);
        printf("%c -> %c\n",a,c);
        hanoi(n - 1,b,a,c);
    }
}
int Fibonacci(int n)
{
    if(n == 1){
        return 1;
    }
    else if(n == 2){
        return 1;
    }
    else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
