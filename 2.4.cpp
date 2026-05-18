#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stack>
using namespace std;

void zamiana(string &c){
	for (int i=0; i<12; i++){
		if (c[i]=='o') c[i]='0';
		if (c[i]=='+') c[i]='1';
		if (c[i]=='*') c[i]='2';
	}
}

int todec(string c){
	long long dec=0;
	int j=1, cyfra;
	for(int i=11; i>=0; i--){
		cyfra=c[i]-'0';
		dec=dec+cyfra*j;
		j=j*3;
	}
	return dec;
}

void totr(int c, string &l){
	stack <char> s;
	while(c!=0){
		s.push(c%3);
		c=c-c%3;
		c=c/3;
	}
	while(!s.empty()){
		if (s.top()==0) l=l+"o";
		if (s.top()==1) l=l+"+";
		if (s.top()==2) l=l+"*";
		s.pop();
	}
}

int main(int argc, char** argv) {
	string A[2000], kopia[2000];
	int i=0, suma=0;
	string ciag;
	
	ifstream we("E:/symbole.txt");
	
	while(!we.eof()){
		getline(we, A[i]);
		i++;	
	}
	
	for(i=0; i<2000; i++){
		kopia[i]=A[i];
		zamiana(A[i]);
		suma=suma+todec(A[i]);
	}
	
	totr(suma, ciag);
	cout<<suma<<" "<<ciag;
	
	we.close();
	return 0;
}
