#include <iostream>
#include <cmath>
using namespace std;

int factors(int &i);

int main(){
	int nat = 1;
	int tri = 0;
	while(factors(tri) < 500){
		tri += nat;
		nat++;
	}
	cout<<tri<<endl;
	return 0;
}

int factors(int &i){
	int num = 1;
	int facs = 0;
	if(i%4 == 0){
		while(num < i/4){
			if(i%num == 0)
				facs++;
			num++;
		}
		facs+= 3;
	}
	else if(i%2 == 0){
		while(num < i/2){
			if(i%num == 0)
				facs++;
			num++;
		}
		facs++;
	}
	else{
		while(num < i){
			if(i%num == 0)
				facs++;
			num++;
		}
	}
	return facs;
}
