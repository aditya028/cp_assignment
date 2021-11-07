/*
Given an array of length N and an integer x, 
you need to find if x is present in the array or not. 
Return true or false.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
'true' or 'false'
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true
Sample Input 2 :
3
9 8 10
2
Sample Output 2 :
false  
*/

#include<bits/stdc++.h>
using namespace std ; 

typedef long long      ll ;
typedef float          ft ;

bool checkNum(int arr[] , int size , int num){
	if(size == 0)
		return false ; 
	if(arr[0] == num)
		return true ; 
	return checkNum(arr+1 , --size , num) ; 
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../IO file/input.txt" , "r" , stdin);
	freopen("../IO file/output.txt" , "w" , stdout);
#endif 
	int n ; cin >> n ;
	int * arr = new int[n] ; 
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i] ; 
	int num ; cin >> num ; 
	if(checkNum(arr , n , num))
		cout << "true" ; 
	else
		cout << "false" ; 
}

//-----------------------------------------helper_fun---------------------------------------------//

