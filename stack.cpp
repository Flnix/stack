#include<iostream>

class stack {
private:
    int top; // Changed "top:" to "top"
    int *arr; // Changed "arr:" to "arr"
public:
    stack(int size) {
        top = -1;
        arr = new int[size];
        for (int i = 0; i < size; i++) { // Changed ":" to ";"
            arr[i] = 0;
        }
    }

    bool isEmpty() { // Changed "poal is empty()" to "bool isEmpty()"
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }

    bool isFull(int size) { // Changed "boot is full" to "bool isFull"
        if (top == size - 1) {
            return true;
        } else {
            return false;
        }
    }

    void push(int val, int size) {
        if (isFull(size)) {
            std::cout << "error: stack is full";
        } else {
            top++;
            arr[top] = val;
            std::cout << val << " has been added";
        }
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "error: stack is empty";
            return 0;
        } else {
            int popValue = arr[top]; // Changed "pop value" to "popValue"
            arr[top] = 0;
            top--;
            std::cout << popValue << " has been removed";
            return popValue;
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "error: stack is empty";
            return 0;
        } else {
            int x = arr[top];
            std::cout << "top element of the stack is " << x;
            return x;
        }
    }
};

int main() {
    int size;
    std::cout << "Enter the size of stack: ";
    std::cin >> size;
    stack s(size); // Added a variable name "s" to create an instance of the stack
    int val;
    std::cout << "Enter the element to push: ";
    std::cin >> val;
    s.push(val, size);
    s.pop();
    s.peek();
    s.isEmpty(); // Corrected function name
    s.isFull(size); // Corrected function name
    return 0;
}
