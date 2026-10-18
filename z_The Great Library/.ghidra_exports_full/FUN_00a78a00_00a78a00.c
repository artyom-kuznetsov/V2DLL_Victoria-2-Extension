// FUN_00a78a00 @ 00a78a00 body=[[00a78a00, 00a78aa1] [00a78aa5, 00a78abb]]


int FUN_00a78a00(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar1 = DAT_01258b48;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d728;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar3 = FUN_00462500(param_1);
  if (iVar3 != *(int *)(iVar1 + 4)) {
    cVar2 = FUN_0098ab20();
    if (cVar2 == '\0') goto LAB_00a78aa5;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_1c = 0;
  local_c = 0;
  uVar4 = FUN_00a45300(local_38);
  FUN_00a45150(iVar3,uVar4);
  iVar3 = local_3c;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
LAB_00a78aa5:
  ExceptionList = local_14;
  return iVar3 + 0x28;
}

