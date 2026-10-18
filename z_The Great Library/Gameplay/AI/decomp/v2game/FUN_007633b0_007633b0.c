// FUN_007633b0 @ 007633b0 body=[[007633b0, 00763442] [00763446, 0076348c] [00763490, 007634fc]]


void FUN_007633b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43ecf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CGameNameMember::vftable;
  in_ECX[7] = CGameNameMember::vftable;
  local_8 = 3;
  if (in_ECX[8] != 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8._0_1_ = 4;
    iVar1 = (**(code **)(*(int *)in_ECX[8] + 0x48))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 10);
    local_8._0_1_ = 3;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8 = CONCAT31(local_8._1_3_,5);
    iVar1 = (**(code **)(*(int *)in_ECX[8] + 0x48))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x18);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  FUN_00648a60();
  in_ECX[0x18] = CCheckBoxObserver::vftable;
  in_ECX[10] = CCheckBoxObserver::vftable;
  *in_ECX = &PTR_FUN_00e392f0;
  in_ECX[7] = &PTR_FUN_00e39320;
  local_8 = 7;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  in_ECX[7] = &PTR_FUN_00e39158;
  *in_ECX = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

