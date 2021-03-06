/*************************************************************************
	> File Name: OJ484.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Mar 18:16:50 2021
 ************************************************************************/
#include<string>
#include<iostream>
using namespace std;

int main(){
    string a;
    int b[128] = {0};
    while(cin >> a){
        for(int i = 0; i < a.size(); i++){
            b[a[i]]++;
        }
    }
    int mmax = 0;
    for(int i = 'A'; i <= 'Z'; i++){
        mmax = max(mmax, b[i]);
    }
    for(int i = 0; i < mmax; i++){
        int last = -1;
        for(int j = 'A'; j <= 'Z'; j++){
            if (b[j] >= mmax - i) last = j;
        }

        for(int j = 'A'; j <= last; j++){
            if(b[j] >= mmax - i){
                cout << "*";
            }else{
                cout << " ";
            }
            if (j != last) cout << " ";
        }
        cout << endl;
    }
    for(int i = 'A'; i <= 'Z'; i++){
        if (i != 'A') cout << " ";
        cout << (char)i;
    }
    return 0;
}
