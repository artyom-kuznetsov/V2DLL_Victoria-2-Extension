// FUN_007a42b0 @ 007a42b0 body=[[007a42b0, 007a4354] [007a4358, 007a43b1] [007a43b5, 007a4412] [007a4416, 007a443e] [007a4442, 007a44cb] [007a44cf, 007a44ee] [007a44f2, 007a4520] [007a4524, 007a4537]]


void FUN_007a42b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 auStack_80 [4];
  int iStack_7c;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6ba02;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x34))();
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))();
    if (*(int *)(*(int *)*puVar2 + 0x28) != 0) {
      uStack_58 = 0xf;
      uStack_5c = 0;
      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
      FUN_00409350("METASERVER_GAME_INFO",0x14);
      uStack_c = 0;
      FUN_009a8ee0(auStack_80,auStack_6c);
      uStack_c._0_1_ = 2;
      if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_58 = 0xf;
      uStack_5c = 0;
      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      FUN_00409350("CREATOR",7);
      uStack_c._0_1_ = 3;
      FUN_009a9980();
      uStack_c._0_1_ = 2;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      FUN_00409350(&DAT_00dfa9f8,4);
      uStack_c._0_1_ = 4;
      FUN_00a16a20();
      uStack_c._0_1_ = 5;
      FUN_009a9980();
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c._0_1_ = 2;
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      FUN_00409350("GameInfoBox",0xb);
      uStack_c._0_1_ = 6;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      uStack_c = CONCAT31(uStack_c._1_3_,7);
      (**(code **)(**(int **)(in_ECX + 0xcc) + 0x38))();
      FUN_009e7500();
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c = 8;
      FUN_009adb70();
      if (iStack_7c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

