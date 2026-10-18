// FUN_0092eec0 @ 0092eec0 body=[[0092eec0, 0092efe0]]


int FUN_0092eec0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_EDI;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_3c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba304b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131acac == 0) {
    ExceptionList = &local_10;
    local_18 = FUN_00aae9af(0x20);
    local_8 = 0;
    if (local_18 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0090cca0();
    }
    local_8 = 0xffffffff;
    FUN_0090d9d0(uVar3);
  }
  piVar1 = *(int **)(DAT_0131acac + 0xc);
  if (unaff_EDI < *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc) >> 2) {
    piVar5 = (int *)piVar1[unaff_EDI];
  }
  else {
    piVar5 = (int *)*piVar1;
  }
  piVar2 = *(int **)(param_1 + 0x50);
  do {
    if (piVar2 == (int *)0x0) {
      iVar4 = *(int *)(DAT_0131acac + 0x10) - *(int *)(DAT_0131acac + 0xc);
      if (unaff_EDI < iVar4 >> 2) {
        iVar6 = piVar1[unaff_EDI];
      }
      else {
        iVar6 = *piVar1;
      }
      if (*(char *)(iVar6 + 0x132) == '\0') {
        ExceptionList = local_10;
        return (uint)(uint3)(iVar4 >> 10) << 8;
      }
      break;
    }
    iVar4 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (*(int *)(iVar4 + 0x24) != unaff_EDI);
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_a0 = *param_2;
  local_9c = param_2[1];
  local_3c = local_a8;
  local_58 = *param_3;
  local_54 = param_3[1];
  iVar4 = (**(code **)(*piVar5 + 0x20))(local_60);
  ExceptionList = local_10;
  return iVar4;
}

