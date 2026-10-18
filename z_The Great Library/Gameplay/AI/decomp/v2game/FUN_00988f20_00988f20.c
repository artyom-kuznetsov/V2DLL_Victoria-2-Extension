// FUN_00988f20 @ 00988f20 body=[[00988f20, 00988f85] [00988f89, 00988f9a]]


void FUN_00988f20(void)

{
  undefined4 uVar1;
  undefined1 *unaff_ESI;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  uVar1 = FUN_0098ab80(local_30);
  local_8 = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}

