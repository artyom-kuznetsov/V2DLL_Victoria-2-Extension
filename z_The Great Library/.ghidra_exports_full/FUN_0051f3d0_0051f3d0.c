// FUN_0051f3d0 @ 0051f3d0 body=[[0051f3d0, 0051f4cb]]


int FUN_0051f3d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  iVar2 = *(int *)(in_EDX + 0x14c);
  iVar1 = *(int *)(in_EDX + 0x148);
  if (iVar1 != iVar2) {
    do {
      if (*(int *)(iVar1 + 4) == *(int *)(param_1 + 0x20)) break;
      iVar1 = iVar1 + 8;
    } while (iVar1 != iVar2);
    if (iVar1 != iVar2) goto LAB_0051f44b;
  }
  if (*(int *)(in_EDX + 0xe8) != param_2) {
    return *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xf0) / 1000;
  }
LAB_0051f44b:
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004dada0();
    }
    FUN_004dc340(uVar3);
  }
  param_3 = param_3 + -1;
  iVar2 = *(int *)(DAT_0125ce80 + 0x30);
  if ((-1 < param_3) && (param_3 < *(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200) >> 2)) {
    ExceptionList = local_10;
    return *(int *)(*(int *)(iVar2 + 200) + param_3 * 4);
  }
  ExceptionList = local_10;
  return 0;
}

