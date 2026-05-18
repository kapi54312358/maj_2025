#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int NWD(int a, int b){
	int pom;
	while(b!=0){
		pom=b;
		b=a%b;
		a=pom;	
	}
    return a;
}

int main(int argc, char** argv) {
	ifstream we("E:/dron.txt");
	int y[100], x[100];
	int i=0, liczba_par=0;
	
	for(i=0; i<100; i++){
		we>>x[i];
		we>>y[i];
		if(NWD(x[i],abs(y[i]))>1) liczba_par ++;	
	}
	
	cout<<liczba_par;

	we.close();
	return 0;
}
