// FUN_00aeb000 @ 00aeb000 body=[[00aeb000, 00aeb039]]


undefined4 FUN_00aeb000(int param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = (**(code **)(**(int **)(*in_ECX + uVar3 * 4) + 0x10))();
      if (iVar2 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

