/*
Last Index of Number

Given an array of length N and an integer x, 
you need to find and return the last index of integer x present in the array.
Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, 
return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
last index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
3
*/

#include<bits/stdc++.h>
using namespace std ; 

typedef long long      ll ;
typedef float          ft ;

int last_id(int arr[] , int num , int size , int id){
	if(size == id)
		return -1 ; 
	int last_ind = last_id(arr , num , size , ++id) ;  
	if(last_ind != -1)
		return last_ind ; 
	if(arr[id] == num)
		return id ;
	return last_ind ;
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
	cout << last_id(arr , num , n , 0) ; 
	
}


