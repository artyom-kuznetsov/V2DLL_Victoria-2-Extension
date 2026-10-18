// FUN_004a0c90 @ 004a0c90 body=[[004a0c90, 004a0cb9] [004a0cc0, 004a0d58]]


/* WARNING: Removing unreachable block (ram,0x004a0cee) */

undefined4 FUN_004a0c90(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  param_2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x224c) - *(int *)(param_1 + 0x2248) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x2248) + param_2 * 4) != 0) {
        iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2248) + param_2 * 4) + 0x2c))();
        uVar1 = *(uint *)(iVar3 + 0x10);
        uVar2 = *(uint *)(iVar4 + 0x10);
        uVar5 = uVar2;
        if (uVar1 <= uVar2) {
          uVar5 = uVar1;
        }
        iVar4 = FUN_00414bd0(uVar5);
        if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
          return *(undefined4 *)(*(int *)(param_1 + 0x2248) + param_2 * 4);
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x224c) - *(int *)(param_1 + 0x2248) >> 2);
  }
  return 0;
}

