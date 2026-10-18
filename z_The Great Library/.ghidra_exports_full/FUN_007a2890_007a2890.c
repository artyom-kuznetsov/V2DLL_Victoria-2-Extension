// FUN_007a2890 @ 007a2890 body=[[007a2890, 007a2971]]


void FUN_007a2890(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int in_ECX;
  int iVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x5c))();
  iVar4 = 0;
  if (0 < (int)(param_1[1] - *param_1 & 0xfffffffcU)) {
    do {
      iVar1 = FUN_00aae9af(0x68);
      uStack_c = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_007a0660(iVar1,*(undefined4 *)(*param_1 + iVar4 * 4),
                             *(undefined4 *)(in_ECX + 0xa8));
      }
      uStack_c = 0xffffffff;
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x10))(uVar2,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1] - *param_1 >> 2);
  }
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x6c))();
  if ((*(int *)(*(int *)(in_ECX + 0xcc) + 0x75c) == 5) && (*(char *)(in_ECX + 0xd0) != '\0')) {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x30) + 0x50);
  }
  else {
    pcVar3 = *(code **)(**(int **)(in_ECX + 0x30) + 0x54);
  }
  (*pcVar3)();
  ExceptionList = pvStack_14;
  return;
}

