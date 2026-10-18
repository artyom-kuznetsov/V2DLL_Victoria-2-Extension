// FUN_009019b0 @ 009019b0 body=[[009019b0, 00901ab2]]


undefined4 FUN_009019b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  int in_ECX;
  undefined8 uVar5;
  uint local_18;
  int iStack_14;
  
  local_18 = 0;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar5 = 0;
        if (*(int *)(param_1 + 0xc) == 0) goto LAB_00901a8b;
        puVar4 = (uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                         0x12e8);
      }
      else {
        puVar4 = (uint *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                           *(int *)(param_1 + 0x18) * 4) + 0x188) + 200);
      }
    }
    else {
      puVar4 = (uint *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                       0x1a8);
    }
  }
  else {
    puVar4 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x1a8);
  }
  uVar5 = 0;
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      local_18 = 0;
      uVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(puVar4[0x14] + *(int *)(*(int *)(in_ECX + 0x28) + 0x28) * 4);
      uVar5 = __alldiv(uVar2 << 0x1e,uVar2 >> 2,uVar1 << 0xf,uVar1 >> 0x11);
      local_18 = (uint)uVar5;
    }
  }
LAB_00901a8b:
  iStack_14 = (int)((ulonglong)uVar5 >> 0x20);
  if ((*(int *)(in_ECX + 0x24) <= iStack_14) &&
     ((*(int *)(in_ECX + 0x24) < iStack_14 || (*(uint *)(in_ECX + 0x20) <= local_18)))) {
    return 1;
  }
  return 0;
}

