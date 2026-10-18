// FUN_009c1fa0 @ 009c1fa0 body=[[009c1fa0, 009c1fda] [009c1fde, 009c1fed] [009c1ff7, 009c202a]]


void FUN_009c1fa0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bcbe;
  local_10 = ExceptionList;
  local_8 = 2;
  iVar1 = in_ECX[0x1a];
  if (iVar1 != 0) {
    ExceptionList = &local_10;
    FUN_009c1fa0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (in_ECX[0x11] != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  ExceptionList = &local_10;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  FUN_009c2e60(in_ECX + 0xd);
  *in_ECX = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

