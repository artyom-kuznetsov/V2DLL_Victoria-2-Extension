// FUN_0040a890 @ 0040a890 body=[[0040a890, 0040a8cf] [0040a8d3, 0040a8e7] [0040a8eb, 0040a908] [0040a90c, 0040a91f]]


void FUN_0040a890(byte param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_00b3c128;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CBattlePlanSendCommand::vftable;
  local_8 = 0;
  iVar1 = in_ECX[0xf];
  if (iVar1 != 0) {
    FUN_00401830(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
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
  ExceptionList = pvVar2;
  return;
}

