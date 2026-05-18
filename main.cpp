#include <iostream>

using namespace std;

long long przesun(long long n){
	long long pom=0, ilo_cyfrowa=0, r=0, a=0, b=0, w=0, i=0, pot=1;
	pom=n;
	
	while(pom>0){
		ilo_cyfrowa++;
		pom/=10;	
	}
	
	if (ilo_cyfrowa%2==1){
		for(i=0; i<ilo_cyfrowa/2; i++){
			r=n%100;
			a=r/10;
			b=r%10;
			n/=100;
			w+=a*pot+b*10*pot;
			pot*=100;
		}
		r=n%100;
		w+=r*pot;
	}
		
	else{
		for(i=0; i<ilo_cyfrowa/2; i++){
			r=n%100;
			a=r/10;
			b=r%10;
			n/=100;
			w+=a*pot+b*10*pot;
			pot*=100;
		}
	}
	
	return w;
}

int main(int argc, char** argv) {
	long long n=0;
	cout<<"podaj n ";
	cin>>n;
	cout<<przesun(n);
	return 0;
}
