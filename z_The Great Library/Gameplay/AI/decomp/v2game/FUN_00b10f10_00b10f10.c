// FUN_00b10f10 @ 00b10f10 body=[[00b10f10, 00b110a9]]


void FUN_00b10f10(uint param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = in_ECX[1];
  if (param_1 != uVar4) {
    if (param_1 <= uVar4) {
      if (param_1 < uVar4) {
        iVar2 = param_1 * 0x24;
        uVar4 = param_1;
        do {
          *(undefined1 *)(*in_ECX + 0x20 + iVar2) = 0;
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 0x24;
        } while (uVar4 < (uint)in_ECX[1]);
      }
      in_ECX[1] = param_1;
      return;
    }
    in_ECX[1] = param_1;
    if ((uint)in_ECX[2] < param_1) {
      FUN_00b00440(param_1);
    }
    if (uVar4 < param_1) {
      if (3 < (int)(param_1 - uVar4)) {
        iVar2 = uVar4 * 0x24;
        iVar3 = ((param_1 - uVar4) - 4 >> 2) + 1;
        uVar4 = uVar4 + iVar3 * 4;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar2);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)(puVar1 + 8) = 0;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0x3f800000;
            puVar1[6] = 0x3f800000;
            puVar1[7] = 0;
          }
          puVar1 = (undefined4 *)(iVar2 + 0x24 + *in_ECX);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)(puVar1 + 8) = 0;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0x3f800000;
            puVar1[6] = 0x3f800000;
            puVar1[7] = 0;
          }
          puVar1 = (undefined4 *)(iVar2 + 0x48 + *in_ECX);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)(puVar1 + 8) = 0;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0x3f800000;
            puVar1[6] = 0x3f800000;
            puVar1[7] = 0;
          }
          puVar1 = (undefined4 *)(*in_ECX + iVar2 + 0x6c);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)(puVar1 + 8) = 0;
            puVar1[2] = 0x3f800000;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0x3f800000;
            puVar1[6] = 0x3f800000;
            puVar1[7] = 0;
          }
          iVar2 = iVar2 + 0x90;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (uVar4 < param_1) {
        iVar2 = uVar4 * 0x24;
        iVar3 = param_1 - uVar4;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar2);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            puVar1[2] = 0x3f800000;
            *puVar1 = 0xffffffff;
            puVar1[5] = 0x3f800000;
            *(undefined1 *)(puVar1 + 8) = 0;
            puVar1[6] = 0x3f800000;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
          }
          iVar2 = iVar2 + 0x24;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

