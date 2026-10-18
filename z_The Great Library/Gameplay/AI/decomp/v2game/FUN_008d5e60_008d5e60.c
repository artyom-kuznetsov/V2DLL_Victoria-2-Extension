// FUN_008d5e60 @ 008d5e60 body=[[008d5e60, 008d5ee1]]


int FUN_008d5e60(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  undefined4 local_8;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_8 = *(int *)(in_ECX + 0x20);
    }
    else {
      local_8 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xbe8) + local_8 * 4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((*(int *)(iVar1 + 0x34) == 0) && (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar1 + 0x6c))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

