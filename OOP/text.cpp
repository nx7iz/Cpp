#include <iostream>

using namespace std;

class User {
protected:
  string name;
public:
  User(string n) : name(n) {}
  
  virtual void makePayment(double amount) = 0;

  virtual void showDetails() = 0;

  virtual ~User() {
    cout << "User destructor called.\n";
  }
};

class BankUser : public User {
private:
  double bankBalance;
public:
  BankUser(string n, double balance) : User(n), bankBalance(balance) {}

  void makePayment (double amount) override {
    if (bankBalance >= amount) {
      bankBalance -= amount;
      cout << name << " paid " << amount << " using Bank Account.\n";
    }else {
      cout << "Insufficient balance.\n";
    }
  }
  
  void showDetails() {
    cout << "[BankUser] Name: " << name << ", Balance: $" << bankBalance << endl;
  }
  
  virtual ~BankUser() {
    cout << "\nBankUser destructor called.\n";
  }
};

class UPIUser : public User {
  private:
  double upiBalance;
  public:
  UPIUser(string n, double balance) : User(n), upiBalance(balance) {}
  
  void makePayment(double amount) override {
    if (upiBalance >= amount) {
      upiBalance -= amount;
      cout << name << " paid " << amount << " using UPI account.\n";
    } else {
      cout << "Insufficient balance.\n";
    }
  }

  void showDetails() override {
    cout << "[UPIUser] Name: " << name << ", Balance: $" << upiBalance << endl;
  }
  
  virtual ~UPIUser() {
    cout << "UPIUser destructor called.\n";
  }
};

int main() {
  
  UPIUser upiUser("Gray", 800.0);
  BankUser bankUser("Simon", 1000.0);
  
  User* user3 = new BankUser("Arceus", 10.0);

  // User* user[10];
  // user[0] = new BankUser("a", 0);
  // user[1] = &bankUser;

  // User* user1 = &bankUser;
  // User* user2 = &upiUser;

  // user1->showDetails();
  // user1->makePayment(300.0);
  
  // user2->makePayment(900.0);
  // user2->showDetails();
  
  // cout << "\nAfter payment\n";
  // user1->showDetails();
  // user2->showDetails();

  delete user3;
  // delete user[0];

}