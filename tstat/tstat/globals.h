/*
 *
 * Copyright (c) 2001
 *      Politecnico di Torino.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * For bug report and other information please visit Tstat site:
 * http://tstat.polito.it
 *
 * Tstat is deeply based on TCPTRACE. The authors would like to thank
 * Shawn Ostermann for the development of TCPTRACE.
 *
*/
#ifndef GLOBALS_H_HDR
#define GLOBALS_H_HDR
void InitGlobals(void);
void PrintGlobals(void);
void InitGlobalArrays(void);
int  LoadGlobals(char *file);
void globals_parse_ini_arg(char *param_name, param_value param_value);
void globals_parse_end_section(void);
void globals_parse_start_section(void);
#endif
