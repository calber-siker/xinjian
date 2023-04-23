#include<iostream>
using namespace std;
int main(){
	int n=10;
	int a[n][n]={1,NULL};
	for(int i=1;i<n;i++){
		a[i][0]=1;
		for(int j=1;j<=i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++)
			cout<<a[i][j]<<'\t';
		cout<<endl;
	}
	return 0;
}
