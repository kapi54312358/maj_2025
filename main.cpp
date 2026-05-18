#include <iostream>

using namespace std;

int przestaw2(int n){
	long long w=0, r=0, a=0, b=0, pot=1;
	while(n>0){
		b=n%10;
		n/=10;
		a=n%10;
		n/=10;
		w+=a*pot;
		pot*=10;
		w+=b*pot;
		pot*=10;
	}
	return w;	
}

int main(int argc, char** argv) {
	cout<<przestaw2(316498);
	return 0;
}
