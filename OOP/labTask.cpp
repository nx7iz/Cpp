#include <iostream>

using namespace std;

class Content {
public:
  virtual void display() {
    cout << "Content" << endl;
  }
};

class Video : public Content{
public:
  void display() override {
    cout << "\nPlaying Video." << endl;
  }
};

class Quiz : public Content {
public:
  void display() override {
    cout << "Showing through Quiz." << endl;
  }
};

class PDF : public Content {
public:

  void display() override {
    cout << "Opening PDf Doc." << endl;
  }
};

int main() {
  Content* ptr1;
  Content* ptr2;
  Content* ptr3;

  Video v1;
  Quiz q1;
  PDF p1;

  ptr1 = &v1;
  ptr2 = &q1;
  ptr3 = &p1;

  ptr1->display();
  ptr2->display();
  ptr3->display();

}