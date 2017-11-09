#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long& i);

int main(){
	long num = 2;
	long sum = 0;
	while(num < 2000000){
		if(isprime(num))
			sum += num;
		num++;
	}
	cout<<sum<<endl;
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
