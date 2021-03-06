#include <stdlib.h>
#include <stdio.h>

#include "pbs_nodes.h"
#include "batch_request.h"
#include "list_link.h"

int LOGLEVEL = 10;
int num_nodes = 10;

struct pbsnode *next_host(all_nodes *an, all_nodes_iterator **iter, struct pbsnode *held)
  {

  if (*iter == NULL)
    *iter = an->get_iterator();
  return (*iter)->get_next_item();
  }

int unlock_node(struct pbsnode *the_node, const char *method_name, const char *msg, int logging)
  {
  return(0);
  }

int status_node(struct pbsnode *pnode, struct batch_request *preq, int *bad, tlist_head *pstathd)
  {
  int *count = (int *)pstathd->ll_struct;
  *count += 1;

  if (num_nodes == -1)
    return(-1);

  return(0);
  }

