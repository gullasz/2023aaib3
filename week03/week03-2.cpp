///字串string、字元char的差別
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    printf("%d\n",'a');///單引號代表一個字母，對應一個數值
    printf("%d\n","a");///雙引號代表很多個字母,就是陣列,就是指標

    if('a' == 97) printf("其實 'a' 是數值 97\n");
}
