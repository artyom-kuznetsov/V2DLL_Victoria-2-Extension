// FUN_005a9fa0 @ 005a9fa0  (requested 005A9FA0, first bytes: 55 8B EC 6A FF 68 C6 A1)


void FUN_005a9fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(400);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00599640();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  puVar3 = (undefined4 *)FUN_00aae9af(400);
  local_8 = 1;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00599640();
    *puVar3 = CFortressCombatant::vftable;
    *(undefined4 **)(in_ECX + 0x14) = puVar3;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  ExceptionList = local_10;
  return;
}

