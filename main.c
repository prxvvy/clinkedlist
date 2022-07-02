#include <stdio.h>

#include "list.h"

int main() {
   list_t *p_my_list = create_list();
   for (int i = 0; i < 5; ++i) {
      insert_at_end(p_my_list, "H", 1);
   }

   printf("List's got %u nodes.\n", get_len(p_my_list));

   for (unsigned int j = 0; j < get_len(p_my_list); ++j) {
      printf("%s. Position: %u\n", (char *)get_node_at(p_my_list, j)->p_value,
	     get_node_at(p_my_list, j)->position);
   }

   destroy_each_node(p_my_list);
   destroy_list(p_my_list);
   return 1;
}
