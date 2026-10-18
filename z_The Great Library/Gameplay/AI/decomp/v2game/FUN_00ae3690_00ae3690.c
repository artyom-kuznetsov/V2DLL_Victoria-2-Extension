// FUN_00ae3690 @ 00ae3690 body=[[00ae3690, 00ae36d1]]


undefined4 FUN_00ae3690(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    piVar2 = (int *)*in_ECX;
    while (param_1 != *piVar2) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if ((uint)in_ECX[1] <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      FUN_00ae3510(uVar1,param_2);
      return 1;
    }
  }
  return 0;
}

