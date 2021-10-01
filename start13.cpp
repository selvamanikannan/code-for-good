#include <iostream>
using namespace std;


//     * 
//    * * 
//   *   * 
//  *     * 
// * * * * * 


int main(){
	int n=5;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=n-i;j<n;j++){
			if(j==n-i or j==n-1 or i==n)
				cout<<"* ";
			else
				cout<<"  ";
		}
		cout<<"\n";
	}
}