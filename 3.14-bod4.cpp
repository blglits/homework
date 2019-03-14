#include <iostream>

using namespace std;

int main(){
	
	int i;
	string vg;
	
	cout << "vge orulnu" << endl;
	getline(cin, vg);

	for(i = 0; i <= vg.length(); i++){	
			if(vg[i] == '-'){
				vg[i] = '_';
			}
			cout << vg[i];
	}
	
	return 0;
}
