#include <iostream>
#include <forward_list>
#include <queue>
#include <stack>

int main() {
    std::forward_list<int> numbers = { 10, 20 };


    numbers.push_front(5);

    int firstVal = numbers.front();

    numbers.emplace_after(numbers.begin(), 15);

  
    numbers.reverse();

    std::cout << "Forward List elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";

    std::queue<int> q;

    q.push(100);
    q.push(200);

    int frontVal = q.front();

    q.pop();

    size_t qSize = q.size();

    std::cout << "Queue front element: " << frontVal << "\n";
    std::cout << "Queue size after pop: " << qSize << "\n\n";

    std::stack<int> s;

    s.push(10);
    s.push(20);

    int topVal = s.top();

    bool isStackEmpty = s.empty();

    s.pop();

    std::cout << "Stack top element: " << topVal << "\n";
    std::cout << "Is stack empty? " << (isStackEmpty ? "Yes" : "No") << "\n";

    return 0;
}