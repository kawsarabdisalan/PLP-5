# PLP-5

Objects in C++ is created from a class. You specify the the class name first and then the object name. To access the class attributes, use the dot on the object. Below is an example on how to implement and call an object. 


```
class myClass(){
  public:
    int myNum;
};

int main() {
  myClass myObj; //myObj is the name of the object
  myObj.myNum = 15;
  cout << myObj.myNum << '\n\;
  //prints out 15
}
```
Some naming conventions in C++ usually contain camel case where the first letter is lower case and the second word is upper case. 
```
//ex: myObj, myClass, myFunction
```
C++ does not have a standard method for function that serve a similar purpose across all objects. 
Inhertince in C++ works in two different ways: 
  - Derived Class (Child) -> the class that inherits from another class
  - Base Class (parent) -> the class being inherited from
If you want to inherit from a class, you use the : symbol. An example is below:

```
class Vehicle {
  public:
    string brand = 'Honda';
    void honk() {
      cout << "Beep!! << endl;
  }
};

class Car: public Vehicle {
  public:
    string model = 'Odyssey';
};

int main() {
  Car myCar; //myCar is the object
  myCar.honk();
  cout << myCar.brand <<myCar.model << endl;
  return 0;
}

//Beep!, Honda Odyssey

```
C++ also supports multilevel inheritance. You can derive a class from another class that is a child. 

C++ deals with overloading method names and resolving those calls by hvaing an overloading feature. This allows you to have two or more methods with the same names but will have different paramaters so the program knows which one is which. 
One important note for C++ inhertinces is that although it does support multilevel inheritince, you have to be careful by looking at the properties in each class. This probkem can create errors if there are multiple of the same properties. 


