// FUN_008f9c70 @ 008f9c70 body=[[008f9c70, 008f9cf3]]


int FUN_008f9c70(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  undefined4 local_c;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_c = *(int *)(in_ECX + 0x20);
    }
    else {
      local_c = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x142c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (iVar1 == local_c)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

