#include <iostream>
#include <vector>

using namespace std;

class DisjointSet
{
private:
    vector<int> parent, rank;

public:
    // Constructor to initialize the disjoint set
    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);

        // Initially, each element is its own parent (self-loop)
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    // Find operation with path compression
    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    // Union operation with union by rank
    void unionSets(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        // If both elements are in the same set, no need to union
        if (rootX != rootY)
        {
            // Union by rank
            if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++; // Increment rank if both have the same rank
            }
        }
    }

    // To check if two elements are in the same set
    bool areInSameSet(int x, int y)
    {
        return find(x) == find(y);
    }
};

int main()
{
    DisjointSet ds(5); // Create disjoint set with 5 elements (0 to 4)

    // Union operations
    ds.unionSets(0, 1);
    ds.unionSets(1, 2);
    ds.unionSets(3, 4);

    // Find operations
    cout << "Find(0): " << ds.find(0) << endl; // Output: 0
    cout << "Find(1): " << ds.find(1) << endl; // Output: 0
    cout << "Find(2): " << ds.find(2) << endl; // Output: 0
    cout << "Find(3): " << ds.find(3) << endl; // Output: 3
    cout << "Find(4): " << ds.find(4) << endl; // Output: 3

    // Check if elements are in the same set
    cout << "Are 0 and 2 in the same set? " << (ds.areInSameSet(0, 2) ? "Yes" : "No") << endl; // Output: Yes
    cout << "Are 0 and 3 in the same set? " << (ds.areInSameSet(0, 3) ? "Yes" : "No") << endl; // Output: No

    return 0;
}
