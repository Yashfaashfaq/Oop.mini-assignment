#include<iostream>
using namespace std;

int main(){
	char op;
	int num1,num2;
	cout << "Enter the operator:  "<<endl;
	cin >>op;
		cout << "Enter the  first number: "<<endl;
	        cin >> num1;
	        cout << "Enter the second number: "<<endl;
         	cin >> num2;

	switch(op){
		case '+': 
         	cout << num1 << op << num2 << "=" << num1+num2 << endl;
		break;
		
		case '-':
			cout << num1 << op << num2 << "=" << num1-num2 <<endl;
			break; 
			
			case '*': 
			cout << num1 << op << num2 << "=" << num1*num2 << endl;
			break;
			
			case'/':
				cout << num1 << op << num2 << "=" << num1/num2 << endl;
				break;
				
				case '%':
					cout << num1 << op << num2 << "=" <<num1%num2 <<endl;
					break;
	}
}
