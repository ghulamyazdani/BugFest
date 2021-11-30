/**
 * The Linear Queue is a data structure used for holding a sequence of
 * values, which can be added to the end line (enqueue), removed from
 * head of the line (dequeue) and displayed.
 * Values can be added by increasing the `rear` variable by 1 (which points to
 * the end of the array), then assigning a new value to `rear`'s element of the
 * array.
 *
 * Values can be removed by increasing the `front` variable by 1 (which points
 * to the first of the array), so it cannot be reached anymore.
 */
#include <array>     /// for std::array
#include <iostream>  /// for io operations
#include<bits/stdc++.h>
// using namespace std;
constexpr uint16_t max_size{10};  ///< Maximum size of the queue

namespace data_structures {
namespace queue_using_array {

class Queue_Array {
 public:
    void enqueue(int16_t&);  ///< Add element to the first of the queue
    int dequeue();                 ///< Delete element from back of the queue
    void display() const;          ///< Show all saved data
 private:
    uint8_t front =-1;                     ///< Index of head of the array
    int8_t rear{-1};                      ///< Index of tail of the array
    std::array<int16_t, 12> arr{};  ///< All stored data
};

/**
 * @brief Adds new element to the end of the queue
 * @param ele to be added to the end of the queue
 */
void Queue_Array::enqueue(int16_t& ele) {
    if (rear == arr.size() - 1) {
        std::cout << "\nStack is full";
    } else if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
        arr[rear] = ele;
    } else if (rear < arr.size()) {
        ++rear;
        arr[rear] = ele;
    }
}

/**
 * @brief Remove element that is located at the first of the queue
 * @returns data that is deleted if queue is not empty
 */
int Queue_Array::dequeue() {
    int8_t d{0};
    if (rear == -1) {
        std::cout << "\nstack is empty ";
        return 0;
    } else if (front == rear) {
        d = arr.at(front);
        front = rear = -1;
    } else {
        d = arr.at(front++);
    }

    return d;
}

/**
 * @brief Utility function to show all elements in the queue
 */
void Queue_Array::display() const {
    if (front == -1) {
        std::cout << "\nStack is empty";
    } else {
        for (int16_t i=front; i <= rear; ++i) std::cout << arr[i] << " ";
    }
}

}  // namespace queue_using_array
}  // namespace data_structures

int main() {
    int op{0}, data{0};
    data_structures::queue_using_array::Queue_Array ob;

    std::cout << "\n1. enqueue(Insertion) ";
    std::cout << "\n2. dequeue(Deletion)";
    std::cout << "\n3. Display";
    std::cout << "\n4. Exit";
    while (true) {
        std::cout << "\nEnter your choice ";
        std::cin >> op;
        if (op == 1) {
            std::cout << "Enter data  ";
            std::cin >> data;
            ob.enqueue(data);
        } else if (op == 2) {
            data = ob.dequeue();
            std::cout << "\ndequeue element is:\t" << data;
        } else if (op == 3) {
            ob.display();
        } else if (op == 4) {
            exit(0);
        } else {
            std::cout << "\nWrong choice" << std::endl;
            break;
        }
    }
}
