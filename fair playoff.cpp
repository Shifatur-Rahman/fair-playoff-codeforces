#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

int t;
cin>>t;
int arr[100];
int one, two, three, four, five;

   while(t--){
	for(int i=0; i<4; i++){
        cin>>arr[i];
	}

 one=0;
 two=0;
 three=0;
 four=0;
 five=0;

	for(int j=0; j<1; j++){
			for(int i=0; i<4; i++){
         one = min(arr[i], arr[i+1]);
         two = min(arr[i+2], arr[i+3]);
         three = max(arr[i], arr[i+1]);
         four = max(arr[i+2], arr[i+3]);
         five = min(three, four);
        // cout<<one<<" "<<two<<" "<<three<<" "<<four<<" "<<five<<endl;
         break;
	}

	}
//cout<<one<<" "<<two<<" "<<five<<endl;
	 if(one>five || two>five){
            cout<<"NO"<<endl;
        } else{
            cout<<"YES"<<endl;
        }
}
}
