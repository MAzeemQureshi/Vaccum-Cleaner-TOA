#include<iostream>
#include<string>

using namespace std;

int Accepted(string str){

	int state = 0;

	for(int i =0;i<str.length();i++){
		if(state == 0){
			if(str[i]=='1'){
				state=1;
			}
			else{
				state=-1;
			}
		}
		else if(state == 1){
			if(str[i]=='0'){
				state=2;
			}
			else if(str[i]=='4'){
				state=3;
			}
			else if(str[i]=='8'){
				state=5;
			}
			else{
				state=-1;
			}
		}
		
		else if(state == 2){
			if(str[i]=='1'){
				state=1;
			}
			else{
				state=-1;
			}
		}
		
		
		else if(state == 3){
			if(str[i]=='8'){
				state=1;
			}
			else if(str[i]=='5'){
				state=3;
			}
			else if(str[i]=='2' || str[i]=='3' || str[i]=='6'){
				state=4;
			}
			else{
				state=-1;
			}
		}
		
		
		else if(state == 4){
			if(str[i]=='4'){
				state=3;
			}
			else{
				state=-1;
			}
		}
		
		
		else if(state == 5){
			if(str[i]=='7'){
				state=6;
			}
			else{
				state=-1;
			}
		}
		
		else if(state == 6){
			if(str[i]=='7'){
				state=6;
			}
			else if(str[i]=='8'){
				state=1;
			}
			else{
				state=-1;
			}
		}
		
		
		else{
			break;
		}
	}
	if(state == 2){
		cout<<"Accepted"<<endl;
	}
	else{
		cout<<"Not Accepted"<<endl;
	}
}

int main(){
	int n;
	while(true){
		string str;
		cout<<"-----------------------"<<endl;
		cout<<"    Vacuum Cleaner "<<endl;
		cout<<"-----------------------"<<endl;
		cout<<""<<endl;
		cout<<"Enter String : ";
		cin>>str;
		cout<<"Result : ";
		Accepted(str);
		cout<<endl;
		cout<<"again"<<endl;
	
		}
	return 0;
}
