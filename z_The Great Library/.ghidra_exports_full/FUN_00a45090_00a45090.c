// FUN_00a45090 @ 00a45090 body=[[00a45090, 00a4512a] [00a4512e, 00a45143]]


int FUN_00a45090(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  int local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d728;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_00462500(param_1);
  if (iVar2 != *(int *)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') goto LAB_00a4512e;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_1c = 0;
  local_c = 0;
  uVar3 = FUN_00a45300(local_38);
  FUN_00a45150(iVar2,uVar3);
  iVar2 = local_3c;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
LAB_00a4512e:
  ExceptionList = local_14;
  return iVar2 + 0x28;
}

