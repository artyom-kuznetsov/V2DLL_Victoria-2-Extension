// FUN_005a9ad0 @ 005a9ad0 body=[[005a9ad0, 005a9b92]]


void FUN_005a9ad0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x80);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00593880(puVar1,1);
    *puVar1 = CNavalCombatant::vftable;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1f] = 0;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)(in_ECX + 0x10) = puVar1;
  puVar1 = (undefined4 *)FUN_00aae9af(0x80);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00593880(puVar1,0);
    *puVar1 = CNavalCombatant::vftable;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1f] = 0;
    *(undefined4 **)(in_ECX + 0x14) = puVar1;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  ExceptionList = local_10;
  return;
}

