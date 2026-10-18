// FUN_00b0e1f0 @ 00b0e1f0 body=[[00b0e1f0, 00b0e284]]


int FUN_00b0e1f0(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  
  piVar1 = (int *)(in_ECX[4] + param_1 * 8);
  uVar4 = piVar1[1] + *piVar1;
  if ((uint)in_ECX[1] <= uVar4) {
    FUN_00b00ba0(uVar4 + 1);
  }
  if (param_1 < in_ECX[5] - 1U) {
    uVar2 = *(uint *)(in_ECX[4] + 8 + param_1 * 8);
joined_r0x00b0e24d:
    if (uVar4 < uVar2) {
      iVar3 = *in_ECX;
      *(undefined4 *)(iVar3 + uVar4 * 8) = *param_2;
      *(undefined4 *)(iVar3 + 4 + uVar4 * 8) = param_2[1];
      goto LAB_00b0e237;
    }
  }
  else if (param_1 == in_ECX[5] - 1U) {
    uVar2 = in_ECX[1];
    goto joined_r0x00b0e24d;
  }
  FUN_00b0e100(uVar4,param_2);
  uVar2 = in_ECX[5];
  uVar4 = param_1 + 1;
  if (uVar4 < uVar2) {
    do {
      piVar1 = (int *)(in_ECX[4] + uVar4 * 8);
      *piVar1 = *piVar1 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    iVar3 = in_ECX[4];
    piVar1 = (int *)(iVar3 + 4 + param_1 * 8);
    *piVar1 = *piVar1 + 1;
    return iVar3 + 4 + param_1 * 8;
  }
LAB_00b0e237:
  iVar3 = in_ECX[4];
  piVar1 = (int *)(iVar3 + 4 + param_1 * 8);
  *piVar1 = *piVar1 + 1;
  return iVar3 + 4 + param_1 * 8;
}

