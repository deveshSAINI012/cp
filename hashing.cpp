#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr;
	arr={3,2,1,3,1,3};
	//we have to count how many times an elemment came
	// create an hash array  where insex i tells the no. and hash[i] is its occurances;
	int hash[5]={0};
	int n=arr.size();
	for(int i=0;i<n;i++){
		hash[arr[i]]+=1;

	}
	// no of occurances of 3 are
	cout<<hash[3];
}