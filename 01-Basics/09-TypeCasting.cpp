#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	// Typecasting: There are 2 types implicit and explicit
	
	//Character to ASCII
	
	char ch = 'g';
	cout<<int(ch)<<endl;
	cout<<"\n";
	
	//ASCII  to  Character
	
	int ascii = 67;
	cout<<char(ascii)<<endl;
	cout<<"\n";
	
	//Uppercase to Lowercase (ASCII) without using tolower()
	
	char c = 'B';
	char lower = c + 32;
	cout<<"UPPERCASE TO lowecase: "<<lower<<endl;
	cout<<"\n";
	
	//Lowercase to Uppercase (ASCII) without using toupper()
	
	char lo = 'e';
	char upper = lo - 32;
	cout<<"lowercase to UPPERCASE: "<<upper<<endl;
	cout<<"\n";
	
	//Uppercase to Lowercase (ASCII)  using tolower()
	
	char a = 'J';
	cout<<"UPPERCASE TO lowecase using built-in function: "<<char(tolower(a))<<endl;
	cout<<"\n";
	
	//Lowercase to Uppercase (ASCII)  using toupper()
	
	char b = 'n';  
	cout<<"lowercase to UPPERCASE using built-in function: "<<char(toupper(b))<<endl;
	cout<<"\n";
	
	//An Entire String to Uppercase
	
	string s = "affifa";
	for(int i =0; i<= s.length(); i++)
	s[i] = s[i]- ('a'-'A');
	cout<<"String from lower to uppercase: "<<s<<endl;
	cout<<"\n";
	
	//An Entire String to lowercase
	
	string se = "AZHAR";
	for(int i =0; i<= se.length(); i++)
	se[i] = se[i]+ ('a'-'A');
	cout<<"String from upper to lowercase: "<<se<<endl;
	cout<<"\n";
	
	//Integer to float typecasting
	int num = 7;
	cout<<"Integer to float: "<<fixed<<setprecision(1)<<float(num)<<endl;
	cout<<"\n";
	
	//Float to Integer  typecasting
	float n = 6.4;
	cout<<"Float to integer: "<<int(n)<<endl;
	cout<<"\n";
	
	// Mixed practice
	
	char z = 'Z';
	cout<<"Chracter: "<<z<<endl;
	cout<<"Ascii: "<<int(z)<<endl;
	cout<<"Uppercase to lowecase: "<<char(tolower(z))<<endl;
	cout<<"lowercase Ascii: "<<int(z+32)<<endl;
	cout<<"\n";
	
	//Test program
	
	string chat = "CHATGPT";
	cout<<"Original string: "<<chat<<endl;
	cout<<"Uppercase string: "<<chat<<endl;
	string low = chat;
	for(int i =0; i<= low.length(); i++)
	{
	low[i] = low[i]+ ('a'-'A');
	}
	cout<<"String from upper to lowercase: "<<low<<endl;
	cout<<"First character Ascii: "<<int(chat[0])<<endl;
	cout<<"Last character Ascii: "<<int(chat[6])<<endl;
	cout<<"Length of string: "<<chat.length()<<endl;
	
	return 0;
	}