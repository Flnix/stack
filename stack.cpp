#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> arr;

public:
    bool isEmpty() const {
        return arr.empty();
    }

    void push(int val) {
        arr.push_back(val);
        std::cout << val << " has been added\n";
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "error: stack is empty\n";
            return 0;
        } else {
            int popValue = arr.back();
            arr.pop_back();
            std::cout << popValue << " has been removed\n";
            return popValue;
        }
    }

    int peek() const {
        if (isEmpty()) {
            std::cout << "error: stack is empty\n";
            return 0;
        } else {
            int x = arr.back();
            std::cout << "top element of the stack is " << x << "\n";
            return x;
        }
    }
};

int getUserChoice() {
    int choice;
    std::cout << "\nMenu:\n";
    std::cout << "1. Push\n";
    std::cout << "2. Pop\n";
    std::cout << "3. Peek\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

int main() {
    Stack s;

    while (true) {
        int choice = getUserChoice();

        switch (choice) {
            case 1: {
                int val;
                std::cout << "Enter element to push: ";
                std::cin >> val;
                s.push(val);
                break;
            }
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    }

    return 0;
}
