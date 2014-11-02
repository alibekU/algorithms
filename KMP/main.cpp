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
    string text = "acaaacacacdeacacdde";
    string pattern = "cac";
    cout << KMP_count(text, pattern)<<endl;
    return 0;
}
