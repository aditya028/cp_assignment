/*
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Output Format :
Sum
Constraints :
1 <= N <= 10^3
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26
Sample Input 2 :
3
4 2 1
Sample Output 2 :
7    
*/

#include<bits/stdc++.h>
using namespace std ; 

typedef long long      ll ;
typedef float          ft ;

ll sumOfArr(int arr[] , int size){
	if(size == 1)
		return arr[0] ; 
	return arr[0]+sumOfArr(arr+1 , --size) ; 
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("../IO file/input.txt" , "r" , stdin);
	freopen("../IO file/output.txt" , "w" , stdout);
#endif 
	
	int n ; cin >> n ;
	int* arr = new int[n] ; 
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i] ; 
	cout << sumOfArr(arr , n) ; 
}

//-----------------------------------------helper_fun---------------------------------------------//

