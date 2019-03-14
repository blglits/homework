#include <iostream>

using namespace std;

int main(){
	
	int n, i, j;
	
	cin >> n;
	
	int a[n];
	
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = 0; i < n; i++){
	for(j = i + 1; j < n; j++){
		if(a[i] == a[j]){
			a[j] = 0;
		}
	}
	if(a[i] != 0){
		cout << a[i] << " ";
	}
}
return 0;
}
