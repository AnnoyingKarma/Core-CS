#include<iostream>

using namespace std;


class Car{

  private:
    string brand;
    string model;
    int speed=0;

  public:
    Car(string brand,string model){
      this->brand=brand;
      this->model=model;
    }

    void accelerate(int increment){
      speed+=increment;
    }

    void displayStatus(){
      cout << "--STATUS--" << '\n';
      cout << "Brand : " << brand << '\n';
      cout << "Model : " << model << '\n';
      cout << "Speed : " << speed << "km/h" << "\n\n";
    }
  

};

int main(){
  Car altroz("TATA", "Altroz");
  Car scorpio("Mahindra","Scorpio");

  altroz.displayStatus();
  altroz.accelerate(30);
  scorpio.accelerate(10);
  scorpio.displayStatus();
  altroz.displayStatus();
}