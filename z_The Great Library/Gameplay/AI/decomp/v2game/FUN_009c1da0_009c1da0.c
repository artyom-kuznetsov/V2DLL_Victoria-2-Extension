// FUN_009c1da0 @ 009c1da0 body=[[009c1da0, 009c1ddc]]


void FUN_009c1da0(int param_1,code *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      for (puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + uVar2 * 4); puVar1 != (undefined4 *)0x0
          ; puVar1 = (undefined4 *)puVar1[1]) {
        (*param_2)(*puVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}

