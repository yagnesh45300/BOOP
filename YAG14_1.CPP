#include<iostream.h>
#include<conio.h>
// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound"<<endl;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n"<<endl;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n"<<endl;
  }
};

int main() {
  clrscr();
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  getch();
  return 0;
}