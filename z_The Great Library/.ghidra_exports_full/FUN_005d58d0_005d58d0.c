// FUN_005d58d0 @ 005d58d0 body=[[005d58d0, 005d59da]]


void FUN_005d58d0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10c) != 0) {
    iVar3 = FUN_005cabe0(in_ECX);
    iVar1 = *(int *)(in_ECX + 0x1a0);
    *(int *)(in_ECX + 0x1a0) = iVar3;
    if (iVar3 != iVar1) {
      *(undefined1 *)(in_ECX + 0xbc) = 1;
    }
    *(undefined1 *)(*(int *)(in_ECX + 0x10c) + 0x144) = param_2;
    if ((*(int *)(in_ECX + 0xc4) == *(int *)(DAT_012588e8 + 0xb60)) ||
       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc4) * 4
                                           ) + 0xbe8) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x20)
        != 0)) {
      uVar4 = 2;
    }
    else {
      if (DAT_00f092fb == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0xdc) + 0x5c) + 0x360) < 1;
      }
      uVar4 = bVar2 - 1 & 2;
    }
    if (uVar4 != *(uint *)(in_ECX + 0x18c)) {
      *(uint *)(in_ECX + 0x18c) = uVar4;
      *(undefined1 *)(in_ECX + 0xbc) = 1;
    }
    (**(code **)(**(int **)(in_ECX + 0x10c) + 0x90))((DAT_013f0834 * 3.1415927) / 180.0);
    return;
  }
  return;
}

