#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n,m,i=1;
	long long edge = 0;
	cin >> n >> m;

	if (m == 0){
		cout << n << " " << n << endl;
		return 0;
	}
	if (2*m == n*(n-1)){
		cout << 0 << " " << 0 << endl;
		return 0;
	}
	long long pairs = n/2;
	long long min = (n/2 < m)?0:((n/2)-m)*2 +(n % 2);
	
	cout << min;
	edge = 0;
    i = 1;
	while(m-edge > 0 and i <= n){
		edge = (i*(i-1))/2;
		++i;
	}
	cout << " " << (n-i+1) << endl;
	
	return 0;
}