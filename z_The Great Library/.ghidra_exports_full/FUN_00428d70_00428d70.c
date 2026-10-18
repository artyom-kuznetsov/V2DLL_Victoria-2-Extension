// FUN_00428d70 @ 00428d70 body=[[00428d70, 00428e44]]


void FUN_00428d70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar3 != iVar4) {
    iVar2 = iVar3;
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(param_2 + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar4);
    if (iVar2 != iVar4) {
      if (iVar3 != iVar4) {
        do {
          if (*(int *)(iVar3 + 4) == *(int *)(param_2 + 4)) break;
          iVar3 = iVar3 + 8;
        } while (iVar3 != iVar4);
      }
      FUN_0042ba80();
    }
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 != iVar3) {
    do {
      if (*(int *)(iVar4 + 4) == *(int *)(param_2 + 4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar3);
    if (iVar4 != iVar3) goto LAB_00428df8;
  }
  FUN_004d61d0();
LAB_00428df8:
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(6);
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    uVar1 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    uVar5 = FUN_0046a4f0(*(undefined4 *)(DAT_012586f4 + 8));
    FUN_00457b00(uVar1,uVar5);
  }
  return;
}

