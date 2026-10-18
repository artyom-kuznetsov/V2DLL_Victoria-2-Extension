// FUN_005de3d0 @ 005de3d0 body=[[005de3d0, 005de4a5]]


void FUN_005de3d0(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  uint local_118;
  undefined4 local_114;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a2520(param_1);
  cVar1 = *(char *)(in_ECX + 100);
  FUN_009a0940(param_1);
  local_10c = 0xe;
  puVar2 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00dfbbd4;
  }
  _sprintf(local_108,"%s",puVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_118 = *(uint *)(in_ECX + 0x40);
  local_114 = *(undefined4 *)(in_ECX + 0x44);
  iVar3 = DAT_01258a94;
  if (local_118 < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x3c) = iVar3;
  if (iVar3 != 0) {
    FUN_009a0940(param_1);
    local_118 = *(uint *)(in_ECX + 0x40);
    local_114 = *(undefined4 *)(in_ECX + 0x44);
    FUN_0099f020(&local_118);
    FUN_004013e0(param_1);
  }
  return;
}

