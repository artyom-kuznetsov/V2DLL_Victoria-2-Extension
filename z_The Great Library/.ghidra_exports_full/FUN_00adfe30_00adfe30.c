// FUN_00adfe30 @ 00adfe30 body=[[00adfe30, 00adff13]]


void FUN_00adfe30(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  
  uVar2 = in_ECX[1];
  if ((param_1 != uVar2) && (in_ECX[1] = param_1, uVar2 < param_1)) {
    if ((uint)in_ECX[2] < param_1) {
      FUN_00adfdb0(param_1);
    }
    if (uVar2 < param_1) {
      if (3 < (int)(param_1 - uVar2)) {
        iVar3 = uVar2 * 0xc;
        iVar4 = ((param_1 - uVar2) - 4 >> 2) + 1;
        uVar2 = uVar2 + iVar4 * 4;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar3);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
            puVar1[1] = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
          }
          puVar1 = (undefined4 *)(iVar3 + 0xc + *in_ECX);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
            puVar1[1] = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
          }
          puVar1 = (undefined4 *)(iVar3 + 0x18 + *in_ECX);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
            puVar1[1] = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
          }
          puVar1 = (undefined4 *)(*in_ECX + iVar3 + 0x24);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0xffffffff;
            puVar1[1] = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
          }
          iVar3 = iVar3 + 0x30;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (uVar2 < param_1) {
        iVar3 = uVar2 * 0xc;
        iVar4 = param_1 - uVar2;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar3);
          if (puVar1 != (undefined4 *)0x0) {
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)(puVar1 + 2) = 0;
          }
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

