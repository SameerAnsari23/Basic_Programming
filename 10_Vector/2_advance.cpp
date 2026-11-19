#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>

using namespace std;

// Helper function to print elements of a 1D vector
void printVector(const vector<int>& v) {
    for (int it : v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    // ==========================================================
    // 1. CAPACITY & MEMORY MANAGEMENT
    // ==========================================================
    cout << "--- 1. Capacity & Memory Management ---" << endl;
    vector<int> v;

    // size() vs capacity()
    // size: number of elements currently stored
    // capacity: allocated storage size before reallocation is needed
    cout << "Initial size: " << v.size() << ", capacity: " << v.capacity() << endl;

    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
        cout << "Added " << i << " -> size: " << v.size() 
             << ", capacity: " << v.capacity() << endl;
    }

    // reserve(): pre-allocates memory to avoid frequent reallocations
    v.reserve(20);
    cout << "After reserve(20) -> size: " << v.size() 
         << ", capacity: " << v.capacity() << endl;

    // shrink_to_fit(): frees unused memory by reducing capacity to size
    v.shrink_to_fit();
    cout << "After shrink_to_fit() -> size: " << v.size() 
         << ", capacity: " << v.capacity() << endl;

    // resize(): changes the number of elements
    v.resize(8, 100); // expands size to 8, new elements initialized to 100
    cout << "After resize(8, 100): ";
    printVector(v); // 1 2 3 4 5 100 100 100

    // empty(): returns true if vector is empty
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl << endl;


    // ==========================================================
    // 2. ELEMENT ACCESS & BOUNDS SAFETY
    // ==========================================================
    cout << "--- 2. Element Access & Bounds Safety ---" << endl;
    vector<int> nums = {10, 20, 30, 40, 50};

    cout << "First element (front): " << nums.front() << endl; // 10
    cout << "Last element (back): " << nums.back() << endl;   // 50
    cout << "Element at index 2 (operator[]): " << nums[2] << endl; // 30
    cout << "Element at index 2 (at()): " << nums.at(2) << endl;    // 30

    // Difference between [] and at(): at() performs bounds-checking
    try {
        cout << nums.at(10) << endl; // Throws out_of_range exception
    } catch (const out_of_range& e) {
        cout << "Caught exception using at(): " << e.what() << endl;
    }

    // data(): returns direct pointer to underlying memory array
    int* dataPtr = nums.data();
    cout << "Direct pointer access (dataPtr[0]): " << *dataPtr << endl << endl;


    // ==========================================================
    // 3. INSERTION & EMPLACEMENT
    // ==========================================================
    cout << "--- 3. Insertion & Emplacement ---" << endl;
    vector<int> vec = {10, 20, 30};

    // emplace_back() constructs elements in-place (often faster than push_back)
    vec.emplace_back(40);
    cout << "After emplace_back(40): ";
    printVector(vec); // 10 20 30 40

    // insert() at a specific iterator position
    // insert single element at index 1
    vec.insert(vec.begin() + 1, 15);
    cout << "After inserting 15 at index 1: ";
    printVector(vec); // 10 15 20 30 40

    // insert multiple copies of an element: insert(pos, count, value)
    vec.insert(vec.begin() + 2, 2, 99);
    cout << "After inserting two 99s at index 2: ";
    printVector(vec); // 10 15 99 99 20 30 40

    // insert a range from another container
    vector<int> extra = {500, 600};
    vec.insert(vec.end(), extra.begin(), extra.end());
    cout << "After inserting range at end: ";
    printVector(vec); // 10 15 99 99 20 30 40 500 600
    cout << endl;


    // ==========================================================
    // 4. ITERATORS & OPERATIONS
    // ==========================================================
    cout << "--- 4. Iterators & Operations ---" << endl;
    vector<int> items = {10, 20, 30, 40, 50};

    // Normal forward iterator
    cout << "Forward iteration: ";
    for (auto it = items.begin(); it != items.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iterator
    cout << "Reverse iteration: ";
    for (auto rit = items.rbegin(); rit != items.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // const_iterator (cbegin, cend): prevents modification of elements
    cout << "Const iterator: ";
    for (auto cit = items.cbegin(); cit != items.cend(); ++cit) {
        // *cit = 100; // Compilation Error! Read-only
        cout << *cit << " ";
    }
    cout << endl;

    // Iterator functions: advance() and distance()
    auto iter = items.begin();
    advance(iter, 3); // Moves iterator forward by 3 steps
    cout << "Iterator after advance by 3 steps points to: " << *iter << endl; // 40

    int dist = distance(items.begin(), iter);
    cout << "Distance from begin() to iter: " << dist << endl << endl; // 3


    // ==========================================================
    // 5. DELETION, SWAPPING & ERASE-REMOVE IDIOM
    // ==========================================================
    cout << "--- 5. Deletion, Swapping & Erase-Remove Idiom ---" << endl;
    vector<int> delVec = {10, 20, 30, 20, 40, 20, 50};
    cout << "Original delVec: ";
    printVector(delVec);

    // erase(pos): delete single element at index 2 (value 30)
    delVec.erase(delVec.begin() + 2);
    cout << "After erase at index 2: ";
    printVector(delVec); // 10 20 20 40 20 50

    // erase(start, end): delete range [start, end)
    delVec.erase(delVec.begin() + 1, delVec.begin() + 3);
    cout << "After deleting range [1, 3): ";
    printVector(delVec); // 10 40 20 50

    // Erase-Remove Idiom: remove all occurrences of a specific value (e.g. 20)
    // std::remove moves elements to keep to front and returns iterator to new end
    // erase then trims the extra elements
    delVec.erase(remove(delVec.begin(), delVec.end(), 20), delVec.end());
    cout << "After erase-remove idiom (removing all 20s): ";
    printVector(delVec); // 10 40 50

    // swap(): swaps contents of two vectors in O(1) time
    vector<int> first = {1, 2, 3};
    vector<int> second = {9, 8, 7};
    first.swap(second);
    cout << "first after swap: ";
    printVector(first);  // 9 8 7
    cout << "second after swap: ";
    printVector(second); // 1 2 3

    // clear(): removes all elements, size becomes 0
    first.clear();
    cout << "first after clear() size: " << first.size() 
         << ", capacity: " << first.capacity() << endl << endl;


    // ==========================================================
    // 6. ADVANCED ALGORITHMS WITH VECTORS (<algorithm>)
    // ==========================================================
    cout << "--- 6. Advanced Algorithms with Vectors ---" << endl;
    vector<int> list = {5, 2, 8, 1, 9, 2, 5, 2};

    // find(): search for an element
    auto findIt = find(list.begin(), list.end(), 8);
    if (findIt != list.end()) {
        cout << "Element 8 found at index: " << distance(list.begin(), findIt) << endl;
    }

    // count(): count occurrences of an element
    cout << "Occurrences of 2: " << count(list.begin(), list.end(), 2) << endl; // 3

    // min_element() & max_element()
    auto minIt = min_element(list.begin(), list.end());
    auto maxIt = max_element(list.begin(), list.end());
    cout << "Min element: " << *minIt << " at index " << distance(list.begin(), minIt) << endl;
    cout << "Max element: " << *maxIt << " at index " << distance(list.begin(), maxIt) << endl;

    // reverse(): reverse vector elements in place
    reverse(list.begin(), list.end());
    cout << "After reverse: ";
    printVector(list);

    // rotate(): cyclic rotate elements
    // rotate(first, n_first, last) makes n_first the new first element
    rotate(list.begin(), list.begin() + 2, list.end());
    cout << "After rotate left by 2 positions: ";
    printVector(list);

    // Custom sorting with Lambda expression (e.g. descending order)
    sort(list.begin(), list.end(), [](int a, int b) {
        return a > b;
    });
    cout << "After custom lambda sort (descending): ";
    printVector(list);

    // unique(): remove consecutive duplicates (vector must be sorted first)
    sort(list.begin(), list.end()); // sort in ascending order
    auto uniqueEnd = unique(list.begin(), list.end());
    list.erase(uniqueEnd, list.end());
    cout << "After sort & unique (duplicates removed): ";
    printVector(list);

    // Binary Search, lower_bound, and upper_bound (Vector MUST be sorted)
    // list is currently sorted: 1 2 5 8 9
    bool exists = binary_search(list.begin(), list.end(), 5);
    cout << "Does 5 exist? " << (exists ? "Yes" : "No") << endl;

    // lower_bound: returns iterator to first element >= target
    auto lb = lower_bound(list.begin(), list.end(), 5);
    cout << "lower_bound for 5: " << *lb << " at index " << distance(list.begin(), lb) << endl;

    // upper_bound: returns iterator to first element > target
    auto ub = upper_bound(list.begin(), list.end(), 5);
    cout << "upper_bound for 5: " << *ub << " at index " << distance(list.begin(), ub) << endl << endl;


    // ==========================================================
    // 7. SORTING VECTOR OF PAIRS / OBJECTS
    // ==========================================================
    cout << "--- 7. Vector of Pairs & Custom Comparator ---" << endl;
    vector<pair<int, string>> students = {
        {85, "Alice"},
        {92, "Bob"},
        {78, "Charlie"},
        {92, "David"}
    };

    // Sort by marks descending; if marks are equal, sort by name alphabetically
    sort(students.begin(), students.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first != b.first) {
            return a.first > b.first; // Higher marks first
        }
        return a.second < b.second;   // Alphabetical order for equal marks
    });

    cout << "Ranked students:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.second << ", Marks: " << student.first << endl;
    }
    cout << endl;


    // ==========================================================
    // 8. 2D VECTORS (DYNAMIC MATRIX & JAGGED ARRAYS)
    // ==========================================================
    cout << "--- 8. 2D Vectors (Matrix & Jagged Arrays) ---" << endl;

    // Creating a 3x4 matrix filled with 7
    // vector<vector<int>> matrix(rows, vector<int>(cols, initial_value));
    int rows = 3, cols = 4;
    vector<vector<int>> matrix(rows, vector<int>(cols, 7));

    matrix[1][2] = 99; // modify element at row 1, col 2

    cout << "3x4 Matrix:" << endl;
    for (int r = 0; r < matrix.size(); r++) {
        for (int c = 0; c < matrix[r].size(); c++) {
            cout << matrix[r][c] << "\t";
        }
        cout << endl;
    }

    // Dynamic / Jagged 2D vector (rows have different lengths)
    vector<vector<int>> jagged;
    jagged.push_back({1});
    jagged.push_back({2, 3});
    jagged.push_back({4, 5, 6, 7});

    cout << "\nJagged 2D Vector:" << endl;
    for (const auto& row : jagged) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
