#include <iostream>
#include <unordered_map>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    explicit Node(int data){
        this->data = data;
        next = nullptr;
    }
};

bool contain_cycle(Node* head)
{
    unordered_map<Node*, bool> hashTable;

    Node* temp = head;

    while(temp != nullptr)
    {
        if (hashTable.count(temp) != 0)
        {
            return true;
        }
        hashTable[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{

}