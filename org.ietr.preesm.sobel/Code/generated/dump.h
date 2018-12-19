/**
 * Copyright or © or Copr. IETR/INSA - Rennes (2017 - 2018) :
 *
 * Antoine Morvan <antoine.morvan@insa-rennes.fr> (2017 - 2018)
 *
 * This software is a computer program whose purpose is to help prototyping
 * parallel applications using dataflow formalism.
 *
 * This software is governed by the CeCILL  license under French law and
 * abiding by the rules of distribution of free software.  You can  use,
 * modify and/ or redistribute the software under the terms of the CeCILL
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * "http://www.cecill.info".
 *
 * As a counterpart to the access to the source code and  rights to copy,
 * modify and redistribute granted by the license, users are provided only
 * with a limited warranty  and the software's author,  the holder of the
 * economic rights,  and the successive licensors  have only  limited
 * liability.
 *
 * In this respect, the user's attention is drawn to the risks associated
 * with loading,  using,  modifying and/or developing or reproducing the
 * software by the user in light of its specific status of free software,
 * that may mean  that it is complicated to manipulate,  and  that  also
 * therefore means  that it is reserved for developers  and  experienced
 * professionals having in-depth computer knowledge. Users are therefore
 * encouraged to load and test the software's suitability as regards their
 * requirements in conditions enabling the security of their systems and/or
 * data to be ensured and,  more generally, to use and operate it in the
 * same conditions as regards security.
 *
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL license and that you accept its terms.
 */
/*
	============================================================================
	Name        : dump.h
	Author      : kdesnos
	Version     :
	Copyright   : CECILL-C
	Description : Function called by code generated by the Instrumented C
                  Printer of Preesm
	============================================================================
*/

#ifndef _PREESM_DUMP_H
#define _PREESM_DUMP_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#undef int32_t
#undef uint32_t
#undef int64_t
#undef uint64_t

typedef _int32 int32_t;
typedef unsigned _int32 uint32_t;

typedef _int64 int64_t;
typedef unsigned _int64 uint64_t;
/**
* Character string pointing to the "analysis.csv" file generated by Preesm
* Instrumented C printer
*/
#define DUMP_FILE "analysis.csv"

/**
* Function used to dump the current processor time to the appropriate
* place in the dumpBuffer.
*
* @param id
*       The id of the current dump. Each id corresponds to a unique instant
*       of the schedule generated by Preesm.
* @param dumpBuffer
*       This buffer stores all the timings dumped by calling the dumpTime
        function. This timings will be analyzed by the writeTime function.
*/
void dumpTime(int id, uint64_t* dumpBuffer);

/**
* Function used to analyze the timings dumped in the dumpBuffer and write the
* result to the DUMP_FILE file.
*
* @param dumpBuffer
*        This buffer stores all the timings dumped by calling the dumpTime
*        function. This timings will be analyzed by the writeTime function.
*
* @param nbDump
*        Total number of dumps of the program (i.e. size of dumpBuffer and
*        nbExec arrays)
*
* @param nbExec
*        This array stores a unique value for each dumpId corresponding to
*        the number of times the function/actor preceeding this dump should be
*        executed in order to get a significant time measure. This parameter
*        is updated when calling the writeTime function.
*/
void writeTime(uint64_t* dumpBuffer, int nbDump, int* nbExec);

/**
* Function used to initialize the analysis mechanism.
* This function:
* - Initialises the nbExec array with unitary values
* - Opens/Creates the analysis csv file.
*
* @param nbExec
*        This array stores a unique value for each dumpId corresponding to
*        the number of times the function/actor preceeding this dump should be
*        executed in order to get a significant time measure. This parameter
*        is updated when calling the writeTime function.
* @param nbDump
*        Total number of dumps of the program (i.e. size of dumpBuffer and
*        nbExec arrays)
*/
void initNbExec(int* nbExec, int nbDump);

#endif
