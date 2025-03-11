#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);

}
int main(){
   cout<<gcd(27,21)<<endl;
   cout<<__gcd(27,21);//builtin fnction for gcd
   //a*b/gcd=lcm
   //gcd(a,gcd(b,c))
}