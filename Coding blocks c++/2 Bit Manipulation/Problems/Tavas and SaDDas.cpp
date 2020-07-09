//explanations are in ipad in 2 bitwise operators
#include<iostream>
#include<string>

using namespace std;

int main() {

	
	string s;
	cin>>s;
	int n=0;
	int extra=1;
	if(s[0]=='7')
		extra=extra+(1<<(s.length()-1));
	for(int i=1;i<s.length();i++)
	{	
		if(s[i]=='7')
		extra=extra+(1<<(s.length()-i-1));

		n=n<<1;
		n+=2;

	}
	
	cout<<(n+extra);
}