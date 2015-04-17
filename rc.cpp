#include<assert.h>
#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string rc(string& input){
	string rcSq;
	string result= "";
	rcSq= input; 
	
	for (int i=0; i< rcSq.length(); i++)
	{
	   if (input[i]== 'A')
		rcSq[i]= 'T';
	
	   if (input[i]== 'T')
		rcSq[i]= 'A';
	
	   if (input[i]== 'C')
		rcSq[i]= 'G';
	
	   if (input[i]== 'G')
		rcSq[i]= 'C';
	}
	
	for (int i=0; i< rcSq.length(); i++)
	{
		result=rcSq[i] + result;
	}
	return result;
}

int main(){
string x = "ATCTCGGGGG";
cout<<x;
cout<<"run reverse \n";
string y =  rc(x);
cout <<y;
//assert(y == "CCCCCGAGAT");

}
