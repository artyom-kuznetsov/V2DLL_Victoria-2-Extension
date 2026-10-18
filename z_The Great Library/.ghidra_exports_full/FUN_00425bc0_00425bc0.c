// FUN_00425bc0 @ 00425bc0 body=[[00425bc0, 00425c29] [00425c30, 00425d4c] [00425d50, 00425db9] [00425dc0, 00425e18]]


void FUN_00425bc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 *in_EDX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x18) == *(int *)(param_1 + 4)) {
    *(undefined4 *)(in_ECX + 0x14) = *in_EDX;
    *(undefined4 *)(in_ECX + 0x18) = in_EDX[1];
  }
  if (*(int *)(in_ECX + 0x20) == *(int *)(param_1 + 4)) {
    *(undefined4 *)(in_ECX + 0x1c) = *in_EDX;
    *(undefined4 *)(in_ECX + 0x20) = in_EDX[1];
  }
  if (*(int *)(in_ECX + 0x28) == *(int *)(param_1 + 4)) {
    *(undefined4 *)(in_ECX + 0x24) = *in_EDX;
    *(undefined4 *)(in_ECX + 0x28) = in_EDX[1];
  }
  if (*(int *)(in_ECX + 0x60) == *(int *)(param_1 + 4)) {
    *(undefined4 *)(in_ECX + 0x5c) = *in_EDX;
    *(undefined4 *)(in_ECX + 0x60) = in_EDX[1];
  }
  iVar3 = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 3;
  local_8 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x4c) + local_8 * 8);
      if (puVar1[1] == *(int *)(param_1 + 4)) {
        *puVar1 = *in_EDX;
        puVar1[1] = in_EDX[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  iVar3 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 3;
  local_8 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x2c) + local_8 * 8);
      if (puVar1[1] == *(int *)(param_1 + 4)) {
        *puVar1 = *in_EDX;
        puVar1[1] = in_EDX[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  iVar3 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 3;
  local_8 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x3c) + local_8 * 8);
      if (puVar1[1] == *(int *)(param_1 + 4)) {
        *puVar1 = *in_EDX;
        puVar1[1] = in_EDX[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  iVar3 = *(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) >> 3;
  local_8 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x68) + local_8 * 8);
      if (puVar1[1] == *(int *)(param_1 + 4)) {
        *puVar1 = *in_EDX;
        puVar1[1] = in_EDX[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  iVar3 = *(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78) >> 3;
  local_8 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x78) + local_8 * 8);
      if (puVar1[1] == *(int *)(param_1 + 4)) {
        *puVar1 = *in_EDX;
        puVar1[1] = in_EDX[1];
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  local_8 = *(int *)(in_ECX + 0x8c) - *(int *)(in_ECX + 0x88) >> 6;
  if (0 < local_8) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(in_ECX + 0x88) + iVar3;
      if (*(int *)(*(int *)(in_ECX + 0x88) + 0x1c + iVar3) == *(int *)(param_1 + 4)) {
        uVar2 = *in_EDX;
        *(undefined4 *)(iVar4 + 0x1c) = in_EDX[1];
        *(undefined4 *)(iVar4 + 0x18) = uVar2;
      }
      if (*(int *)(iVar4 + 0x24) == *(int *)(param_1 + 4)) {
        uVar2 = *in_EDX;
        *(undefined4 *)(iVar4 + 0x24) = in_EDX[1];
        *(undefined4 *)(iVar4 + 0x20) = uVar2;
      }
      if (*(int *)(iVar4 + 0x14) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(iVar4 + 0x10) = *in_EDX;
        *(undefined4 *)(iVar4 + 0x14) = in_EDX[1];
      }
      iVar3 = iVar3 + 0x40;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  local_8 = *(int *)(in_ECX + 0x9c) - *(int *)(in_ECX + 0x98) >> 6;
  if (0 < local_8) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(in_ECX + 0x88) + iVar3;
      if (*(int *)(*(int *)(in_ECX + 0x88) + 0x1c + iVar3) == *(int *)(param_1 + 4)) {
        uVar2 = *in_EDX;
        *(undefined4 *)(iVar4 + 0x1c) = in_EDX[1];
        *(undefined4 *)(iVar4 + 0x18) = uVar2;
      }
      if (*(int *)(iVar4 + 0x24) == *(int *)(param_1 + 4)) {
        uVar2 = *in_EDX;
        *(undefined4 *)(iVar4 + 0x24) = in_EDX[1];
        *(undefined4 *)(iVar4 + 0x20) = uVar2;
      }
      if (*(int *)(iVar4 + 0x14) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(iVar4 + 0x10) = *in_EDX;
        *(undefined4 *)(iVar4 + 0x14) = in_EDX[1];
      }
      iVar3 = iVar3 + 0x40;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

