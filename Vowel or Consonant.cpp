#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Alphabet"<<endl;
	cin>>ch;
	switch(ch){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	cout<<"Entered alphabet is vowel";
	break;
	default:
	cout<<"Entered alphabet is consonant";
	break;
}
	return 0;
		
}