// FUN_00734420 @ 00734420 body=[[00734420, 007345db] [007345df, 007345fe]]


/* WARNING: Removing unreachable block (ram,0x007345d2) */

void FUN_00734420(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  int iStack_68;
  int iStack_64;
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iVar3 = DAT_012588e8;
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4bb73;
  local_14 = ExceptionList;
  if (0 < (*(int *)(unaff_EDI + 0xfc) - *(int *)(unaff_EDI + 0xf8)) / 0x28) {
    puVar1 = (undefined4 *)(DAT_012588e8 + 0xb5c);
    ExceptionList = &local_14;
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    iStack_64 = (*(int *)(unaff_EDI + 0xfc) - *(int *)(unaff_EDI + 0xf8)) / 0x28;
    if (0 < iStack_64) {
      iStack_68 = 0;
      do {
        iVar5 = *(int *)(unaff_EDI + 0xf8) + iStack_68;
        uVar2 = *(uint *)(iVar5 + 4);
        FUN_00408ed0(iVar5 + 0xc);
        iStack_c = 0;
        iVar5 = DAT_01258a94;
        if (uVar2 < 0x1269) {
          iVar5 = DAT_01258a98;
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_009c1d40();
        }
        if (iVar5 != 0) {
          iVar5 = FUN_00aae9af();
          iStack_c._0_1_ = 1;
          if (iVar5 != 0) {
            iVar6 = DAT_01258a94;
            if (uVar2 < 0x1269) {
              iVar6 = DAT_01258a98;
            }
            if (iVar6 != 0) {
              FUN_009c1d40();
            }
            FUN_0057e6b0(iVar5,*puVar1,*(undefined4 *)(iVar3 + 0xb60));
          }
          iStack_c = (uint)iStack_c._1_3_ << 8;
          (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
        }
        iStack_c = 0xffffffff;
        iStack_68 = iStack_68 + 0x28;
        iStack_64 = iStack_64 + -1;
      } while (iStack_64 != 0);
    }
  }
  ExceptionList = local_14;
  return;
}

