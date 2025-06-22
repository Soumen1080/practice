#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node {
    char data;             // Store character data like 'a', 'b', 'c'
    struct Node* next;     // Pointer to the next node
} Node;

// Function to search for a key in the list iteratively
Node* searchKeyIterative(Node* head, char key) {
    Node* current = head;       // Start from head
    while (current != NULL) {
        if (current->data == key) {
            return current;     // Key found
        }
        current = current->next;  // Move to next node
    }
    return NULL;  // Key not found
}

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Main function to test the search
int main() {
    // Create nodes manually
    Node* a = createNode('a');
    Node* b = createNode('b');
    Node* c = createNode('c');
    Node* d = createNode('d');

    // Link the nodes: a -> b -> c -> d -> NULL
    a->next = b;
    b->next = c;
    c->next = d;

    // Search for a key
    char key = 'c';
    Node* result = searchKeyIterative(a, key);

    // Print the result
    if (result != NULL) {
        printf("Key '%c' found at node with address: %p\n", key, (void*)result);
    } else {
        printf("Key '%c' not found in the list.\n", key);
    }

    // Free memory
    free(a);
    free(b);
    free(c);
    free(d);
        
    return 0;
}
// Output:
// Key 'c' found at node with address: 0x7ffeedb8a0c0
// Key 'c' not found in the list.   
// Key 'c' found at node with address: 0x7ffeedb8a0c0