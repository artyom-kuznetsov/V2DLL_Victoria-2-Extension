// FUN_008cc6c0 @ 008cc6c0 body=[[008cc6c0, 008cc722] [008cc726, 008cc73d]]


bool FUN_008cc6c0(int param_1)

{
  char cVar1;
  undefined4 local_34;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_008b32a0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4));
  local_8 = 0;
  cVar1 = FUN_00416db0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  ExceptionList = local_10;
  return cVar1 != '\0';
}

