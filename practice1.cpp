#include <iostream>

using namespace std;

class Item {
public:
  Item () {
      itemCode = 0;
      itemName = "";
      price = 0.0;
  }
  
  Item(int code, string name, float p) {
    itemCode = code;
    itemName = name;
    price = p;
  }
  
  int getItemCode() { 
    return itemCode;
  }
  
  string getItemName() { 
    return itemName;
  }
  
  float getItemPrice() {
    return price;
  }

  void setItemCode(int code) { 
    itemCode = code;
  }
  void setItemName(string name) {
    itemName = name;
  }
  void setItemPrice(float p) {
    price = p;
  }
    
private:
  int itemCode;
  string itemName;
  float price;
  
};

class StockItem : public Item {
public:
  StockItem() {
      quantity = 0;
  }
  
  StockItem (int code, string name, float p, int qty) {
    setItemCode(code);
    setItemName(name);
    setItemPrice(p);
    quantity = qty;
  }
  
  int getQuantity() { 
    return quantity;
  }

  void setQuantity(float qty) { 
    quantity = qty;
  }
  
  float getStockValue() { 
    return getItemPrice() * quantity;
  }
  
  void checkReorderLevel() {
    if (quantity < 10) {
      cout << "Low stock: Reorder needed." << endl;
    } 
    else if (quantity < 50) {
      cout << "Stock level adequate." << endl;
    }
    else {
      cout << "Stock level high." << endl;
    }
  }
  
 private:  
  int quantity;
};

int main() {
  int code, quantity;
  string name;
  float price;

  cout << "Enter item code: ";
  cin >> code;

  cout << "Enter item name: ";
  cin >> name;
  
  cout << "Enter item price: ";
  cin >> price;

  cout << "Enter item quantity: ";
  cin >> quantity;

  StockItem s1(code, name, price, quantity);
  
  cout << "\nItems details: " << endl;

  cout << "Item code: " << s1.getItemCode() << endl;
  cout << "Item name: " << s1.getItemName() << endl;
  cout << "Item price: " << s1.getItemPrice() << endl;
  cout << "Item quantity: " << s1.getStockValue() << endl;
  
  cout << "Reorder level: ";
  s1.checkReorderLevel();
}
