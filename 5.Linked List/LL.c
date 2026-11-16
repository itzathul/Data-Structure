#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *newnode, *temp, *head = NULL;

void insert()
{
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void delete()
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);

    printf("Node deleted\n");
}

void search()
{
    int data, flag = 0, count = 1;

    printf("Enter the data to be searched: ");
    scanf("%d", &data);

    temp = head;

    while(temp != NULL)
    {
        if(data == temp->data)
        {
            flag = 1;
            break;
        }

        temp = temp->next;
        count++;
    }

    if(flag == 1)
        printf("The data %d is found at position %d\n", data, count);
    else
        printf("The data %d not found\n", data);
}

void display()
{
    temp = head;

    if(head == NULL)
        printf("List is empty");
    else
    {
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }

    printf("\n");
}

int main()
{
    int opt;

    do
    {
        printf("\n1. Insert\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Search the data\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                search();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid option\n");
        }

    } while(opt != 5);

    return 0;
}
