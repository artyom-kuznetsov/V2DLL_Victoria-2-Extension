// FUN_008bf580 @ 008bf580 body=[[008bf580, 008bf613]]


undefined4 FUN_008bf580(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008bf5e2;
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x30) * 4);
  }
  else {
    iVar2 = FUN_008a8dc0();
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4);
  }
  iVar2 = *(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) >> 2;
LAB_008bf5e2:
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),
                  iVar2 <= *(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) >> 2);
}

