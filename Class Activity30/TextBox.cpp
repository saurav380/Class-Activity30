#include "TextBox.hpp"

TextBox::TextBox() : value("") {
	std::cout << "Default constructor called. Value initialized to empty string. " << std::endl;


}
// Explicit parameterized constructor
TextBox::TextBox(const std::string& initialValue) : value(initialValue) {
	std::cout << "Parameterized constructor called. Value initialized to: " << value << std::endl;

}
//Setter for value
void TextBox::setValue(const std::string& newValue) {
	value = newValue;

}
//Display the value
void TextBox::display()const {
	std::cout << "TextBox Value: " << value << std::endl;
}