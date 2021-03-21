/*************************************************************************
	> File Name: OJ485.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Mar 17:58:27 2021
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[105],sum;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum += num[i];
    }
    int avg = sum / n, ans = 0;
    for(int i = 0; i < n - 1;i++){
        if (num[i] != avg){
            ans++;
            num[i + 1] += num[i] - avg;
            num[i] = avg;
        }
    }
    cout << ans << endl;
    return 0;
}
