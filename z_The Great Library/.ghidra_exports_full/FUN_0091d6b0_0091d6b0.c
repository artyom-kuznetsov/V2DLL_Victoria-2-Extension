// FUN_0091d6b0 @ 0091d6b0 body=[[0091d6b0, 0091d814] [0091d818, 0091d83c] [0091d840, 0091d861] [0091d865, 0091d88f] [0091d893, 0091d8b7] [0091d8bb, 0091d8d6] [0091d8da, 0091d8f5] [0091d8f9, 0091d912]]


/* WARNING: Removing unreachable block (ram,0x0091d8cd) */
/* WARNING: Removing unreachable block (ram,0x0091d8ec) */
/* WARNING: Removing unreachable block (ram,0x0091d8ae) */

undefined4 FUN_0091d6b0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint uStack_78;
  undefined1 local_6c [12];
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  undefined1 local_34 [16];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b652f1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  FUN_00409350();
  local_c._0_1_ = 1;
  FUN_00409350();
  local_c._0_1_ = 2;
  FUN_00988bb0(local_34,3);
  local_c._0_1_ = 3;
  FUN_00988bb0(local_6c,3);
  local_c = CONCAT31(local_c._1_3_,4);
  (**(code **)(*in_ECX + 0x24))();
  puStack_10._0_1_ = 5;
  uVar1 = FUN_00988f20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
  FUN_00928600(param_1,uVar1,unaff_EBX);
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  if (uStack_24 < 0x10) {
    ExceptionList = pvStack_18;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

