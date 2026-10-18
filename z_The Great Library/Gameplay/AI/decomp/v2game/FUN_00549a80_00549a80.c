// FUN_00549a80 @ 00549a80 body=[[00549a80, 00549ab3] [00549ab7, 00549acd] [00549ad1, 00549ae7]]


void FUN_00549a80(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + uVar3 * 4); puVar1 != (undefined4 *)0x0
          ; puVar1 = (undefined4 *)puVar1[1]) {
        puVar2 = (undefined4 *)*puVar1;
        if (puVar2 != (undefined4 *)0x0) {
          if (0xf < (uint)puVar2[5]) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*puVar2);
          }
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          *(undefined1 *)puVar2 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return;
}

