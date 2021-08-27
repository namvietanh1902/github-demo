#include<iostream>
void cal(){
	std::cout<<"MENU\n";
	std::cout<<"    1.Add\n";
	std::cout<<"    2.Subtract\n";
	std::cout<<"    3.Multiply\n";
	std::cout<<"    4.Divide\n";
	std::cout<<"    5.Modulus\n";
	int n,a,b;
	int ans;
	char c;
	std::cout<<"Enter your choice: ";std::cin>>n;
	std::cout<<"Enter your two number: ";std::cin>>a>>b;
	switch (n){
		case 1:{
			ans=a+b;
			break;
		}
		case 2:{
			ans=a-b;
			break;
		}
		case 3:{
			ans=a*b;
			break;
		}
		case 4:{
			ans=a/b;
			break;
		}
		case 5:{
			ans=a%b;
			break;
		}
	}
	std::cout<<"Result: "<<ans<<std::endl;
	std::cout<<"Continue?(y/n?)";std::cin>>c;
	switch (c){
		case 'y':{
			cal();
			break;
	}
	    case 'n':{
	    	break;}
}}
int main(){
	cal();
}