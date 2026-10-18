// FUN_008c5da0 @ 008c5da0 body=[[008c5da0, 008c5eb4]]


undefined4 FUN_008c5da0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba01fb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_008a88d0();
  local_54 = 0;
  local_58 = 0x2d2d2d;
  local_48 = 0;
  if (DAT_01258a10 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00aae9af(0x278);
    local_c = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00954a40(puVar2);
      *puVar2 = CNullPop::vftable;
    }
    local_c = 0xffffffff;
    DAT_01258a10 = puVar2;
  }
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + 8);
  local_4c = DAT_01258a10;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_14;
      return 0;
    }
    local_50 = *puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar4 = 0;
    if (iVar3 < 1) break;
    while (cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x18))(local_60),
          cVar1 != '\0') {
      iVar4 = iVar4 + 1;
      if (iVar3 <= iVar4) {
        ExceptionList = local_14;
        return 1;
      }
    }
  }
  ExceptionList = local_14;
  return 1;
}

