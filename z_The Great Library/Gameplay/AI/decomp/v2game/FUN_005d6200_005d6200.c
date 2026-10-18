// FUN_005d6200 @ 005d6200 body=[[005d6200, 005d62a6]]


void FUN_005d6200(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 < 0x434) {
    if (param_2 == 0x433) {
      *(bool *)(in_ECX + 0x1a4) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x6a) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x1a0) = uVar1;
      return;
    }
    if (param_2 == 0x432) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x19c) = uVar1;
      return;
    }
  }
  else if (param_2 == 0x56a) {
    uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x1a8) = uVar1;
    return;
  }
  FUN_005c6a30(param_1,param_2);
  return;
}

