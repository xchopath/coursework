#include <iostream>

using namespace std;

struct NamaLinkedList {
	// TypeData NamaData;
    int data;
    NamaLinkedList* next;
};

int main() {
    NamaLinkedList *v1, *v2, *v3, *v4, *vn;

    // Alokasi memori untuk setiap node
    v1 = new NamaLinkedList();
    v2 = new NamaLinkedList();
    v3 = new NamaLinkedList();
    v4 = new NamaLinkedList();

    // Pengisian data node
    v1->data = 1;
    v1->next = v2;
    v2->data = 2;
    v2->next = v3;
    v3->data = 3;
    v3->next = v4;
    v4->data = 4;
    v4->next = NULL;

    cout << "Initial linked list:" << endl;

    NamaLinkedList* cur = v1;
    while (cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }

    // Menambahkan newNode vn ke 3
    vn = new NamaLinkedList();
    vn->data = 5;
    vn->next = v3->next;
    v3->next = vn;

    // Print linked list
    cout << "" << endl;
    cout << "" << endl;
    cout << "Final linked list:" << endl;
    NamaLinkedList* curr = v1;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
