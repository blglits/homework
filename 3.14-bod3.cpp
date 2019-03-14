#include <iostream>

using namespace std;

int main(){
	
	int i, s = 0, j;
	string vg, vg2, box;
	
	cout << "ehny vge orulnu" << endl;
	getline(cin, vg);
	cout << "2dahi vge orulnu" << endl;
	getline(cin, vg2);

	for(i = 0; i <= vg.length(); i++){	
		for(j = 0; j <= vg2.length(); j++){
			if(vg[i] == vg2[j]){
				s++;
			}
		}
		if(s != 0){
			cout << vg[i] << " ";
		}
		s = 0;
	}
return 0;
}
