/*
Author: Raymond Chen 
Description: HackerRank Challenge. Sat Jan. 2nd 2016
All Domains > Algorithms > Warmup > Plus Minus

Problem Statement:

Given an array of integers, calculate which fraction of the elements are positive, negative, and zeroes, respectively. Print the decimal value of each fraction.

Input Format:

The first line, N, is the size of the array. 
The second line contains N space-separated integers describing the array of numbers (A1,A2,A3,⋯,AN).

Output Format:

Print each value on its own line with the fraction of positive numbers first, negative numbers second, and zeroes third.

Sample Input:

6
-4 3 -9 0 4 1         
Sample Output:

0.500000
0.333333
0.166667
Explanation:

There are 3 positive numbers, 2 negative numbers, and 1 zero in the array. 
The fraction of the positive numbers, negative numbers and zeroes are 3/6=0.500000, 2/6=0.333333 and 1/6=0.166667, respectively.

Note: This challenge introduces precision problems. 
The test cases are scaled to six decimal places, though answers with absolute error of up to 10^−4 are acceptable.
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
    double positive, negative, zero = 0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       //directly check here if the entered integer is a positive or negative
       if(arr[arr_i] > 0){
           positive++;
       }
       else if(arr[arr_i] < 0){
           negative++;
       }
       else zero++;
    }
    //output the number of each category by the total number of integers to get your fraction.
    //double numbers gives better precision than floating point numbers
    cout << positive/n << endl;
    cout << negative/n << endl;
    cout << zero/n << endl;
    return 0;
}
