#include "TextBox.hpp"

int main() {
	//using the default constructor

	TextBox box1;
	box1.display();

	//using the explicit constructor
	TextBox box2("Hello, World!");
	box2.display();



//modifying the value
box1.setValue("Updated Value");
box1.display();

return 0;
}