#include <iostream>
using namespace std;

template <typename T>
class MyStack {
public:
    
    MyStack() {
        topIndex = -1;
    }

    // Додавання елемента на верx стеку
    void push(T value) {
        if (topIndex < maxSize - 1) {
            topIndex++;
            stackData[topIndex] = value;
        }
        else {
            cerr << "The stack is full." << endl;
        }
    }

    // Видалення елемента з верxy стеку
    void pop() {
        if (!isEmpty()) {
            topIndex--;
        }
        else {
            cerr << "The stack is empty." << endl;
        }
    }

    // Отримання верхнього елемента без видалення
    T top() {
        if (!isEmpty()) {
            return stackData[topIndex];
        }
        else {
            
            return T();
        }
    }

    // Перевірка, чи є стек порожнім
    bool isEmpty() {
        return topIndex == -1;
    }

private:
    static const int maxSize = 100; 
    T stackData[maxSize];
    int topIndex;
};

int main() {
    
    MyStack<int> myStack;

    
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    
    cout << "Верхній елемент: " << myStack.top() << endl;

    // Видалення верхнього елемента
    myStack.pop();

    
    cout << "Новий верхній елемент: " << myStack.top() << endl;

    return 0;
}
