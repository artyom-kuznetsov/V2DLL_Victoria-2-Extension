// FUN_00587b20 @ 00587b20 body=[[00587b20, 00587c03]]


void FUN_00587b20(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4);
    if (*(char *)(in_ECX + 0x40) == '\0') {
      FUN_0053f400(*(undefined4 *)(in_ECX + 0x3c),*(undefined1 *)(in_ECX + 0x42));
    }
    else {
      uVar1 = *(undefined1 *)(in_ECX + 0x42);
      iVar4 = FUN_0053f3b0(*(undefined4 *)(in_ECX + 0x3c),uVar1);
      if (iVar4 == 0) {
        FUN_0053f2e0(uVar2,uVar1,*(undefined4 *)(in_ECX + 0x3c),*(undefined1 *)(in_ECX + 0x41));
      }
      else {
        *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(in_ECX + 0x41);
        FUN_0053f980(uVar2);
      }
    }
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(in_ECX + 0x48)) {
      piVar3 = *(int **)(DAT_012588e8 + 0xb24);
      iVar4 = (**(code **)(*piVar3 + 0x13c))();
      if (iVar4 == 8) {
        (**(code **)(*piVar3 + 0xdc))();
      }
      iVar4 = (**(code **)(*piVar3 + 0x124))();
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*piVar3 + 0x124))(), *(char *)(*(int *)(iVar4 + 0x20) + 0x67) != '\0'
         )) {
        (**(code **)(*piVar3 + 0x124))();
        FUN_0073ef10();
      }
    }
  }
  return;
}

