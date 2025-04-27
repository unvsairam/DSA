#include <iostream> // For printing to the screen
using namespace std;

#define MAX_SIZE 10 // Let's make our stack hold up to 10 numbers

class Stack {
    int top;        // This marks the top of our stack
    int data[MAX_SIZE]; // This is where we store our numbers

public:
    Stack() {
        top = -1; // When the stack is empty, 'top' is -1
    }

    void push(int value) {
        if (top >= MAX_SIZE - 1) { // Check if the stack is full
            cout << "Stack is full! Cannot add more numbers." << endl;
            return; // Stop the function
        }
        top++;              // Move 'top' up one spot
        data[top] = value;  // Put the 'value' into the stack
    }

    int pop() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack is empty! Cannot remove any numbers." << endl;
            return -1; // Return -1 to show there was an error
        }
        int poppedValue = data[top]; // Get the top number
        top--;                       // Move 'top' down one spot
        return poppedValue;         // Return the number we removed
    }

    int peek() {
        if (top < 0) { // Check if the stack is empty
            cout << "Stack is empty! No numbers to see." << endl;
            return -1; // Return -1 to show there was an error
        }
        return data[top]; // Return the top number without removing it
    }

    bool isEmpty() {
        return top == -1; // If 'top' is -1, the stack is empty
    }
};

int main() {
    Stack myStack; // Make a stack called 'myStack'

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    cout << "Top number: " << myStack.peek() << endl; // Show the top number

    int removedNumber = myStack.pop(); // Remove the top number
    cout << "Removed number: " << removedNumber << endl;

    cout << "New top number: " << myStack.peek() << endl; // Show the new top number

    return 0;
}