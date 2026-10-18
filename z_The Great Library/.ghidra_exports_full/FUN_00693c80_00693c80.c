// FUN_00693c80 @ 00693c80 body=[[00693c80, 00693cba] [00693cbe, 00693d18]]


void FUN_00693c80(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e293;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CLobbyHumanItem::vftable;
  in_ECX[7] = CLobbyHumanItem::vftable;
  if (0xf < (uint)in_ECX[0x11]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc]);
  }
  in_ECX[0x11] = 0xf;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  *in_ECX = &PTR_FUN_00e392f0;
  in_ECX[7] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  in_ECX[7] = &PTR_FUN_00e39158;
  *in_ECX = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

