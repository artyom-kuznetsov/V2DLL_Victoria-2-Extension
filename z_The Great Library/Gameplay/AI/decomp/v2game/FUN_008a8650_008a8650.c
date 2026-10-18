// FUN_008a8650 @ 008a8650  (requested 008A8650, first bytes: 55 8B EC 6A FF 68 8B F8)


void FUN_008a8650(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[3] = 0;
  puVar2 = DAT_01258a10;
  in_ECX[1] = 0x18d;
  *in_ECX = CEventScope::vftable;
  in_ECX[2] = 0x2d2d2d;
  in_ECX[4] = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00aae9af(0x278);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
      DAT_01258a10 = puVar2;
    }
    else {
      FUN_00954a40(puVar2);
      *puVar2 = CNullPop::vftable;
      DAT_01258a10 = puVar2;
    }
  }
  in_ECX[5] = puVar2;
  in_ECX[8] = param_1;
  in_ECX[0xc] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 1;
  in_ECX[9] = in_ECX;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x2d2d2d;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 1;
  iVar1 = in_ECX[8];
  if (iVar1 != 0) {
    in_ECX[0x10] = iVar1;
    in_ECX[0x11] = iVar1;
  }
  ExceptionList = local_10;
  return;
}

