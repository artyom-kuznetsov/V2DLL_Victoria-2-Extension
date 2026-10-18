// FUN_00946d70 @ 00946d70 body=[[00946d70, 00946e7b] [00946e7f, 00946ebe] [00946ec4, 00946ee7] [00946eeb, 00946f46]]


void FUN_00946d70(void)

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
  puStack_10 = &LAB_00bab552;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x6c);
  ExceptionList = &local_14;
  *(undefined1 *)(iVar1 + 0x30) = 1;
  iVar2 = *(int *)(in_ECX + 0x6c);
  FUN_0092a7c0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10)
               ,*(undefined4 *)(iVar2 + 0x14));
  FUN_00929bf0(iVar1 + 0x28,
               *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(*(int *)(in_ECX + 0x6c) + 0xc) * 4) + 0xbe8) +
                         *(int *)(*(int *)(in_ECX + 0x6c) + 0x14) * 4) + 0x34));
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("DEMAND_PEACE",0xc);
  local_c = 0;
  FUN_009a8ee0(local_64,local_50);
  local_c._0_1_ = 1;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_c._0_1_ = 2;
  FUN_00641710();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_009adb70();
  if (local_60 == 0) {
    local_c = 0xffffffff;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    if (local_3c < 0x10) {
      iVar2 = *(int *)(iVar1 + 0x74);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      for (; (iVar2 != *(int *)(iVar1 + 0x78) &&
             (*(int *)(iVar2 + 4) != *(int *)(*(int *)(in_ECX + 0x6c) + 0xc))); iVar2 = iVar2 + 8) {
      }
      FUN_00946f50();
      ExceptionList = local_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

