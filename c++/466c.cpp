#include <iostream>
using namespace std;

long long array[1000005];
long long cnt[1000005];

int main(){
	ios::sync_with_stdio(0);
	int n,i = 0, j = 0;
	long long sum = 0;
	cin >> n;
	
	for(int x = 0;x < n;++x){
		cin >> array[x];
		sum += array[x];
	}
	
	if (sum % 3 != 0){
		cout << 0 << endl;
	}else{
		sum = sum / 3;
		long long ss = 0;
		long long ans = 0;
		for(i = n-1;i >= 0;--i){
			ss += array[i];
			if (ss == sum)
				cnt[i] = 1;
		}
		
		for(i = n-2;i >= 0;--i)
			cnt[i] += cnt[i+1];
		
		ss = 0;
		for(i = 0;i+2 < n;++i){
			ss += array[i];
			if (ss == sum)
				ans += cnt[i+2]; 
		}
		cout << ans << endl;
	}
	return 0;
}