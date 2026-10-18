// FUN_005988c0 @ 005988c0 body=[[005988c0, 00598914] [00598918, 00598925]]


void FUN_005988c0(void)

{
  undefined4 uVar1;
  int *in_ECX;
  int unaff_ESI;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0xa0) == 0) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(*in_ECX + 0x20))(local_2c);
    local_8 = 0;
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

