#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long& i);

int main(){
	long val = 600851475143;
	long limit = sqrt(val);
	long factor, biggest;
	long num = 2;
	while(num < limit){
		if(val%num == 0){
			long fac = (val/num);
			if(isprime(fac) && fac > biggest){
				factor = fac;
				biggest = factor;
			}
		}
		if(val%num == 0 && num > biggest && isprime(num)){
			factor = num;
			biggest = factor;
		}
		num++;
	}
	cout<<biggest<<endl;
	
	return 0;
}

bool isprime(long& i){
	long test = 2;
	long counter = 2;
	if(i == 1 || i == 3 || i == 5 || i == 7)
		return true;
	while(test < sqrt(i)){
		if(i%test != 0)
			counter++;
		test++;
	}
	if(test == counter) return true;
	else return false;
}
