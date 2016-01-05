/*
Author: Raymond Chen 
Description: HackerRank Challenge. Sun Jan. 3rd 2016
All Domains > Algorithms > Warmup > Time Conversion

Problem Statement:

Given a time in AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock and 12:00:00 on a 24-hour clock.

Input Format:

A time in 12-hour clock format (i.e.: hh:mm:ssAM or hh:mm:ssPM), where 01≤hh≤12.

Output Format:

Convert and print the given time in 24-hour format, where 00≤hh≤23.

Sample Input:

07:05:45PM
Sample Output

19:05:45
Explanation

7 PM is after noon, so you need to add 12 hours to it during conversion. 12 + 7 = 19. 
Minutes and seconds do not change in 12-24 hour time conversions, so the answer is 19:05:45.
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
    string time;
    int hour;
    cin >> time;
    int length = time.length();
    char array[length];
    time.copy(array, length);
    
    if (array[8]!= 'A' && array[8] != 'P'){
    	cout << "Please enter a correctly formmated standard time." << endl;
    	return 0;
    }
    else if (array[8] == 'P'){
    	time = array[0] + array[1];
        //need to fix this some other time. 
        //In the event it's 12am it needs to return 00:00:00 and 12pm remains 12:00:00
        if (array[0] == '0'){
            hour = (array[1] - 48 + 12); //uses acsii time,
                                         //to self to come back to this piece and optimize it -_-
        }
        else if (array[0] == '1'){
            if(array[1] == '2'){
               time = "12";
                for(int i = 2; i < 8; i++){
    		        time += array[i];
                }
               cout << time << endl;
               return 0;
            }
            hour = (array[1] - 48 + 12 + 10);
         }
        //turns int into string so i can concatenate the char array to the string.
        time = to_string(hour);
        //loop concatenates the char array
    	for(int i = 2; i < 8; i++){
    		time += array[i];
    	}
    	cout << time << endl;
    }
    else{
        if (array[0] == '1' && array[1] == '2'){
            time = "00";
            for(int i = 2; i < 8; i++){
    		    time += array[i];
            }
            cout << time << endl;
            return 0;          
        }
        for(int j = 0; j < 8; j++){
            cout << array[j];
        }
        
    }
    return 0;
}
