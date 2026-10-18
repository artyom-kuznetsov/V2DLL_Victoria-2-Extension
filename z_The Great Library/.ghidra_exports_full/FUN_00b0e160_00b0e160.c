// FUN_00b0e160 @ 00b0e160 body=[[00b0e160, 00b0e1e9]]


void FUN_00b0e160(uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (param_1 != uVar1) {
    if (((param_1 != uVar1) && (*(uint *)(in_ECX + 0x14) = param_1, uVar1 < param_1)) &&
       (*(uint *)(in_ECX + 0x18) < param_1)) {
      FUN_00ae6430(param_1);
    }
    uVar2 = uVar1;
    if (param_1 < uVar1) {
      if (param_2 != '\0') {
        FUN_00b0df00();
        return;
      }
    }
    else {
      while (uVar2 < param_1) {
        uVar3 = uVar2 + 1;
        *(uint *)(*(int *)(in_ECX + 0x10) + -8 + uVar3 * 8) =
             *(int *)(in_ECX + 0x20) * uVar2 + *(int *)(in_ECX + 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x10) + -4 + uVar3 * 8) = 0;
        uVar2 = uVar3;
      }
      FUN_00b00ba0((param_1 - uVar1) * *(int *)(in_ECX + 0x20) + *(int *)(in_ECX + 4));
    }
  }
  return;
}

