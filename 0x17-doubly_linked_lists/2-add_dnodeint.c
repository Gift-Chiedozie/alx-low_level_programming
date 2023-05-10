#include <stdlib.h>
#include "lists.h"  /*Replace with the actual header file containing the definition of dlistint_t*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    /*Create a new node*/
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        /*Failed to allocate memory for the new node*/
        return NULL;
    }

    /*Set the value of the new node*/
    new_node->n = n;
    new_node->prev = NULL;

    if (*head != NULL) {
        /*If the list is not empty, update the previous pointer of the current head*/
        (*head)->prev = new_node;
    }

    /*Set the next pointer of the new node to the current head*/
    new_node->next = *head;

    /*Update the head pointer to point to the new node*/
    *head = new_node;

    return new_node;
}

