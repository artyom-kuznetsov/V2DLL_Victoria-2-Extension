// FUN_0067d6c0 @ 0067d6c0 body=[[0067d6c0, 0067d710] [0067d714, 0067d724]]


void FUN_0067d6c0(void)

{
  undefined4 in_ECX;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0067d730(in_ECX,local_28);
  local_c = 0;
  FUN_0043cd10(local_28,0);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28[0]);
  }
  ExceptionList = local_14;
  return;
}

