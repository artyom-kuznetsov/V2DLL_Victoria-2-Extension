// FUN_0071ad80 @ 0071ad80 body=[[0071ad80, 0071ae67] [0071ae6b, 0071ae97] [0071ae9b, 0071b000] [0071b004, 0071b032] [0071b036, 0071b05e] [0071b062, 0071b087] [0071b08b, 0071b0b3] [0071b0b7, 0071b0e1] [0071b0e5, 0071b1b8] [0071b1bc, 0071b1e7] [0071b1eb, 0071b1ff]]


/* WARNING: Removing unreachable block (ram,0x0071b0d8) */
/* WARNING: Removing unreachable block (ram,0x0071b055) */
/* WARNING: Removing unreachable block (ram,0x0071b0aa) */
/* WARNING: Removing unreachable block (ram,0x0071b1de) */
/* WARNING: Removing unreachable block (ram,0x0071ae8e) */

void FUN_0071ad80(void)

{
  undefined4 uVar1;
  int in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  uint uStack_cc;
  uint uStack_7c;
  uint uStack_60;
  uint uStack_44;
  uint uStack_2c;
  void *pvStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b505b2;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  FUN_009ca140();
  local_c = CONCAT31(local_c._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x2;
  FUN_00409350();
  puStack_10._0_1_ = 3;
  FUN_009ca140();
  puStack_10._0_1_ = 4;
  FUN_00409350();
  puStack_10._0_1_ = 5;
  FUN_00988f20();
  puStack_10._0_1_ = 6;
  uVar1 = FUN_00988f20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,7);
  (**(code **)(**(int **)(unaff_EBX + 0x20) + 0x3c))();
  FUN_00408ed0(uVar1);
  FUN_00a5ecc0();
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (uStack_60 < 0x10) {
    pvStack_14 = (void *)0xffffffff;
    FUN_00409350();
    pvStack_14 = (void *)0x8;
    uVar1 = FUN_009ca140(1);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,9);
    (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x3c))();
    FUN_00408ed0(uVar1,0);
    FUN_00a5ecc0(uVar1);
    if (uStack_2c < 0x10) {
      ExceptionList = pvStack_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

