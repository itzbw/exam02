
// #include <unistd.h>
// typedef struct s_list t_list;

// struct s_list
// {
// 	int     data;
// 	t_list  *next;
// };

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *temp;

    temp = lst;

    while (lst->next)
    {

        if ((*cmp) (lst->data, lst->next->data)== 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;

            lst = temp;
		//After swapping, we go back to the beginning of our list by setting "lst" to the "temp" value.
            	//we need to start comparing numbers from the beginning again. 

        }
        else
            lst = lst->next;
	    // to move forward in the list
    }
    lst = temp;
    return (lst);
}


// #include <stdio.h>
// int main() {
//     // Create some sample data for our list
//     t_list node1, node2, node3;
//     node1.data = 3;
//     node2.data = 1;
//     node3.data = 2;

//     // Connect the nodes together to form a list
//     node1.next = &node2;
//     node2.next = &node3;
//     node3.next = NULL;

//     // Call the sort_list function to sort the list
//     t_list *sortedList = sort_list(&node1, ascending);

//     // Print the sorted list
//     t_list *current = sortedList;
//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");

//     return 0;
// }
