// FUN_0090f590 @ 0090f590 body=[[0090f590, 0090f5e7] [0090f5eb, 0090f608] [0090f60c, 0090f61e]]


void FUN_0090f590(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c128;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CDiplomaticActionCommand::vftable;
  local_8 = 0;
  puVar1 = (undefined4 *)in_ECX[0xf];
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)&DAT_0131aef0)) {
    (**(code **)*puVar1)(1);
  }
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

