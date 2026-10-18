// FUN_008eaa60 @ 008eaa60 body=[[008eaa60, 008eab33]]


uint FUN_008eaa60(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(in_ECX + 0x1c);
  uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008eaad7;
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x30) * 4);
  }
  else {
    iVar4 = FUN_008a8dc0();
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 4) * 4);
  }
  uVar5 = *(undefined8 *)(iVar4 + 0x198);
LAB_008eaad7:
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (*(int *)(param_1 + 0xc) == 0) {
    return (uint)uVar5 & 0xffffff00;
  }
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar3 = *(int *)(iVar2 + 0x19c);
  if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (*(uint *)(iVar2 + 0x198) < (uint)uVar5)))) {
    return 0;
  }
  return 1;
}

