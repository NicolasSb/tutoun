/**
 * @file Core0.c
 * @generated by CPrinter
 * @date Mon Dec 17 10:05:27 CET 2018
 *
 * Code generated for processing element Core0 (ID=0).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;

// Core Global Definitions
char Shared[681472]; //  size:= 681472*char
char *const Read_YUV_0__display_0__0 = (char*) (Shared+0);  // Read_YUV_0 > display_0 size:= 50688*char
char *const Read_YUV_0__Split_0__0 = (char*) (Shared+50688);  // Read_YUV_0 > Split_0 size:= 101376*char
char *const Split_0__explode_Split_0_out__0 = (char*) (Shared+152064);  // Split_0 > explode_Split_0_output size:= 107008*char
char *const explode_Split_0_output__Sobe__0 = (char*) (Shared+259072);  // explode_Split_0_output > Sobel_0 size:= 13376*char
char *const explode_Split_0_output__Sobe__1 = (char*) (Shared+272448);  // explode_Split_0_output > Sobel_1 size:= 13376*char
char *const explode_Split_0_output__Sobe__2 = (char*) (Shared+285824);  // explode_Split_0_output > Sobel_2 size:= 13376*char
char *const explode_Split_0_output__Sobe__3 = (char*) (Shared+299200);  // explode_Split_0_output > Sobel_3 size:= 13376*char
char *const explode_Split_0_output__Sobe__4 = (char*) (Shared+312576);  // explode_Split_0_output > Sobel_4 size:= 13376*char
char *const explode_Split_0_output__Sobe__5 = (char*) (Shared+325952);  // explode_Split_0_output > Sobel_5 size:= 13376*char
char *const explode_Split_0_output__Sobe__6 = (char*) (Shared+339328);  // explode_Split_0_output > Sobel_6 size:= 13376*char
char *const explode_Split_0_output__Sobe__7 = (char*) (Shared+352704);  // explode_Split_0_output > Sobel_7 size:= 13376*char
char *const Sobel_0__implode_Merge_0_inp__0 = (char*) (Shared+366080);  // Sobel_0 > implode_Merge_0_input size:= 13376*char
char *const Sobel_4__implode_Merge_0_inp__0 = (char*) (Shared+379456);  // Sobel_4 > implode_Merge_0_input size:= 13376*char
char *const Sobel_1__implode_Merge_0_inp__0 = (char*) (Shared+392832);  // Sobel_1 > implode_Merge_0_input size:= 13376*char
char *const Sobel_2__implode_Merge_0_inp__0 = (char*) (Shared+406208);  // Sobel_2 > implode_Merge_0_input size:= 13376*char
char *const Sobel_3__implode_Merge_0_inp__0 = (char*) (Shared+419584);  // Sobel_3 > implode_Merge_0_input size:= 13376*char
char *const Sobel_5__implode_Merge_0_inp__0 = (char*) (Shared+432960);  // Sobel_5 > implode_Merge_0_input size:= 13376*char
char *const Sobel_6__implode_Merge_0_inp__0 = (char*) (Shared+446336);  // Sobel_6 > implode_Merge_0_input size:= 13376*char
char *const Sobel_7__implode_Merge_0_inp__0 = (char*) (Shared+459712);  // Sobel_7 > implode_Merge_0_input size:= 13376*char
char *const implode_Merge_0_input__Merge__0 = (char*) (Shared+473088);  // implode_Merge_0_input > Merge_0 size:= 107008*char
char *const Merge_0__display_0__0 = (char*) (Shared+580096);  // Merge_0 > display_0 size:= 101376*char
uchar *const u__u__0 = (uchar*) (Shared+0);  // Read_YUV_0_u > display_0_u size:= 25344*uchar
uchar *const v__v__0 = (uchar*) (Shared+25344);  // Read_YUV_0_v > display_0_v size:= 25344*uchar
uchar *const y__input__0 = (uchar*) (Shared+50688);  // Read_YUV_0_y > Split_0_input size:= 101376*uchar
uchar *const output__input__0 = (uchar*) (Shared+152064);  // Split_0_output > explode_Split_0_output_input size:= 107008*uchar
uchar *const output_0__input__0 = (uchar*) (Shared+259072);  // explode_Split_0_output_output_0 > Sobel_0_input size:= 13376*uchar
uchar *const output_1__input__0 = (uchar*) (Shared+272448);  // explode_Split_0_output_output_1 > Sobel_1_input size:= 13376*uchar
uchar *const output_2__input__0 = (uchar*) (Shared+285824);  // explode_Split_0_output_output_2 > Sobel_2_input size:= 13376*uchar
uchar *const output_3__input__0 = (uchar*) (Shared+299200);  // explode_Split_0_output_output_3 > Sobel_3_input size:= 13376*uchar
uchar *const output_4__input__0 = (uchar*) (Shared+312576);  // explode_Split_0_output_output_4 > Sobel_4_input size:= 13376*uchar
uchar *const output_5__input__0 = (uchar*) (Shared+325952);  // explode_Split_0_output_output_5 > Sobel_5_input size:= 13376*uchar
uchar *const output_6__input__0 = (uchar*) (Shared+339328);  // explode_Split_0_output_output_6 > Sobel_6_input size:= 13376*uchar
uchar *const output_7__input__0 = (uchar*) (Shared+352704);  // explode_Split_0_output_output_7 > Sobel_7_input size:= 13376*uchar
uchar *const output__input_0__0 = (uchar*) (Shared+366080);  // Sobel_0_output > implode_Merge_0_input_input_0 size:= 13376*uchar
uchar *const output__input_4__0 = (uchar*) (Shared+379456);  // Sobel_4_output > implode_Merge_0_input_input_4 size:= 13376*uchar
uchar *const output__input_1__0 = (uchar*) (Shared+392832);  // Sobel_1_output > implode_Merge_0_input_input_1 size:= 13376*uchar
uchar *const output__input_2__0 = (uchar*) (Shared+406208);  // Sobel_2_output > implode_Merge_0_input_input_2 size:= 13376*uchar
uchar *const output__input_3__0 = (uchar*) (Shared+419584);  // Sobel_3_output > implode_Merge_0_input_input_3 size:= 13376*uchar
uchar *const output__input_5__0 = (uchar*) (Shared+432960);  // Sobel_5_output > implode_Merge_0_input_input_5 size:= 13376*uchar
uchar *const output__input_6__0 = (uchar*) (Shared+446336);  // Sobel_6_output > implode_Merge_0_input_input_6 size:= 13376*uchar
uchar *const output__input_7__0 = (uchar*) (Shared+459712);  // Sobel_7_output > implode_Merge_0_input_input_7 size:= 13376*uchar
uchar *const output__input__1 = (uchar*) (Shared+473088);  // implode_Merge_0_input_output > Merge_0_input size:= 107008*uchar
uchar *const output__y__0 = (uchar*) (Shared+580096);  // Merge_0_output > display_0_y size:= 101376*uchar

void *computationThread_Core0(void *arg){
	if (arg != NULL) {
		printf("Warning: expecting NULL arguments\n");
	}
	// Initialisation(s)
	initReadYUV(352/*width*/,288/*height*/); // Read_YUV_0
	yuvDisplayInit(0/*id*/,352/*width*/,288/*height*/); // display_0

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
		readYUV(352/*width*/,288/*height*/,y__input__0,u__u__0,v__v__0); // Read_YUV_0
		split(8/*nbSlice*/,352/*width*/,288/*height*/,y__input__0,output__input__0); // Split_0
		// Fork explode_Split_0_output
		{
			memcpy(output_0__input__0+0, output__input__0+0, 13376*sizeof(uchar));
			memcpy(output_1__input__0+0, output__input__0+13376, 13376*sizeof(uchar));
			memcpy(output_2__input__0+0, output__input__0+26752, 13376*sizeof(uchar));
			memcpy(output_3__input__0+0, output__input__0+40128, 13376*sizeof(uchar));
			memcpy(output_4__input__0+0, output__input__0+53504, 13376*sizeof(uchar));
			memcpy(output_5__input__0+0, output__input__0+66880, 13376*sizeof(uchar));
			memcpy(output_6__input__0+0, output__input__0+80256, 13376*sizeof(uchar));
			memcpy(output_7__input__0+0, output__input__0+93632, 13376*sizeof(uchar));
		}
		// SyncComGroup = 0
		sendStart(0, 1); // Core0 > Core1: explode_Split_0_output__Sobe__1
		sendEnd(); // Core0 > Core1: explode_Split_0_output__Sobe__1
		// SyncComGroup = 0
		sendStart(0, 2); // Core0 > Core2: explode_Split_0_output__Sobe__2
		sendEnd(); // Core0 > Core2: explode_Split_0_output__Sobe__2
		// SyncComGroup = 0
		sendStart(0, 3); // Core0 > Core3: explode_Split_0_output__Sobe__3
		sendEnd(); // Core0 > Core3: explode_Split_0_output__Sobe__3
		// SyncComGroup = 0
		sendStart(0, 1); // Core0 > Core1: explode_Split_0_output__Sobe__5
		sendEnd(); // Core0 > Core1: explode_Split_0_output__Sobe__5
		// SyncComGroup = 0
		sendStart(0, 2); // Core0 > Core2: explode_Split_0_output__Sobe__6
		sendEnd(); // Core0 > Core2: explode_Split_0_output__Sobe__6
		// SyncComGroup = 0
		sendStart(0, 3); // Core0 > Core3: explode_Split_0_output__Sobe__7
		sendEnd(); // Core0 > Core3: explode_Split_0_output__Sobe__7
		sobel(352/*width*/,38/*height*/,output_0__input__0,output__input_0__0); // Sobel_0
		sobel(352/*width*/,38/*height*/,output_4__input__0,output__input_4__0); // Sobel_4
		receiveStart(); // Core1 > Core0: Sobel_1__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(1, 0); // Core1 > Core0: Sobel_1__implode_Merge_0_inp__0
		receiveStart(); // Core2 > Core0: Sobel_2__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(2, 0); // Core2 > Core0: Sobel_2__implode_Merge_0_inp__0
		receiveStart(); // Core3 > Core0: Sobel_3__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(3, 0); // Core3 > Core0: Sobel_3__implode_Merge_0_inp__0
		receiveStart(); // Core1 > Core0: Sobel_5__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(1, 0); // Core1 > Core0: Sobel_5__implode_Merge_0_inp__0
		receiveStart(); // Core2 > Core0: Sobel_6__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(2, 0); // Core2 > Core0: Sobel_6__implode_Merge_0_inp__0
		receiveStart(); // Core3 > Core0: Sobel_7__implode_Merge_0_inp__0
		// SyncComGroup = 1
		receiveEnd(3, 0); // Core3 > Core0: Sobel_7__implode_Merge_0_inp__0
		// Join implode_Merge_0_input
		{
			memcpy(output__input__1+0, output__input_0__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+13376, output__input_1__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+26752, output__input_2__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+40128, output__input_3__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+53504, output__input_4__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+66880, output__input_5__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+80256, output__input_6__0+0, 13376*sizeof(uchar));
			memcpy(output__input__1+93632, output__input_7__0+0, 13376*sizeof(uchar));
		}
		merge(8/*nbSlice*/,352/*width*/,288/*height*/,output__input__1,output__y__0); // Merge_0
		yuvDisplay(0/*id*/,output__y__0,u__u__0,v__v__0); // display_0
	}
	return NULL;
}

