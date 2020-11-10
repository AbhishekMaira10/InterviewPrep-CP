#include <iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int s, t, i;
		cin >> s >> t >> i;
		int m = (s + t) / 2;
		if(i < s || i > t){
			cout << -1 << endl;
			continue;
		}
		cout << s << " " << t << endl;
		int cnt = 1;
		while(!(s == i && t == i)){
			if(i <= m)
				t = m;
			else
				s = m + 1;
			m = (s + t) / 2;
			cout << s << " " << t << endl;
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}
