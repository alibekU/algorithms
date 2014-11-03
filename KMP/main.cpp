//
//  main.cpp
//  KMP
//
//  Created by Alibek on 11/2/14.
//  Copyright (c) 2014 Alibek. All rights reserved.
//
#include "KMP.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string text = "GATATATGCATATACTT";
    string pattern = "ATAT";
    vector<int> res = KMP_search_all(text, pattern);
    for(int x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
