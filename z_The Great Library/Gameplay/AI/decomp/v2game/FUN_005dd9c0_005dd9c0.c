// FUN_005dd9c0 @ 005dd9c0 body=[[005dd9c0, 005dda72]]


void FUN_005dd9c0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint local_10;
  undefined4 local_c;
  
  FUN_009a2520(param_1);
  local_10 = *(uint *)(in_ECX + 0x68);
  local_c = *(undefined4 *)(in_ECX + 0x6c);
  iVar1 = DAT_01258a94;
  if (local_10 < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 100) = iVar1;
  if (iVar1 != 0) {
    FUN_009a0940(param_1);
    local_10 = *(uint *)(in_ECX + 0x68);
    local_c = *(undefined4 *)(in_ECX + 0x6c);
    FUN_0099f020(&local_10);
    FUN_004013e0(param_1);
  }
  FUN_009a0940(param_1);
  local_10 = *(uint *)(in_ECX + 0x40);
  local_c = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_10);
  FUN_004013e0(param_1);
  return;
}

