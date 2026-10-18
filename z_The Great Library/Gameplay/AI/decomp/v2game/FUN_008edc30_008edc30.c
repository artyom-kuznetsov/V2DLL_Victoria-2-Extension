// FUN_008edc30 @ 008edc30 body=[[008edc30, 008edc6d] [008edc70, 008edd0f]]


undefined4 FUN_008edc30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  puVar4 = *(undefined4 **)(iVar1 + 0xda8);
  do {
    if ((puVar4 < *(undefined4 **)(iVar1 + 0xda8)) || (*(undefined4 **)(iVar1 + 0xdac) <= puVar4)) {
      return 0;
    }
    local_18 = *puVar4;
    local_14 = puVar4[1];
    local_10 = *(undefined4 *)(param_1 + 8);
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(param_1 + 0xc) * 4) + 0xbe8) + local_14 * 4)
                    + 0x34);
    puVar4 = puVar4 + 2;
  } while ((iVar3 == 0) ||
          (((*(int *)(*(int *)(iVar3 + 0x2c) + 4) != local_14 &&
            (*(int *)(*(int *)(iVar3 + 0x3c) + 4) != local_14)) ||
           (iVar2 = *(int *)(in_ECX + 0x1c),
           iVar3 = FUN_00936fc0(iVar3,(undefined4 *)(param_1 + 8),&local_18,0), iVar3 < iVar2 / 1000
           ))));
  return 1;
}

