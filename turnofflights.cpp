#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string bulbs;
	cin>>bulbs;
	for(int l=1;l<=n;l++){
	   int operations=0;
	for(int i=0;i<n;i++){
	 if (bulbs[i] == '1') {
    operations++;
    i += l - 1;   
  }}
   if (operations <= k) {
    cout << l;
    break;
        }}
  return 0;
}
		
	
