/*
Author: Raymond Chen 
Description: HackerRank Challenge. Sat Jan. 2nd 2016
All Domains > Algorithms > Warmup > Staricase

Problem Statement:

Your teacher has given you the task of drawing a staircase structure. Being an expert programmer, 
you decided to make a program to draw it for you instead. Given the required height, can you print a staircase as shown in the example?

Input:
You are given an integer N depicting the height of the staircase.

Output:
Print a staircase of height N that consists of # symbols and spaces. For example for N=6, here's a staircase of that height:

     #
    ##
   ###
  ####
 #####
######
Note: The last line has 0 spaces before it.

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
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout << ' ';
        }
        for(int k=0;k<=n-i;k++){
            cout << '#';
        }
        cout << endl;
    }
    return 0;
}
