// FUN_008aff70 @ 008aff70 body=[[008aff70, 008afffb]]


void FUN_008aff70(void)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_01258a04 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_01258a04 = (undefined4 *)0x0;
    }
    else {
      FUN_00409350("no_mission",10);
      FUN_008af980();
      *puVar1 = CNullMission::vftable;
      DAT_01258a04 = puVar1;
    }
  }
  ExceptionList = local_10;
  return;
}

