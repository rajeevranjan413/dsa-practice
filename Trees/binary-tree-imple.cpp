#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(Node *node)
    {
        int data;
        cout << "Enter the data :";
        cin >> data;
        node = new Node(data);

        if (data == -1)
        {
            return NULL;
        }
        cout << "Enter data for inserting in left of " << data << endl;

        node->left = buildTree(node->left);

        cout << "Enter data for inserting in right of " << data << endl;

        node->right = buildTree(node->right);

        return node;
    }
    void levelOrderTraversal(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            if (q.front() == NULL)
            {
                cout << endl;
                q.pop();
                if (!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {

                cout << q.front()->data << " ";

                if (q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
        }
    }
    int height(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);

        int ans = max(left, right) + 1;
        return ans;
    }
};
int main()
{
    Node *root = NULL;
    root = root->buildTree(root);
    cout << endl;
    root->levelOrderTraversal(root);
    cout << root->height(root);

    return 0;
}