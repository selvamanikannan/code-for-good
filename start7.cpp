#include<iostream>
using namespace std;

 // * * * * * 
 //  * * * * 
 //   * * * 
 //    * * 
 //     * 
int main(){
	int n=5;
	for(int i=5;i>=1;i--){
		for(int j=0;j<n-i;j++)
			cout<<" ";
		for(int j=0;j<i;j++)
			cout<<"* ";
		cout<<"\n";
	}
}