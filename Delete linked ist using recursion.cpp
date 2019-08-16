void delete(struct Node* head)
{
    if (head == NULL)
        return;
    deleteList(head->next);
    free(head);
}
