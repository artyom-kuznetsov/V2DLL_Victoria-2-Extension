// FUN_00aed3f0 @ 00aed3f0 body=[[00aed3f0, 00aed549]]


void FUN_00aed3f0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = in_ECX[1];
  if ((param_1 != uVar4) && (in_ECX[1] = param_1, uVar4 < param_1)) {
    if ((uint)in_ECX[2] < param_1) {
      FUN_00aed2e0(param_1);
    }
    if (uVar4 < param_1) {
      if (3 < (int)(param_1 - uVar4)) {
        iVar1 = uVar4 * 0x38;
        iVar2 = ((param_1 - uVar4) - 4 >> 2) + 1;
        uVar4 = uVar4 + iVar2 * 4;
        do {
          puVar3 = (undefined4 *)(*in_ECX + iVar1);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3f800000;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0x3f800000;
          }
          puVar3 = (undefined4 *)(iVar1 + 0x38 + *in_ECX);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3f800000;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0x3f800000;
          }
          puVar3 = (undefined4 *)(iVar1 + 0x70 + *in_ECX);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3f800000;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0x3f800000;
          }
          puVar3 = (undefined4 *)(*in_ECX + iVar1 + 0xa8);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3f800000;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0x3f800000;
          }
          iVar1 = iVar1 + 0xe0;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (uVar4 < param_1) {
        iVar1 = uVar4 * 0x38;
        iVar2 = param_1 - uVar4;
        do {
          puVar3 = (undefined4 *)(*in_ECX + iVar1);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0x3f800000;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0x3f800000;
          }
          iVar1 = iVar1 + 0x38;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

