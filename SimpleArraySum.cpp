/*
Author: Raymond Chen 
Description: HackerRank Challenge. Thurs Dec. 31st 2015
All Domains > Algorithms > Warmup > Simple Array Sum

Problem Statement:

You are given an array of integers of size N. Can you find the sum of the elements in the array?

Input:
The first line of input consists of an integer N. The next line contains N space-separated integers representing the array elements. 
Sample:

6
1 2 3 4 10 11
Output:
Output a single value equal to the sum of the elements in the array. 
For the sample above you would just print 31 since 1+2+3+4+10+11=31.
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int sum = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       sum += arr[arr_i];
    }
    cout << sum;
    return 0;
}
