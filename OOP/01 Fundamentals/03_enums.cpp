#include<iostream>
using namespace std;

enum class OrderStatus{
  PLACED,
  CONFIRMED,
  SHIPPED,
  DELIIVERED,
  CANCELLED
};

int main(){
  OrderStatus status = OrderStatus::CONFIRMED;

  if(status==OrderStatus::CONFIRMED) cout << "Order is Confirmed" << "\n";
  
}