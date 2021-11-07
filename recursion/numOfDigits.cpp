/*
Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1
*/

#include<bits/stdc++.h>
using namespace std ; 

typedef long long      ll ;
typedef float          ft ;

int numOfDigits(int n){
	if(n < 10)
		return 1 ; 
	return numOfDigits(n/10)+1 ;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../IO file/input.txt" , "r" , stdin);
	freopen("../IO file/output.txt" , "w" , stdout);
#endif 
	
	int n ; cin >> n ;
	cout << numOfDigits(n) ; 
	return 0 ;
}


