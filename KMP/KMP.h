//
//  KMP.h
//  KMP
//
//  Created by Alibek on 11/2/14.
//  Copyright (c) 2014 Alibek. All rights reserved.
//

#ifndef __KMP__KMP__
#define __KMP__KMP__

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> KMP_table(string);
vector<int> KMP_search_all(string text, string pattern);
int KMP_search(string text, string pattern);
int KMP_count(string text, string pattern);

#endif /* defined(__KMP__KMP__) */
