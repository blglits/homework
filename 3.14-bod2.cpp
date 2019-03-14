#include <iostream>

using namespace std;

int main(){
	
	int n, i, m, s = 0, j;
	
	cin >> n;
	cin >> m;
	
	int a[n];
	int c[m];
	
	for(i = 0; i < n; i++){
		cin >> c[i];
	}
	for(j = 0; j < m; j++){
		cin >> a[j];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(c[i] == a[j]){
				s++;
			}
		}
		if(s == 0){
			cout << c[i] << " ";
	}
		s = 0;
	}
return 0;
}
