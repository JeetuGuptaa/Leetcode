//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
        vector<vector<int>> traversal1;
        vector<vector<int>> traversal2;
        
        if(root1){
            queue<Node*> nodes;
            nodes.push(root1);
            int len;
            while(!nodes.empty()){
                len = nodes.size();
                Node* temp;
                vector<int> current_traversal;
                for(int i=0;i<len;i++){
                    temp = nodes.front();
                    nodes.pop();
                    current_traversal.push_back(temp->data);
                    if(temp->left) nodes.push(temp->left);
                    if(temp->right) nodes.push(temp->right);
                }
                traversal1.push_back(current_traversal);
            }
        }
        if(root2){
            queue<Node*> nodes;
            nodes.push(root2);
            int len;
            while(!nodes.empty()){
                len = nodes.size();
                Node* temp;
                vector<int> current_traversal;
                for(int i=0;i<len;i++){
                    temp = nodes.front();
                    nodes.pop();
                    current_traversal.push_back(temp->data);
                    if(temp->left) nodes.push(temp->left);
                    if(temp->right) nodes.push(temp->right);
                }
                traversal2.push_back(current_traversal);
            }
        }
        
        if(traversal1.size()!=traversal2.size()) return false;

        for(int i=0;i<traversal1.size();i++){
            if(traversal1[i].size()!=traversal2[i].size()) return false;
            sort(traversal1[i].begin(), traversal1[i].end());
            sort(traversal2[i].begin(), traversal2[i].end());
            
            int j = 0;
            while(j<traversal1[i].size()){
                if(traversal1[i][j]!=traversal2[i][j]) return false;
                j++;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends