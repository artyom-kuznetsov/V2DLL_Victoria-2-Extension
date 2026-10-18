// FUN_008a8800 @ 008a8800 body=[[008a8800, 008a88ce]]


void FUN_008a8800(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  unaff_ESI[3] = 0;
  unaff_ESI[5] = param_1;
  unaff_ESI[2] = 0x2d2d2d;
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CEventScope::vftable;
  unaff_ESI[4] = 0;
  unaff_ESI[6] = 0;
  *(undefined2 *)(unaff_ESI + 7) = 1;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = unaff_ESI;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0x2d2d2d;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 1;
  if (unaff_ESI[5] == 0) {
    if (DAT_01258a10 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00aae9af(0x278);
      local_8 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        DAT_01258a10 = (undefined4 *)0x0;
      }
      else {
        FUN_00954a40(puVar1);
        *puVar1 = CNullPop::vftable;
        DAT_01258a10 = puVar1;
      }
    }
    unaff_ESI[5] = DAT_01258a10;
  }
  ExceptionList = local_10;
  return;
}

