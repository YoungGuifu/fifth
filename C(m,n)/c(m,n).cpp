#include<iostream>
using namespace std;
int c(int m,int n){
	while(m>=n){
	if(n==0)
		return 1;
	if(n==m)
		return 1;
	else
		return m*c(m-1,n)/(m-n);
	}

}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<c(x,y);
	return 0;
}


