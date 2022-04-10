#include <stdio.h>
#include <string.h>

#include "list.h"

int main() {
  list_t *p_my_list = create_list();
  char *p_greeting = "Hello World";

  for (unsigned int i = 0; i < strlen(p_greeting); ++i) {
    insert_at_end(p_my_list, (char[2]){p_greeting[i], '\0'}, 1);
  }

  printf("Elemento cabeza es %c\n", *(char *)p_my_list->p_head->p_value);
  for (unsigned int j = 0; j < get_len(p_my_list); ++j) {
    printf("%s\n", (char *)get_node_at(p_my_list, j)->p_value);
  }

  destroy_each_node(p_my_list);
  destroy_list(p_my_list);

  return 0;
}
