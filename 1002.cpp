//
// Created by Saijun Hu on 4/10/18.
//


/*

1002. 写出这个数 (20)

        读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
 */

#include <iostream>
#include <string>
using namespace std;
void task1002(){
    char *chinese[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi"};
    string s;
    int  sum = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        sum += s[i]-'0';
    }
    s = std::to_string(sum);
    for(int i=0; i< s.length(); i++){
        if(i!=0) cout<<" ";
        cout<<chinese[s[i]-'0'];
    }
}
int main(){
    task1002();
    return 0;
}