#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long& i);

int main(){
	long num = 2;
	int counter = 0;
	while(counter < 100000){
		if(isprime(num)){
			counter++;
			if(counter == 10001) break;
		}
		if(counter == 10001) break;
		num++;
	}
	cout<<num<<endl;
	return 0;
}

bool isprime(long& i){
	long test = 2;
	bool prime = true;
	while(test <= sqrt(i)){
		if(i%test == 0)
			prime = false;
		test++;
	}
	return prime;
}
