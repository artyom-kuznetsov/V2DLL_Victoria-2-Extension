// FUN_007746f0 @ 007746f0 body=[[007746f0, 007747f3] [007747f7, 0077488e] [00774892, 007749d3] [007749d7, 007749fe] [00774a02, 00774a30] [00774a34, 00774a4a]]


void FUN_007746f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint unaff_EDI;
  int aiStack_88 [5];
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint auStack_58 [4];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6cc1c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  FUN_009b1100();
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x40))(uVar2);
  iVar1 = FUN_00aae9af(0x60);
  puStack_10 = (undefined1 *)0x0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072ba30();
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = auStack_74[0] & 0xffffff00;
  FUN_00409350("PLAYER_BANNED",0xd);
  pvStack_14 = (void *)0x1;
  FUN_009a8ee0(aiStack_88,auStack_74);
  pvStack_14._0_1_ = 3;
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_60 = 0xf;
  uStack_64 = 0;
  auStack_74[0] = auStack_74[0] & 0xffffff00;
  uStack_44 = 0xf;
  uStack_48 = 0;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  pvStack_14._0_1_ = 4;
  iVar1 = FUN_00aae9af();
  pvStack_14._0_1_ = 5;
  if (iVar1 != 0) {
    FUN_009a9ce0();
  }
  pvStack_14._0_1_ = 4;
  FUN_009e6810(auStack_58,&stack0xffffff70);
  pvStack_14._0_1_ = 3;
  if (uStack_44 < 0x10) {
    iVar1 = FUN_00aae9af();
    pvStack_14._0_1_ = 6;
    if (iVar1 != 0) {
      uStack_44 = 0xf;
      uStack_48 = 0;
      auStack_58[0] = auStack_58[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,7);
      puVar3 = (undefined4 *)FUN_00aae9af();
      pvStack_14 = (void *)0x8;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,9);
        puVar3[1] = 0x18d;
        *puVar3 = &PTR_FUN_00e3cffc;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        FUN_00408ed0();
        *puVar3 = &PTR_FUN_00e3d020;
      }
      pvStack_14 = (void *)0xa;
      FUN_009f4240(iVar1,puVar3,*(undefined4 *)(param_1 + 0x27c),auStack_58);
    }
    pvStack_14 = (void *)0xc;
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
    if ((unaff_EDI & 2) != 0) {
      unaff_EDI = unaff_EDI & 0xfffffffd;
      if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_40);
      }
      uStack_2c = 0xf;
      uStack_30 = 0;
      uStack_40 = uStack_40 & 0xffffff00;
    }
    if (((unaff_EDI & 1) != 0) && (0xf < uStack_48)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_5c);
    }
    uStack_18 = 0xd;
    FUN_009adb70();
    if (aiStack_88[0] == 0) {
      ExceptionList = pvStack_20;
      return;
    }
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_88[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

