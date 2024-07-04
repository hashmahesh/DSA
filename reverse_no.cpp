#include<iostream>
using namespace std;

int main() {
	int r = 0;
	int n;
	cin>>n;      // Number read krna is immportant
	while(n>0){ 
		int l = n%10;
		r = (r*10) + l;
		n = n/10;
	}
	cout<<r;
}
// if you want to reverse 80 to 08 store the no. in string format and then append it to get the desired output.
