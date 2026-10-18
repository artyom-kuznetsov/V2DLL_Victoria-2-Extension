// FUN_008fa670 @ 008fa670 body=[[008fa670, 008fa70e]]


undefined4 FUN_008fa670(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 0xbc0) == *(char *)(in_ECX + 0x1c));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 0x80) == *(char *)(in_ECX + 0x1c));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(*(int *)(iVar1 + 0x188) + 0x80) == *(char *)(in_ECX + 0x1c));
  }
  return 0;
}

