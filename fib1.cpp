/*************************************************************************
	> File Name: fib1.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 11 Mar 14:09:18 2021
 ************************************************************************/

#include<iostream>
using namespace std;


long long num[50] = {1, 1};

int main(){
    for (int i = 2; i < 50; i++){
        num[i] = num[i - 1] + num[i - 2];
    }
    for (int i = 1; i < 50; i++){
        cout << i << ":" << num[i] << endl;
    }
    return 0;
}
