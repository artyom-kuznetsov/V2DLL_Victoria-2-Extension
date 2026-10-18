// FUN_008c25d0 @ 008c25d0 body=[[008c25d0, 008c2638] [008c263c, 008c2653]]


bool FUN_008c25d0(int param_1)

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
  FUN_00979160(*(undefined4 *)
                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x84c));
  local_8 = 0;
  cVar1 = FUN_00416db0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  ExceptionList = local_10;
  return cVar1 != '\0';
}

