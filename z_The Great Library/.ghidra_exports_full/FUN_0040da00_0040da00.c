// FUN_0040da00 @ 0040da00 body=[[0040da00, 0040dafb] [0040daff, 0040db3e] [0040db44, 0040db67] [0040db6b, 0040dbdf]]


void FUN_0040da00(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b630ad;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00401670(iVar1,*(undefined4 *)(in_ECX + 0x80));
  }
  local_c = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x1f0) = 1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("BP_NEW_PLAN",0xb);
  local_c = 1;
  FUN_009a8ee0(local_64,local_50);
  local_c._0_1_ = 2;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_c._0_1_ = 3;
  FUN_00408ed0();
  *(undefined1 *)(iVar1 + 0x21c) = 1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,4);
  FUN_009adb70();
  if (local_60 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c = 0xffffffff;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined1 *)(iVar1 + 0x1cc) = 1;
  *(undefined4 *)(iVar1 + 0x214) = *(undefined4 *)(in_ECX + 0x3a0);
  *(undefined4 *)(iVar1 + 0x218) = *(undefined4 *)(in_ECX + 0x3a4);
  FUN_0068f390();
  FUN_004123a0();
  FUN_0040d870();
  FUN_0040f7d0();
  FUN_0040dea0();
  FUN_0040f4d0();
  ExceptionList = local_14;
  return;
}

