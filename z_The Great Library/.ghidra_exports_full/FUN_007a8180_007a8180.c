// FUN_007a8180 @ 007a8180 body=[[007a8180, 007a822a] [007a822e, 007a825e] [007a8262, 007a8359] [007a835d, 007a83a1] [007a83a5, 007a83c5] [007a83c9, 007a83e8] [007a83ec, 007a8400]]


void FUN_007a8180(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int aiStack_c4 [4];
  uint uStack_b4;
  undefined1 auStack_ac [8];
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [4];
  undefined1 uStack_90;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined1 local_6c [12];
  uint uStack_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  void *pvStack_24;
  void *pvStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b890a3;
  pvStack_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("HostEditBox",0xb);
  local_c = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x3bc) + 0x40))(local_6c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x4c))(auStack_54);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
  cVar1 = FUN_00416db0();
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_44 = 0xf;
  uStack_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  if (cVar1 != '\0') {
    FUN_007a7860(in_ECX);
    ExceptionList = pvStack_1c;
    return;
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = 0;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  uStack_98 = 0xf;
  uStack_9c = 0;
  auStack_ac[0] = 0;
  FUN_00409350();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x3bc) + 0x40))(auStack_ac);
  FUN_009a8ee0(aiStack_c4,auStack_94);
  uStack_18 = 4;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  uStack_18 = 5;
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))();
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_44);
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  pvStack_1c = (void *)CONCAT31(pvStack_1c._1_3_,6);
  FUN_009adb70();
  if (aiStack_c4[0] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_c4[0]);
  }
  aiStack_c4[0] = 0;
  aiStack_c4[1] = 0;
  aiStack_c4[2] = 0;
  if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_b4);
  }
  uStack_a0 = 0xf;
  uStack_a4 = 0;
  uStack_b4 = uStack_b4 & 0xffffff00;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_98);
  }
  ExceptionList = pvStack_24;
  return;
}

