// FUN_007a8510 @ 007a8510 body=[[007a8510, 007a8647] [007a864b, 007a8686] [007a868a, 007a86a5] [007a86a9, 007a86c8] [007a86cc, 007a86dd]]


void FUN_007a8510(void)

{
  int iVar1;
  int in_ECX;
  int aiStack_80 [4];
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6b84a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_007a8070();
  if (*(undefined4 **)(in_ECX + 0x3ac) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3ac))();
  }
  *(undefined4 *)(in_ECX + 0x3ac) = 0;
  if (*(undefined4 **)(in_ECX + 0x3d4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3d4))();
  }
  *(undefined4 *)(in_ECX + 0x3d4) = 0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x394) + 0x18) + 0x34))();
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = 0;
  FUN_00409350("MS_CONNECTION_LOST",0x12);
  uStack_c = 0;
  uStack_58 = 0xf;
  uStack_5c = 0;
  uStack_6c = 0;
  FUN_00409350("LoginResultText",0xf);
  uStack_c._0_1_ = 1;
  FUN_009a8ee0(aiStack_80,auStack_50);
  uStack_c._0_1_ = 2;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  uStack_c = CONCAT31(uStack_c._1_3_,3);
  (**(code **)(**(int **)(in_ECX + 0x394) + 0x38))();
  FUN_009e7500();
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
  FUN_009adb70();
  if (aiStack_80[0] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_80[0]);
  }
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[2] = 0;
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  ExceptionList = pvStack_18;
  return;
}

