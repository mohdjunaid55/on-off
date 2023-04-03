
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int  n;
	    cin>>n;
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    int p=0,q=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='0'){
	            p++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(b[i]=='0'){
	            q++;
	        }
	    }
	    
	    
	   if(abs(q-p)>=2){
	    if((abs(q-p))%2==0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    }
	    else{
	        if(abs(q-p)==1){
	            cout<<"0"<<endl;
	        }
	        else{
	            cout<<"1"<<endl;
	        }
	    }
	}
	return 0;
}

	
