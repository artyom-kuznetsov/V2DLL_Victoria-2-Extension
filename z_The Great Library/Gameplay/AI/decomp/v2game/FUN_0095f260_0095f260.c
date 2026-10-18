// FUN_0095f260 @ 0095f260 body=[[0095f260, 0095f3cc]]


undefined4 * FUN_0095f260(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba0176;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_01258a10 == (undefined4 *)0x0) {
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_00aae9af(0x278);
    local_c = 0;
    if (puVar3 == (undefined4 *)0x0) {
      DAT_01258a10 = (undefined4 *)0x0;
    }
    else {
      FUN_00954a40(puVar3);
      *puVar3 = CNullPop::vftable;
      DAT_01258a10 = puVar3;
    }
  }
  local_24 = DAT_01258a10;
  local_c = 0xffffffff;
  if (DAT_0131bb34 == 0) {
    iVar4 = FUN_00aae9af(0x188);
    local_c = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    FUN_00423700(uVar5);
  }
  local_28 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (local_28 < 1) {
    ExceptionList = local_14;
    return local_24;
  }
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 100) + 0x194);
  do {
    for (puVar1 = (undefined4 *)*puVar3; puVar2 = local_24, puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[0x9f]) {
      iVar4 = *(int *)(puVar1[0x1a] + 0x30);
      if ((((iVar4 == -1) || ((int)puVar1[0x16] < iVar4)) &&
          (puVar1[0x1a] == *(int *)(param_1 + 0x68))) &&
         ((puVar1[0x1b] == *(int *)(param_1 + 0x6c) &&
          (puVar2 = puVar1,
          puVar1[0x1c] ==
          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4
                           ) + 0xe68))))) break;
    }
    local_24 = puVar2;
    puVar3 = puVar3 + 4;
    local_28 = local_28 + -1;
    if (local_28 == 0) {
      ExceptionList = local_14;
      return local_24;
    }
  } while( true );
}

