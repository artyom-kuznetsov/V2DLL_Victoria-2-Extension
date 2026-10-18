// FUN_008697b0 @ 008697b0 body=[[008697b0, 0086980d]]


void FUN_008697b0(undefined4 param_1,int *param_2,int *param_3)

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
  iVar1 = *param_3;
  iVar2 = *param_2;
  ExceptionList = &pvStack_10;
  piVar3 = (int *)FUN_00aae9af();
  if (piVar3 != (int *)0x0) {
    *piVar3 = iVar2 - iVar1;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

