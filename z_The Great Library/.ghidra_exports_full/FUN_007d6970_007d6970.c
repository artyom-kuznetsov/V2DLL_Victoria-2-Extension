// FUN_007d6970 @ 007d6970 body=[[007d6970, 007d6a31] [007d6a35, 007d6a70]]


void FUN_007d6970(undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  int unaff_EDI;
  char *local_50;
  undefined **local_4c [3];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  pvVar1 = ExceptionList;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3ac58;
  local_14 = ExceptionList;
  if (*(char *)(unaff_EDI + 0x59) != '\0') {
    piVar2 = (int *)(unaff_EDI + 0x5c);
    ExceptionList = &local_14;
    *piVar2 = *piVar2 + -1;
    if (-1 < *piVar2) {
      local_34 = *(int *)(unaff_EDI + 0x44) + -2;
      local_38 = *(int *)(unaff_EDI + 0x40) + -2;
      local_40 = 1;
      local_3c = 1;
      local_30 = (int *)0x0;
      piVar2 = (int *)FUN_00aae9af(8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        *piVar2 = (int)&local_30;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_c = 0;
        local_30 = piVar2;
        FUN_007d83b0(&local_40);
        FUN_0081ab00(param_1);
        *(undefined1 *)(unaff_EDI + 0x59) = 0;
        *(undefined4 *)(unaff_EDI + 0x5c) = 5;
        FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      local_50 = (char *)0x0;
      std::exception::exception((exception *)local_4c,&local_50);
      local_4c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_4c,&DAT_00e6fb20);
    }
  }
  ExceptionList = pvVar1;
  return;
}

