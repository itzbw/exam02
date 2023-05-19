#include <stdlib.h>
#include "ft_list.h"

// // The structure for the linked list
// typedef struct s_list
// {
//     struct s_list *next;
//     void *data;
// } t_list;



// The ft_list_foreach function
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr = begin_list;

    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

// // The function to be performed on each element of the list
// void print_data(void *data)
// {
//     printf("%d\n", *(int *)data); // Assuming the data is an integer
// }

// int main()
// {
//     // Create some sample data
//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 30;

//     // Create the linked list
//     t_list list1, list2, list3;
//     list1.data = &num1;
//     list1.next = &list2;
//     list2.data = &num2;
//     list2.next = &list3;
//     list3.data = &num3;
//     list3.next = NULL;

//     // Call ft_list_foreach to print the data in each node
//     ft_list_foreach(&list1, print_data);

//     return 0;
// }
