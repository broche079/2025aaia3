//week02-2b.cpp part 2
//SOIT106_ADVANCE_001 C++
#include <iostream> //cin cout 
#include <string> //srting
using namespace std;
int main()
{
	string a;
	cin >> a;
	
	string ans;
	int N = a.length();
	for(int i=N-1; i>=0; i--){
		ans += a[i];
	}
	
	cout << a << '+' << stoi(ans) 
	<< '=' << stoi(a) + stoi(ans) << endl;
	
}//stoi() is "string to int"