// FUN_009f3f70 @ 009f3f70 body=[[009f3f70, 009f403c] [009f4040, 009f4060] [009f4064, 009f407f] [009f4083, 009f4094]]


void FUN_009f3f70(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4eb78;
  local_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00e3cff0,2);
  local_c = 0;
  FUN_00988f20(local_6c);
  local_c._0_1_ = 1;
  uVar1 = FUN_00988f20(in_ECX + 100);
  local_c = CONCAT31(local_c._1_3_,2);
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    FUN_009c1d40();
  }
  FUN_009f3ec0(uVar1);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (local_58 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_6c[0]);
}

