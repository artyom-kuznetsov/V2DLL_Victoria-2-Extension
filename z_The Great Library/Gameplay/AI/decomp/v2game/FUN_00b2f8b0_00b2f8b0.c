// FUN_00b2f8b0 @ 00b2f8b0 body=[[00b2f8b0, 00b2f95e]]


void FUN_00b2f8b0(undefined4 *param_1,code *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  puVar1 = param_1;
  uVar2 = 0;
  if (param_1[4] != 0) {
    param_1 = (undefined4 *)0x0;
    do {
      FUN_00b2f6f0(puVar1[5] + (int)param_1,param_2);
      param_1 = (undefined4 *)((int)param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)puVar1[4]);
  }
  local_8 = 0;
  if (puVar1[6] != 0) {
    param_1 = (undefined4 *)0x0;
    do {
      iVar3 = puVar1[7] + (int)param_1;
      (*param_2)(*(undefined4 *)(iVar3 + 0x14));
      param_1 = (undefined4 *)((int)param_1 + 0x20);
      local_8 = local_8 + 1;
      *(undefined4 *)(iVar3 + 0x18) = 0x100;
      *(undefined1 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
    } while (local_8 < (uint)puVar1[6]);
  }
  (*param_2)(puVar1[1]);
  (*param_2)(puVar1[2]);
  (*param_2)(puVar1[3]);
  (*param_2)(puVar1[5]);
  (*param_2)(puVar1[7]);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}

