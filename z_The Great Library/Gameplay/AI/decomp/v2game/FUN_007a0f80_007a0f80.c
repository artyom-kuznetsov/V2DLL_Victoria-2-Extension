// FUN_007a0f80 @ 007a0f80 body=[[007a0f80, 007a1006] [007a100a, 007a1017]]


void FUN_007a0f80(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(unaff_ESI + 0x30) = 1;
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x38) + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ChatWindowEditBox",0x11);
  local_8 = 0;
  iVar1 = **(int **)(unaff_ESI + 0xc4);
  uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x38) + 0x40))(local_2c);
  (**(code **)(iVar1 + 100))(uVar2);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

