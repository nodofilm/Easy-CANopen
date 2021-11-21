#include <stdio.h>
#include <stdlib.h>

/* Include Easy CANopen */
#include "Easy_CANopen/Easy_CANopen.h"

int main() {
	/* Declare our structures */
	CANopen master_node = {0};
	CANopen slave_node = {0}; /* Notice that ONLY one slave node can be connected to the CAN network */

	/* Set the internal identification */
	slave_node.slave.this_node_ID = 0x5; /* Or try 0xFF */

	/* Find non configured node ID */
	Easy_CANopen_Other_Node_Check_If_There_Are_Any_Non_Configured_Nodes_At_The_CAN_Network(&master_node);
	Easy_CANopen_Thread_Listen_Messages(&slave_node);
	Easy_CANopen_Thread_Listen_Messages(&master_node);
	printf("Non configured node ID found = %s\n", master_node.master.lss.non_configured_node_ID_found == true ? "true" : "false");

	return 0;
}
