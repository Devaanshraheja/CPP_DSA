#include <iostream>
#include <vector>
using namespace std;

class Minheap {
    vector<int> v;

    void heapify(int i) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int min = i;

        // If left child is smaller than current node, update min
        if (left < v.size() && v[min] > v[left]) {
            min = left;
        }

        // If right child is smaller than current node, update min
        if (right < v.size() && v[min] > v[right]) {
            min = right;
        }

        // If the min is not the current node, swap and call heapify on the new position
        if (min != i) {
            swap(v[min], v[i]);
            heapify(min);  // Recursively heapify the affected subtree
        }
    }

public:
    Minheap() {
        v.push_back(-1); // We are not using index 0
    }

    void push(int d) {
        v.push_back(d);
        int c = v.size() - 1; // Index of the last element
        int p = c / 2; // Parent index

        // Bubble up the new element to restore heap property
        while (p > 0 && v[p] > v[c]) {
            swap(v[p], v[c]);
            c = p;
            p = p / 2;
        }
    }

    void pop() {
        if (v.size() <= 1) return; // Empty heap check

        // Swap the first element (root) with the last element
        swap(v[1], v[v.size() - 1]);
        v.pop_back(); // Remove the last element (now the root)
        heapify(1);   // Restore heap property from the root
    }

    bool empty() {
        return v.size() == 1; // The heap is empty if only the dummy element (-1) is present
    }

    int top() {
        if (v.size() > 1) {
            return v[1]; // Return the root element (smallest)
        }
        return -1; // Return -1 if heap is empty (or you can throw an error)
    }
};

int main() {
    Minheap h;
    h.push(1);
    h.push(3);
    h.push(2);
    h.push(4);

    // Pop all elements in order
    while (!h.empty()) {
        cout << h.top() << endl;
        h.pop();
    }

    return 0;
}
