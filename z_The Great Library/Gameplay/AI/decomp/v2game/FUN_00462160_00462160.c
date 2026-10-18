// FUN_00462160 @ 00462160 body=[[00462160, 004621ec] [004621f0, 00462204]]


int FUN_00462160(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00462500(param_1);
  if (iVar2 != *(int *)(unaff_EDI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') goto LAB_004621f0;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  uVar3 = FUN_00a45300(local_34);
  FUN_00a45150(iVar2,uVar3);
  iVar2 = param_1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
LAB_004621f0:
  ExceptionList = local_10;
  return iVar2 + 0x28;
}

