// FUN_00886ff0 @ 00886ff0 body=[[00886ff0, 008870ac] [008870b0, 00887191] [00887195, 008871bf] [008871c3, 008871e5] [008871e9, 00887202] [00887206, 00887220] [00887224, 008872fc] [00887300, 00887324] [00887328, 0088734d] [00887351, 00887370] [00887374, 0088738e] [00887392, 008873e4] [008873e8, 008873ff] [00887403, 00887417]]


/* WARNING: Removing unreachable block (ram,0x00887319) */
/* WARNING: Removing unreachable block (ram,0x008870a1) */

undefined4 FUN_00886ff0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint in_stack_00000020;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87f96;
  local_10 = ExceptionList;
  local_6c = 0;
  local_8 = 1;
  local_48 = *(undefined4 *)(param_2 + 8);
  local_44 = *(undefined4 *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    local_48 = *(undefined4 *)(iVar1 + 0x128);
    local_44 = *(undefined4 *)(iVar1 + 300);
  }
  ExceptionList = &local_10;
  FUN_00409350("REMOVE_FOW");
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_40);
  local_8._0_1_ = 4;
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350(&DAT_00df8514);
  local_8._0_1_ = 5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("COUNTRY");
  local_8._0_1_ = 6;
  FUN_0055dd40();
  local_8._0_1_ = 7;
  FUN_00988fa0();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 10;
  if (iVar1 != 0) {
    FUN_009a9ce0();
  }
  local_8._0_1_ = 9;
  FUN_009e6810(local_2c);
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  FUN_00409350(&DAT_00df8514);
  local_8._0_1_ = 0xb;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("MONTHS");
  local_8._0_1_ = 0xc;
  FUN_00988970(local_a4);
  local_8._0_1_ = 0xd;
  FUN_00988fa0();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 0x10;
  if (iVar1 != 0) {
    FUN_009a9ce0();
  }
  local_8._0_1_ = 0xf;
  FUN_009e6810(local_2c);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_6c = 1;
  local_8 = CONCAT31(local_8._1_3_,0x11);
  FUN_009adb70();
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

