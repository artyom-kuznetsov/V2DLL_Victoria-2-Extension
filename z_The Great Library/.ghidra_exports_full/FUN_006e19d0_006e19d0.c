// FUN_006e19d0 @ 006e19d0 body=[[006e19d0, 006e1a82] [006e1a86, 006e1a93]]


void FUN_006e19d0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f298;
  local_10 = ExceptionList;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  local_24 = *(undefined4 *)(unaff_EDI + 0x20);
  local_20 = *(undefined4 *)(unaff_EDI + 0x24);
  local_1c = *(undefined4 *)(unaff_EDI + 0x28);
  local_18 = *(undefined4 *)(unaff_EDI + 0x2c);
  local_8 = 0;
  FUN_00408ed0(unaff_ESI,0,0xffffffff);
  *(undefined4 *)(unaff_EDI + 0x20) = *(undefined4 *)(unaff_ESI + 0x20);
  *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(unaff_ESI + 0x24);
  *(undefined4 *)(unaff_EDI + 0x28) = *(undefined4 *)(unaff_ESI + 0x28);
  *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(unaff_ESI + 0x2c);
  FUN_00408ed0(local_44,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x20) = local_24;
  *(undefined4 *)(unaff_ESI + 0x24) = local_20;
  *(undefined4 *)(unaff_ESI + 0x28) = local_1c;
  *(undefined4 *)(unaff_ESI + 0x2c) = local_18;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  ExceptionList = local_10;
  return;
}

