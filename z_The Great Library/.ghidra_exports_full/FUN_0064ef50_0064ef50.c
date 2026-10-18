// FUN_0064ef50 @ 0064ef50 body=[[0064ef50, 0064f034]]


void FUN_0064ef50(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar3 = FUN_00aae9af(0xb0);
  local_c = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00648cc0(iVar3,in_ECX);
  }
  local_c = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xb54) = uVar4;
  iVar3 = *(int *)(in_ECX + 0x1d18);
  *(undefined1 *)(iVar3 + 0xe1) = 1;
  if (*(char *)(*(int *)(iVar3 + 0x38) + 0x44) != '\0') {
    DAT_013f0924 = DAT_013f0924 + -1;
  }
  for (piVar5 = *(int **)(*(int *)(iVar3 + 0x38) + 0x34);
      (piVar5 != (int *)0x0 && (*piVar5 != iVar3 + 0x40)); piVar5 = (int *)piVar5[2]) {
  }
  FUN_005f2ae0(piVar5);
  iVar3 = DAT_012588e8;
  if (*(char *)(DAT_012588e8 + 0xd10) != '\0') {
    piVar5 = *(int **)(DAT_012588e8 + 0xadc);
    puVar1 = (uint *)(DAT_012588e8 + 0xadc);
    while (((int *)*puVar1 <= piVar5 && (piVar5 < *(int **)(iVar3 + 0xae0)))) {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      if (*(int *)(iVar2 + 0x208) != 0) {
        FUN_0081e9e0();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

