//
//  main.cpp
//  Credit check
//
//  Created by Tina Tsai on 2017/9/30.
//  Copyright © 2017年 Tina Tsai. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n;
    string n1,n2,n3,n4,all;
    int sum=0;
    cin >> n;
    while(n--){
        cin >> n1 >> n2 >> n3 >> n4;
        all = n1+n2+n3+n4;
        int even =0,even_c=0;
        int odd = 0, odd_c = 0;
        for(int j=0;j<16;j=j+2){ //even
            even=(int(all[j]-48))*2;
            if(even>=10){
                    even_c = even%10 + 1 +even_c;
            }
            else
                    even_c = even + even_c;
            }
        for(int j=1;j<16;j=j+2){ //odd 加總
                odd=(int(all[j]-48));
                odd_c = odd+ odd_c;
        }
        sum= odd_c + even_c;
        if(sum % 10==0)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
   }
    return 0;
}


