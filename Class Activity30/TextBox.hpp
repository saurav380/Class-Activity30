#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <string>
#include <iostream>

class TextBox {
private:
    std::string value; 

public:
    // Default constructor
    TextBox();

    // Explicit parameterized constructor
    explicit TextBox(const std::string& initialValue);

    // Setter for value
    void setValue(const std::string& newValue);

    // Getter for value
    std::string getValue() const;

    // Display the value
    void display() const;
};

#endif // TEXTBOX_HPP
