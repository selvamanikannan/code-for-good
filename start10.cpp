#include <iostream>
using namespace std;


//       * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 


int main(){
	int n = 5;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
			cout<<"  ";
		for(int j=n-i;j<n;j++)
			cout<<"* ";
		cout<<"\n";
	}
	for(int i=n-1;i>=1;i--){
		for(int j=0;j<n-i;j++)
			cout<<"  ";
		for(int j=n-i;j<n;j++)
			cout<<"* ";
		cout<<"\n";
	}
}