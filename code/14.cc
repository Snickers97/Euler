#include <iostream>
#include <cmath>
using namespace std;

int main(){
	size_t start = 11;
	size_t longest = 0;
	size_t longstart;
	while(start < 10000000){
		size_t counter = 1;
		size_t num = start;
		while(num != 1){
			if(num%2 == 0)
				num = num/2;
			else{
				num = ((3*num) + 1);
			}
			counter++;
			if(counter > 1000000) break;
		}
		if(counter >= longest){
			longest = counter;
			longstart = start;
			cout<<longstart<<"   "<<longest<<endl;
		}
		start++;
	}
	cout<<longstart<<"   "<<longest<<endl;
	return 0;
}
