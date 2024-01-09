#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"

int main() {
    Dog myDog("Buddy", "Golden Retriever");
    Cat myCat("Whiskers", true);
    Parrot myParrot("Polly", "Green");

    cout << "Dog Information:" << endl;
    myDog.displayInfo();
    myDog.makeSound();
    cout << endl;

    cout << "Cat Information:" << endl;
    myCat.displayInfo();
    myCat.makeSound();
    cout << endl;

    cout << "Parrot Information:" << endl;
    myParrot.displayInfo();
    myParrot.makeSound();

    return 0;
}
