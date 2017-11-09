#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int a, b, c, prod;
	a = 1;
	while(a <= 1000){
		b = 1;
		while(b <= 1000){
			c = 1;
			while(c <= 1000){
				bool ispyt = false;
				if((a*a+b*b) == (c*c))
					ispyt = true;
				if((a+b+c) == 1000 &&ispyt){
					cout<<a<<" "<<b<<" "<<c<<endl;
					prod = a*b*c;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	cout<<prod<<endl;
	return 0;
}
