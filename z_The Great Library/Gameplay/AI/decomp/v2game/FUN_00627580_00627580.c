// FUN_00627580 @ 00627580 body=[[00627580, 00627619] [0062761d, 00627724] [00627728, 00627755] [00627759, 006277c0] [006277c4, 00627841] [00627845, 00627917] [0062791b, 0062794e] [00627952, 006279ba]]


void FUN_00627580(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uStack_284;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  undefined4 uStack_268;
  uint uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_258;
  uint auStack_250 [2];
  uint uStack_248;
  uint auStack_244 [15];
  undefined4 local_208;
  uint uStack_1c0;
  undefined1 auStack_1bc [12];
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_e4;
  undefined1 local_e0 [12];
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1a2c;
  pvStack_14 = ExceptionList;
  local_208 = 0;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("diplomacy_country_facts",0x17);
  local_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(local_e0);
  iVar7 = DAT_012588e8;
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e4);
  }
  local_d0 = 0xf;
  uStack_d4 = 0;
  uStack_e4 = uStack_e4 & 0xffffff00;
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38c) * 4);
  if ((int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU) < 1) {
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(iVar7 + 0xb60);
  }
  auStack_244[5] = 0xf;
  auStack_244[4] = 0;
  auStack_244[0] = auStack_244[0] & 0xffffff00;
  FUN_00409350("country_name",0xc);
  puStack_10 = (undefined1 *)0x1;
  uVar4 = FUN_004f97a0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  puVar10 = auStack_244;
  (**(code **)(*piVar3 + 0x3c))();
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < uStack_270) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_284);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_270 = 0xf;
  uStack_274 = 0;
  if (0xf < auStack_244[4]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_248);
  }
  auStack_244[4] = 0xf;
  auStack_244[3] = 0;
  uStack_248 = uStack_248 & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  pvStack_14 = (void *)0x3;
  puVar9 = &uStack_248;
  piVar5 = (int *)(**(code **)(*piVar3 + 0x34))();
  (**(code **)(*piVar5 + 0xd4))(*(undefined4 *)(param_1 + 0x38c));
  uStack_1c = 0xffffffff;
  if (0xf < auStack_244[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_250[0]);
  }
  auStack_244[2] = 0xf;
  auStack_244[1] = 0;
  auStack_250[0] = auStack_250[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  uStack_1c = 4;
  piVar5 = (int *)(**(code **)(*piVar3 + 0x34))(auStack_250);
  piVar5 = (int *)(**(code **)(*piVar5 + 0xec))();
  iVar7 = *piVar5;
  uVar4 = FUN_0052fc10();
  (**(code **)(iVar7 + 0x150))(uVar4);
  uStack_24 = 0xffffffff;
  if (0xf < auStack_244[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_258);
  }
  uStack_1a8 = 0xf;
  uStack_1ac = 0;
  auStack_1bc[0] = 0;
  FUN_00409350("selected_nation_totalrank",0x19);
  uStack_260 = 0xf;
  uStack_264 = 0;
  uStack_274 = uStack_274 & 0xffffff00;
  uStack_24._0_1_ = 6;
  uStack_24._1_3_ = 0;
  pcVar6 = __itoa(puVar10[0x501],&stack0xfffffd6c,10);
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
  uStack_24 = CONCAT31(uStack_24._1_3_,7);
  (**(code **)(*piVar3 + 0x3c))(auStack_1bc);
  FUN_00408ed0(&uStack_278,0,0xffffffff);
  FUN_00a5ecc0(&uStack_278,0);
  if (0xf < uStack_264) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_278);
  }
  uStack_28 = 0xffffffff;
  uStack_264 = 0xf;
  uStack_268 = 0;
  uStack_278 = uStack_278 & 0xffffff00;
  if (0xf < uStack_1ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_1c0);
  }
  uStack_1ac = 0xf;
  uStack_1b0 = 0;
  uStack_1c0 = uStack_1c0 & 0xffffff00;
  if ((char)puVar9[0x4b4] == '\0') {
    iVar7 = 3;
  }
  else if (*(char *)((int)puVar9 + 0x31) == '\0') {
    iVar7 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < (int)puVar9[0x501]) + 1;
  }
  else {
    iVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006279b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0062b608)[iVar7])();
  return;
}

