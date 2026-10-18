// FUN_008699f0 @ 008699f0 body=[[008699f0, 00869a7c]]


void FUN_008699f0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ea38;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  iVar1 = *param_2;
  piVar3 = (int *)FUN_00aae9af(4);
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar1 - iVar2;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

