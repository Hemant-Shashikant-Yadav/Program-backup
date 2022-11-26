 p = start;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        printf("Data deleted = %d", p->data);
        free(p);
    }