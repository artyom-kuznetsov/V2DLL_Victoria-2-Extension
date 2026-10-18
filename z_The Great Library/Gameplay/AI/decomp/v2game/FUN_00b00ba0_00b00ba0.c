// FUN_00b00ba0 @ 00b00ba0 body=[[00b00ba0, 00b00c68]]


void FUN_00b00ba0(uint param_1)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = in_ECX[1];
  if ((param_1 != uVar3) && (in_ECX[1] = param_1, uVar3 < param_1)) {
    if ((uint)in_ECX[2] < param_1) {
      FUN_00ae6430(param_1);
    }
    if (uVar3 < param_1) {
      if (3 < (int)(param_1 - uVar3)) {
        do {
          iVar1 = uVar3 * 8;
          puVar2 = (undefined4 *)(*in_ECX + iVar1);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            *(undefined2 *)(puVar2 + 1) = 0;
            *(undefined2 *)((int)puVar2 + 6) = 0;
          }
          puVar2 = (undefined4 *)(iVar1 + 8 + *in_ECX);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            *(undefined2 *)(puVar2 + 1) = 0;
            *(undefined2 *)((int)puVar2 + 6) = 0;
          }
          puVar2 = (undefined4 *)(iVar1 + 0x10 + *in_ECX);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            *(undefined2 *)(puVar2 + 1) = 0;
            *(undefined2 *)((int)puVar2 + 6) = 0;
          }
          puVar2 = (undefined4 *)(*in_ECX + iVar1 + 0x18);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            *(undefined2 *)(puVar2 + 1) = 0;
            *(undefined2 *)((int)puVar2 + 6) = 0;
          }
          uVar3 = uVar3 + 4;
        } while (uVar3 < param_1 - 3);
      }
      for (; uVar3 < param_1; uVar3 = uVar3 + 1) {
        puVar2 = (undefined4 *)(*in_ECX + uVar3 * 8);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *(undefined2 *)((int)puVar2 + 6) = 0;
        }
      }
    }
  }
  return;
}

