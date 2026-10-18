// FUN_00596540 @ 00596540 body=[[00596540, 00596861] [00596865, 0059687b]]


void FUN_00596540(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  uint local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar5 = DAT_01258a94;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  local_140 = *(uint *)(in_ECX + 0xc);
  local_13c = *(undefined4 *)(in_ECX + 0x10);
  if (local_140 < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_005965a7;
    ExceptionList = &local_14;
    iVar4 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_005965a7:
    iVar4 = 0;
    ExceptionList = &local_14;
  }
  else {
    ExceptionList = &local_14;
    iVar4 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 8) = iVar4;
  if (iVar4 != 0) {
    local_140 = *(uint *)(iVar4 + 8);
    local_13c = *(undefined4 *)(iVar4 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&local_140);
    iVar5 = DAT_01258a94;
  }
  local_140 = *(uint *)(in_ECX + 0x34);
  local_13c = *(undefined4 *)(in_ECX + 0x38);
  if (local_140 < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar5 = FUN_009c1d40();
      goto LAB_0059661b;
    }
  }
  else if (iVar5 != 0) {
    iVar5 = FUN_009c1d40();
    goto LAB_0059661b;
  }
  iVar5 = 0;
LAB_0059661b:
  *(int *)(in_ECX + 0x30) = iVar5;
  if (iVar5 != 0) {
    local_140 = *(uint *)(iVar5 + 8);
    local_13c = *(undefined4 *)(iVar5 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&local_140);
  }
  uVar2 = *(uint *)(in_ECX + 0x58);
  local_140 = uVar2;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_11c = 0xc;
    _sprintf(local_118,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x5c);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(uint *)(in_ECX + 100);
  local_140 = uVar2;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_11c = 0xc;
    _sprintf(local_118,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(uint *)(in_ECX + 0x60);
  local_140 = uVar2;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_11c = 0xc;
    _sprintf(local_118,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x68);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (*(int *)(in_ECX + 0x8c) != 0) {
    local_124 = 0xf;
    local_128 = 0;
    local_138 = local_138 & 0xffffff00;
    pcVar6 = (char *)(in_ECX + 0x88);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x88),(int)pcVar6 - (in_ECX + 0x89));
    local_c = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138);
    }
  }
  ExceptionList = local_14;
  return;
}

