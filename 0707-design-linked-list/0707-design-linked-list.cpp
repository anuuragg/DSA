class NodeList {
public:
    int data;
    NodeList* prev;
    NodeList* next;

    NodeList(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    NodeList* head;

    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        if (index < 0) return -1;

        int i = 0;
        NodeList* temp = head;

        while (temp != nullptr) {
            if (i == index) {
                return temp->data;
            }

            temp = temp->next;
            i++;
        }

        return -1;
    }

    void addAtHead(int val) {
        NodeList* NewHead = new NodeList(val);

        if (head != nullptr) {
            NewHead->next = head;
            head->prev = NewHead;
        }

        head = NewHead;
    }

    void addAtTail(int val) {
        NodeList* NewTail = new NodeList(val);
        NodeList* temp = head;

        if (temp == nullptr) {
            head = NewTail;
            return;
        }

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = NewTail;
        NewTail->prev = temp;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        NodeList* temp = head;
        int i = 0;

        while (temp != nullptr && i < index) {
            temp = temp->next;
            i++;
        }

        if (i != index) return;

        if (temp == nullptr) {
            addAtTail(val);
            return;
        }

        NodeList* newNode = new NodeList(val);

        newNode->prev = temp->prev;
        newNode->next = temp;

        temp->prev->next = newNode;
        temp->prev = newNode;
    }

    void deleteAtIndex(int index) {
        if (index < 0) return;

        NodeList* temp = head;
        int i = 0;

        while (temp != nullptr && i < index) {
            temp = temp->next;
            i++;
        }

        if (temp == nullptr) return;

        if (temp == head) {
            head = head->next;
        }

        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        }

        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }

        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */