#include <iostream>
#include <queue>
using namespace std;

class Myclass {
public:
    // Define the comparator function
    bool operator() (int i, int j) {
        // Return true if i should come after j in the priority queue (this creates a max-heap)
        return i < j;  // This will give us a max-heap, as lower numbers will have lower priority
    }
};

int main() {
    // Declare a priority_queue with Myclass as the comparator
    priority_queue<int, vector<int>, Myclass> pq;

    // Push some elements into the priority_queue`
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    // Print the elements of the priority_queue
    while (!pq.empty()) {
        cout << pq.top() << " ";  // Print the top element
        pq.pop();  // Remove the top element
    }

    return 0;
}
