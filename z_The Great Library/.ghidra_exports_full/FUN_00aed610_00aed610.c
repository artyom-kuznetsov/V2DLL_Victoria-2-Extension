// FUN_00aed610 @ 00aed610 body=[[00aed610, 00aed62d] [00aed630, 00aed658]]


undefined4 FUN_00aed610(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == (int *)0x0) {
    return 1;
  }
  uVar1 = param_2[1];
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *param_2;
      iVar3 = (**(code **)(*param_1 + 4))();
      if (iVar3 == *(int *)(iVar2 + uVar4 * 4)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 1;
}

