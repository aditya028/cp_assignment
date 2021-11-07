/*
All Indices of Number

Given an array of length N and an integer x, 
you need to find all the indexes where x is present in the input array.
Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
indexes where x is present in the array (separated by space)
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4
*/

#include<bits/stdc++.h>
using namespace std ; 

typedef long long      ll ;
typedef float          ft ;

int * all_id(int * arr , int size , int num , int id , int& index , int * ans){
	if(size == id)
		return ans ;
	if(arr[id] == num){
		ans[index++] = id ; 
	}
	ans = all_id(arr , size , num , ++id , index , ans) ;
	return ans ; 
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
	int * ans = new int[n] ; 
	int index = 0 ; 
	ans = all_id(arr , n , num , 0 , index , ans) ; 
	for(int i = 0 ; i < index ; i++)
		cout << ans[i] << " " ;
}


