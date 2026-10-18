// FUN_00446760 @ 00446760 body=[[00446760, 004467cc] [004467d0, 004467ea]]


void FUN_00446760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  int unaff_ESI;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [5];
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43788;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(unaff_ESI + 8) = param_1;
  *(undefined4 *)(unaff_ESI + 0xc) = in_ECX;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = in_EDX;
  FUN_0072d4e0(&local_3c,param_2);
  local_8 = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = local_3c;
  *(undefined4 *)(unaff_ESI + 0x1c) = local_34;
  *(undefined4 *)(unaff_ESI + 0x18) = local_38;
  FUN_00408ed0(local_30,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *(undefined4 *)(unaff_ESI + 0x40) = param_3;
  *(undefined2 *)(unaff_ESI + 0x44) = 0;
  ExceptionList = local_10;
  return;
}

