//************************************************************************
// Copyright (C) 2020 Massachusetts Institute of Technology
//
// File Name:      
// Program:        Common Evaluation Platform (CEP)
// Description:    
// Notes:          
//
//************************************************************************
//
// For bareMetal mode ONLY
//
#ifdef BARE_MODE
#include <stdio.h>
#include "cep_adrMap.h"
#include "cep_apis.h"
#include "cepregression.h"

//
// =================================================
// Bare metal Mode
// =================================================
//
int main(void)
{
  int errCnt = 0;
  int printfOn = 0;
  set_printf(printfOn);  
  //
  // ===================================
  // Call your program here
  // ===================================  
  //
  int testId = 0x88;
  //if (!errCnt) { errCnt = cepregression_test();  }
  //
  // ===================================
  // Notify checker about program status
  // ===================================  
  //  
  set_status(errCnt,testId);
  return 0;
}

#endif
