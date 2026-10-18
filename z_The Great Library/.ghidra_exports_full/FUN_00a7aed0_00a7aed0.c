// FUN_00a7aed0 @ 00a7aed0 body=[[00a7aed0, 00a7b02b]]


void FUN_00a7aed0(void)

{
  int *lpParameter;
  HANDLE hThread;
  int in_ECX;
  int nPriority;
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b49efb;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 8) == 0) {
    ExceptionList = &local_14;
    lpParameter = (int *)FUN_00aae9af();
    *lpParameter = in_ECX;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress_00a7b0c0,lpParameter,0,
                           (LPDWORD)(in_ECX + 4));
    *(HANDLE *)(in_ECX + 8) = hThread;
    if (*(int *)(in_ECX + 0x1c) == 1) {
      nPriority = 0;
    }
    else if (*(int *)(in_ECX + 0x1c) == 2) {
      nPriority = 1;
    }
    else {
      nPriority = -1;
    }
    SetThreadPriority(hThread,nPriority);
    if (*(int *)(in_ECX + 8) == 0) {
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = 0;
      FUN_00409350();
      local_c = 0;
      FUN_00409350("Thread Creation failed!",0x17);
      FUN_00a8d380(local_74);
      local_c._0_1_ = 1;
      FUN_00408ed0();
      local_c._0_1_ = 2;
      FUN_00408ed0();
      local_c = CONCAT31(local_c._1_3_,1);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
  }
  ExceptionList = local_14;
  return;
}

