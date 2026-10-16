#include <iostream>
#include <vector>

using namespace std;

class FoodOrder{

  private:  
    int orderId;
    string customerName;
    vector<string> items;
    float totalAmount;
    bool isPlaced;

  public:
    FoodOrder(int orderId,string customerName):orderId(orderId),customerName(customerName),totalAmount(0.0),isPlaced(false){}

    void addItem(string item,float price){
      if(isPlaced){
        cout << "\nOrder is already placed!\n";
        return;
      }
      items.push_back(item);
      totalAmount+=price;
    }

    void placeOrder(){
      if(items.empty()){
        cout << "\nYour order is currently empty!\n";
        return;
      }
      isPlaced=true;
    }

    void displayOrder(){
      cout << "\n----------------------\n";
      isPlaced ? cout << "Order Confirmed" : cout <<"Order Pending";
      cout << "\n \n";
      cout << "Order Id : " << orderId << "\n";
      cout << "Customer Name : " << customerName << "\n\n";
      if(items.empty()) cout << "No items added yet!";
      else {
        cout << "Currently Added Items\n";
        for(const auto &item:items){
          cout << item << '\n';
        }
      }
      cout << "\nTotal Amount : " << totalAmount;
      cout << "\n----------------------\n";
    }

};

int main(){

  FoodOrder order1(132, "Renzi");
  FoodOrder order2(111, "Lino");
  FoodOrder order3(108, "Beny");

  order1.displayOrder();

  order1.addItem("Malai Soya Chaap",1900);
  order1.addItem("Palak Paneer",2300);

  order2.placeOrder();
  order2.addItem("Paneer Makhani",2200);

  order1.displayOrder();
  order2.displayOrder();
  order3.displayOrder();

  order1.placeOrder();
  order1.addItem("Yellow Dal",1600);

}