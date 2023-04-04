#include <stdio.h>
#include "lists.h" // Assuming the listint_t definition is present in this header file

/**
 * print_listint - Prints all elements of a listint_t singly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0; // Variable to keep track of the number of nodes

    while (h != NULL) // Traverse the list until the end (NULL pointer is reached)
    {
        printf("%d\n", h->n); // Print the value of the current node
        h = h->next; // Move to the next node
        count++; // Increment the count of nodes
    }

    return count; // Return the total number of nodes in the list
}
