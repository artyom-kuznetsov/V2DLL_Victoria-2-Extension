// FUN_007a4070 @ 007a4070 body=[[007a4070, 007a4181]]


void FUN_007a4070(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4b216;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x5c))();
  iVar1 = *param_1;
  iStack_24 = 0;
  if (0 < (int)(param_1[1] - iVar1 & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(iStack_24 * 4 + iVar1) + 0x20);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        iVar1 = FUN_00aae9af(0x68);
        iStack_c = 0;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = FUN_00aae9af(0xa0);
          iStack_c._0_1_ = 1;
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00a16220(iVar2);
          }
          iStack_c = (uint)iStack_c._1_3_ << 8;
          uVar3 = FUN_007a3ab0(iVar1,uVar3,*(undefined4 *)(in_ECX + 0x40),
                               *(undefined4 *)(in_ECX + 0xf8));
        }
        iStack_c = 0xffffffff;
        (**(code **)(**(int **)(in_ECX + 0x38) + 0x10))(uVar3,1);
      }
      iVar1 = *param_1;
      iStack_24 = iStack_24 + 1;
    } while (iStack_24 < param_1[1] - iVar1 >> 2);
  }
  (**(code **)(**(int **)(in_ECX + 0x38) + 0x6c))();
  ExceptionList = pvStack_14;
  return;
}

