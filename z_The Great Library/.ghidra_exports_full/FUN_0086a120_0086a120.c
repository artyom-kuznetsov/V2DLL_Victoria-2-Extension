// FUN_0086a120 @ 0086a120 body=[[0086a120, 0086a1bb]]


void FUN_0086a120(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b427c8;
  pvStack_10 = ExceptionList;
  iVar1 = *param_2;
  ExceptionList = &pvStack_10;
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  uVar3 = __alldiv((longlong)iVar2 * (longlong)iVar1,1000);
  puVar4 = (undefined4 *)FUN_00aae9af();
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = uVar3;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

