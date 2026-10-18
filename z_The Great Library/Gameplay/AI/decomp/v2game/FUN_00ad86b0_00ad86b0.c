// FUN_00ad86b0 @ 00ad86b0 body=[[00ad86b0, 00ad86dc]]


undefined4 FUN_00ad86b0(int *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (in_ECX[1] != 0) {
    piVar2 = (int *)*in_ECX;
    do {
      if (*piVar2 == *param_1) goto LAB_00ad86d1;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)in_ECX[1]);
  }
  uVar1 = 0xffffffff;
LAB_00ad86d1:
  return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0xffffffff);
}

