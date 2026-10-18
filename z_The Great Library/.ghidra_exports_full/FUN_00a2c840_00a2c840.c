// FUN_00a2c840 @ 00a2c840 body=[[00a2c840, 00a2c8d4] [00a2c8d8, 00a2c8ec]]


int FUN_00a2c840(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00a2cad0(param_1);
  if (iVar2 != *(int *)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') goto LAB_00a2c8d8;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  uVar3 = FUN_00a2d530(local_34);
  FUN_00a2d060(iVar2,uVar3);
  iVar2 = param_1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
LAB_00a2c8d8:
  ExceptionList = local_10;
  return iVar2 + 0x28;
}

