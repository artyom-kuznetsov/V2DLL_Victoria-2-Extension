// FUN_004955b0 @ 004955b0 body=[[004955b0, 004956bc] [004956c0, 004956ce]]


void FUN_004955b0(void)

{
  int unaff_ESI;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 **local_74;
  int iStack_70;
  undefined **local_64 [5];
  undefined4 local_50;
  uint local_3c;
  int local_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b638;
  local_10 = ExceptionList;
  local_14 = local_88;
  local_74 = (undefined1 **)0xf;
  local_78 = 0;
  local_88[0] = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_64,unaff_ESI + 0x28,1);
  local_8 = 0;
  iStack_70 = 0x14;
  local_74 = (undefined1 **)&local_28;
  local_28 = 0x484341435f50414d;
  local_20 = 0x45;
  local_1c = 2;
  local_18 = 3;
  local_78 = 0x49563f;
  FUN_00993720();
  iStack_70 = 4;
  local_14 = (undefined1 *)(*(int *)(unaff_ESI + 0x14) - *(int *)(unaff_ESI + 0x10) >> 3);
  local_74 = &local_14;
  local_78 = 0x495659;
  FUN_00993720();
  if (local_14 != (undefined1 *)0x0) {
    local_74 = *(undefined1 ***)(unaff_ESI + 0x10);
    iStack_70 = (*(int *)(unaff_ESI + 0x14) - (int)local_74 >> 3) * 8;
    local_78 = 0x495679;
    FUN_00993720();
  }
  iStack_70 = *(int *)(unaff_ESI + 0x24) * *(int *)(unaff_ESI + 0x20);
  local_74 = *(undefined1 ***)(unaff_ESI + 0xc);
  local_78 = 0x49568d;
  FUN_00993720();
  local_64[0] = &PTR_FUN_00e37dc0;
  if (local_34 != 0) {
    iStack_70 = local_34;
    local_74 = (undefined1 **)0x4956a1;
    PHYSFS_close();
    local_34 = 0;
  }
  local_64[0] = &PTR_FUN_00e3b540;
  if (0xf < local_3c) {
    iStack_70 = local_50;
                    /* WARNING: Subroutine does not return */
    local_74 = (undefined1 **)&UNK_004956bd;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

