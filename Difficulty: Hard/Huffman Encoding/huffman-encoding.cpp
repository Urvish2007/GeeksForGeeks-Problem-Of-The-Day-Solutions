class Solution {
  public:
// Class to represent Huffman tree node
class Node {
public:
    int data;   // frequency
    int index;  // smallest original index in subtree
    Node* left;
    Node* right;

    Node(int d, int i, Node* l = nullptr, Node* r = nullptr) {
        data = d;
        index = i;
        left = l;
        right = r;
    }
};

// Preorder traversal to generate codes
void preOrder(Node* root, vector<string> &ans, string curr) {
    if (root == nullptr) return;

    // Leaf node
    if (root->left == nullptr && root->right == nullptr) {
        if (curr == "") curr = "0"; // single character case
        ans.push_back(curr);
        return;
    }

    preOrder(root->left, ans, curr + "0");
    preOrder(root->right, ans, curr + "1");
}

// Huffman Codes function
vector<string> huffmanCodes(string s, vector<int> freq) {
    int n = s.length();

    // Min heap simulated using vector (like JS sort)
    vector<pair<pair<int,int>, Node*>> pq;

    for (int i = 0; i < n; i++) {
        pq.push_back({{freq[i], i}, new Node(freq[i], i)});
    }

    // Single character case
    if (n == 1) return {"0"};

    // Construct Huffman Tree
    while (pq.size() > 1) {

        // Sort based on freq, then index
        sort(pq.begin(), pq.end(), [](auto &a, auto &b) {
            if (a.first.first != b.first.first)
                return a.first.first < b.first.first;
            return a.first.second < b.first.second;
        });

        // Left and Right nodes
        auto l = pq[0];
        auto r = pq[1];
        pq.erase(pq.begin());
        pq.erase(pq.begin());

        // Create new internal node
        Node* newNode = new Node(
            l.first.first + r.first.first,
            min(l.first.second, r.first.second),
            l.second,
            r.second
        );

        pq.push_back({{newNode->data, newNode->index}, newNode});
    }

    Node* root = pq[0].second;

    vector<string> ans;
    preOrder(root, ans, "");

    return ans;
}

};