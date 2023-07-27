#include<bits/stdc++.h>

using namespace std;
int main(){
	int i, n, m;
	cin >>n;
	vector<int>par;
	vector<int>impar;
	
	for(i=0;i<n;i++){
		cin>>m;
		if(m%2==0 && m!=1){
			par.push_back(m);
		}
		else{
			impar.push_back(m);
		}
	}
	
	int len1 = par.size();
	int len2 = impar.size();
	sort(par.begin(), par.end());
		for(i=0;i<len1;i++){
			cout<<par[i]<<endl;
		}
		
		sort(impar.begin(), impar.end());
		for(i=len2-1;i>=0;i--){
			cout<<impar[i]<<endl;
		}
	return 0;
}
