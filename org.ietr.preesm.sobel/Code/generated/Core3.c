/**
 * @file Core3.c
 * @generated by CPrinter
 * @date Mon Dec 17 10:05:27 CET 2018
 *
 * Code generated for processing element Core3 (ID=3).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__3;  // explode_Split_0_output > Sobel_3 size:= 13376*char defined in Core0
extern uchar *const output_3__input__0;  // explode_Split_0_output_output_3 > Sobel_3_input size:= 13376*uchar defined in Core0
extern uchar *const output__input_3__0;  // Sobel_3_output > implode_Merge_0_input_input_3 size:= 13376*uchar defined in Core0
extern char *const Sobel_3__implode_Merge_0_inp__0;  // Sobel_3 > implode_Merge_0_input size:= 13376*char defined in Core0
extern char *const explode_Split_0_output__Sobe__7;  // explode_Split_0_output > Sobel_7 size:= 13376*char defined in Core0
extern uchar *const output_7__input__0;  // explode_Split_0_output_output_7 > Sobel_7_input size:= 13376*uchar defined in Core0
extern uchar *const output__input_7__0;  // Sobel_7_output > implode_Merge_0_input_input_7 size:= 13376*uchar defined in Core0
extern char *const Sobel_7__implode_Merge_0_inp__0;  // Sobel_7 > implode_Merge_0_input size:= 13376*char defined in Core0

// Core Global Definitions

void *computationThread_Core3(void *arg){
	if (arg != NULL) {
		printf("Warning: expecting NULL arguments\n");
	}
	// Begin the execution loop
#ifdef LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<LOOP_SIZE;index++){
#else // Default case of an infinite loop
	while(1){
#endif
		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core0 > Core3: explode_Split_0_output__Sobe__3
		// SyncComGroup = 0
		receiveEnd(0, 3); // Core0 > Core3: explode_Split_0_output__Sobe__3
		sobel(352/*width*/,38/*height*/,output_3__input__0,output__input_3__0); // Sobel_3
		// SyncComGroup = 1
		sendStart(3, 0); // Core3 > Core0: Sobel_3__implode_Merge_0_inp__0
		sendEnd(); // Core3 > Core0: Sobel_3__implode_Merge_0_inp__0
		receiveStart(); // Core0 > Core3: explode_Split_0_output__Sobe__7
		// SyncComGroup = 2
		receiveEnd(0, 3); // Core0 > Core3: explode_Split_0_output__Sobe__7
		sobel(352/*width*/,38/*height*/,output_7__input__0,output__input_7__0); // Sobel_7
		// SyncComGroup = 3
		sendStart(3, 0); // Core3 > Core0: Sobel_7__implode_Merge_0_inp__0
		sendEnd(); // Core3 > Core0: Sobel_7__implode_Merge_0_inp__0
	}
	return NULL;
}

