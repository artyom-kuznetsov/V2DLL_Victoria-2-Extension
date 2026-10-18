// FUN_0059bf00 @ 0059bf00 body=[[0059bf00, 0059bfab]]


void FUN_0059bf00(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (param_2 < 0x2ca) {
    if (param_2 == 0x2c9) {
      iVar2 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + iVar2 * 4);
      return;
    }
    if (param_2 == 0x6c) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x20) = uVar1;
      return;
    }
    if (param_2 == 0x79) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x1c) = uVar1;
      return;
    }
  }
  else if (param_2 == 0x34f) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(param_1);
  }
  else if (param_2 == 0x350) {
    (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))(param_1);
    return;
  }
  return;
}

