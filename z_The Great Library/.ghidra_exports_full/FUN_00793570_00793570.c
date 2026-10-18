// FUN_00793570 @ 00793570 body=[[00793570, 007935d3] [007935d7, 0079360c] [00793610, 0079363e]]


void FUN_00793570(void)

{
  int *piVar1;
  int unaff_ESI;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfad80,4);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 4) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 4) + 0x18) + 0x38))();
    (**(code **)(*piVar1 + 0x5c))();
    iVar2 = 0;
    if (0 < (int)(*(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) & 0xfffffffcU)) {
      do {
        (**(code **)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x10) + iVar2 * 4) + 0x18) + 0x38))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 2);
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

