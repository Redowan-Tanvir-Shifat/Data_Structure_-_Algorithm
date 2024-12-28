#include <bits/stdc++.h>
using namespace std;

// A Huffman tree node
struct MinHeapNode {
    char data;          // Character
    int freq;           // Frequency of the character
    MinHeapNode *left;  // Left child
    MinHeapNode *right; // Right child

    // Constructor for creating a new node
    MinHeapNode(char data, int freq) {
        this->data = data;
        this->freq = freq;
        left = right = nullptr;
    }
};

// Comparator for the priority queue to order nodes by frequency
struct compare {
    bool operator()(MinHeapNode *l, MinHeapNode *r) {
        return l->freq > r->freq;
    }
};

// Function to print the Huffman Codes by traversing the tree
void printCodes(MinHeapNode *root, string str) {
    if (!root)
        return;

    // If this is a leaf node, print the character and its code
    if (!root->left && !root->right) {
        cout << root->data << ": " << str << "\n";
    }

    // Traverse left and right subtrees
    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

// Function to build the Huffman Tree and generate codes
void HuffmanCodes(vector<char> &data, vector<int> &freq) {
    // Step 1: Create a priority queue to store live nodes of the Huffman tree
    priority_queue<MinHeapNode *, vector<MinHeapNode *>, compare> minHeap;

    // Step 2: Create a MinHeapNode for each character and push it into the priority queue
    for (size_t i = 0; i < data.size(); ++i) {
        minHeap.push(new MinHeapNode(data[i], freq[i]));
    }

    // Step 3: Iterate while the size of the heap is greater than 1
    while (minHeap.size() > 1) {
        // Extract the two nodes with the smallest frequencies
        MinHeapNode *left = minHeap.top();
        minHeap.pop();
        MinHeapNode *right = minHeap.top();
        minHeap.pop();

        // Create a new internal node with a frequency equal to the sum of the two nodes
        MinHeapNode *top = new MinHeapNode('$', left->freq + right->freq);

        // Set the extracted nodes as children of the new node
        top->left = left;
        top->right = right;

        // Push the new node into the priority queue
        minHeap.push(top);
    }

    // Step 4: The remaining node is the root of the Huffman tree
    MinHeapNode *root = minHeap.top();

    // Print the Huffman Codes
    printCodes(root, "");
}

int main() {
    // Example input: characters and their frequencies
    vector<char> data = {'a', 'b', 'c', 'd', 'e', 'f'};
    vector<int> freq = {5, 9, 12, 13, 16, 45};

    // Build Huffman Tree and print codes
    HuffmanCodes(data, freq);

    return 0;
}