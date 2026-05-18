#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=2000;

string stot(string a){
	int i=0;
	string w="";
	
	for(i=0; i<a.size(); i++){
		if(a[i]=='o')
			w+='0';
		if(a[i]=='+')
			w+='1';
		if(a[i]=='*')
			w+='2';		
	}
	return w;
}

int ttodec(string a){
	int i=0, pom=0;
	long long pot=1, w=0;
	for(i=a.size()-1; i>=0; i--){
		pom=a[i]-48;
		w+=pom*pot;
		pot*=3;
	}
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/symbole.txt");
	int i=0, max1=0;
	string symbole[n], trojkowy[n], max2="";
	
	for(i=0; i<n; i++){
		we>>symbole[i];
		trojkowy[i]=stot(symbole[i]);
	}
	
	for(i=0; i<n; i++){
		if(ttodec(trojkowy[i])>max1){
			max1=ttodec(trojkowy[i]);
			max2=symbole[i];
		}
			
	}
	
	cout<<max1<<" "<<max2;
	
	return 0;
}
