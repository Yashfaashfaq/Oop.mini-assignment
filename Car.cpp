#include<iostream>
#include<cstring>
using namespace std;

class Car{
	private:
	string name;
	string model;
	int year;
	double petrollevel;
	
	
	public:
		
		
	string get_name(){
		return name;
	}
	string get_model(){
		return model;
	}
	int get_year(){
		return year;
	}
	double get_petrollevel(){
		return petrollevel;
	}
	
	
	void set_name(string Name){
		name = Name;
	}
	void set_model(string Model){
		model = Model;
	}
	void set_year(int Year){
		year =Year;
	}
	void set_petrollevel(double Petrollevel){
		petrollevel = Petrollevel;
	}
      void drive(double distance) {
        double fuelConsumed = distance / 10.0;  // Assuming 10 km per liter
        if (fuelConsumed <= petrollevel) {
            petrollevel -= fuelConsumed;
            cout << "Car is driven " << distance << " km. Petrol consumed: " << fuelConsumed << " liters.\n";
        } else {
            cout << "Not enough petrol to drive!\n";
        }
    }
	
	void displayinfo(){
	cout << "car name is: "<< name << endl; 
		cout << "car model is: "<< model << endl; 
			cout << "car year is :"<< year << endl; 
				cout << "car petrollevel is : "<< petrollevel << " km per liters\n" << endl; 
	} 
	
};
int main(){
	Car obj;
	obj.set_name("audi");
	obj.set_model("camry");
	obj.set_year(2024);
	obj.set_petrollevel(10);
	
	
	obj.get_model();
	obj.get_name();
	obj.get_year();
	obj.get_petrollevel();
	
	obj.displayinfo();
	obj.drive(100.0);
	
	
	
}
