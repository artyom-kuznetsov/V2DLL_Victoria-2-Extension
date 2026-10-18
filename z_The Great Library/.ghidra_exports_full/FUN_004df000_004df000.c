// FUN_004df000 @ 004df000 body=[[004df000, 004df070] [004df074, 004df083]]


void FUN_004df000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined1 *unaff_ESI;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  uVar1 = *param_1;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(local_30,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = uVar1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

