#include <iostream>

using namespace std;

struct NamaLinkedList {
   // TypeData NamaData;
   int data;
   NamaLinkedList* next;
};


int main() {
   NamaLinkedList *v1, *v2, *v3, *v4;

   // Alokasi memori untuk setiap NamaLinkedList
   v1 = new NamaLinkedList();
   v2 = new NamaLinkedList();
   v3 = new NamaLinkedList();
   v4 = new NamaLinkedList();

   // Pengisian node Linked List
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

   // Menghapus node v3
   NamaLinkedList* temp = v3;
   v2->next = v4;
   delete temp;

   // Update linked list
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
