// FUN_0062b620 @ 0062b620 body=[[0062b620, 0062b6ea] [0062b6ee, 0062b722] [0062b726, 0062b8d8] [0062b8dc, 0062b923] [0062b927, 0062b943] [0062b947, 0062b96d] [0062b971, 0062b9a0] [0062b9a4, 0062b9c8] [0062b9cc, 0062b9f2] [0062b9f6, 0062ba66] [0062ba6a, 0062bab3]]


void FUN_0062b620(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  char cVar9;
  uint local_110;
  uint uStack_10c;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 *puStack_f8;
  int *piStack_f4;
  undefined4 *puStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  uint uStack_cc;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined1 uStack_b0;
  uint uStack_ac;
  uint uStack_a0;
  undefined4 uStack_9c;
  int *piStack_94;
  undefined4 uStack_90;
  uint local_8c [7];
  uint uStack_70;
  uint uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b70316;
  pvStack_14 = ExceptionList;
  local_110 = 0;
  ExceptionList = &pvStack_14;
  while( true ) {
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = 0;
    local_c = 0;
    pcVar2 = __itoa(local_110,(char *)local_8c,10);
    pcVar8 = pcVar2;
    do {
      cVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar9 != '\0');
    FUN_00409350(pcVar2,(int)pcVar8 - (int)(pcVar2 + 1));
    local_c = 1;
    uVar3 = FUN_00988fa0(local_c8);
    local_c = CONCAT31(local_c._1_3_,2);
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))(uVar3);
    piStack_e4 = piVar4;
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_70);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_5c = 0xf;
    uStack_60 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_cc);
    }
    local_b8 = 0xf;
    uStack_bc = 0;
    uStack_cc = uStack_cc & 0xffffff00;
    puVar5 = (undefined4 *)FUN_0062f7b0();
    piVar1 = (int *)*puVar5;
    *puVar5 = 0;
    puStack_10 = (undefined1 *)0x3;
    piStack_e8 = piVar1;
    piStack_94 = piVar1;
    if (puStack_f0 != (undefined4 *)0x0) {
      (**(code **)*puStack_f0)(1);
    }
    uStack_9c = 0xf;
    uStack_a0 = 0;
    uStack_b0 = 0;
    FUN_00409350("_BUTTON",7);
    puStack_10._0_1_ = 4;
    iStack_fc = 0xf;
    uStack_100 = 0;
    local_110 = local_110 & 0xffffff00;
    FUN_00409350("action_option",0xd);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x34))(&local_110);
    cVar9 = (char)((uint)&piStack_94 >> 0x18);
    (**(code **)(*piVar1 + 0x24))();
    uStack_18 = 6;
    uVar6 = FUN_00988f20();
    uStack_18 = 7;
    piStack_f4 = (int *)FUN_009a8ee0(&piStack_e8,uVar6);
    uStack_18 = 8;
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iStack_fc = FUN_00aae9af();
      uStack_18 = 9;
      if (iStack_fc == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150();
      }
      uStack_18 = 10;
      iStack_fc = 0;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar5;
    uStack_18 = 8;
    uVar6 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    uStack_18 = 0xb;
    (**(code **)(*piVar4 + 0xcc))(uVar6);
    if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_34 = 0xf;
    uStack_38 = 0;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_20 = 0xc;
    FUN_009adb70();
    puVar5 = puStack_f8;
    piVar4 = piStack_ec;
    if (piStack_ec != (int *)0x0) {
      while( true ) {
        if (piVar4 == piStack_e8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < (uint)piVar4[5]) break;
        piVar4[5] = 0xf;
        piVar4[4] = 0;
        *(undefined1 *)piVar4 = 0;
        piVar4 = piVar4 + 8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piStack_ec = (int *)0x0;
    piStack_e8 = (int *)0x0;
    piStack_e4 = (int *)0x0;
    if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_50 = 0xf;
    uStack_54 = 0;
    uStack_64 = uStack_64 & 0xffffff00;
    if (0xf < local_8c[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c[0] = 0xf;
    uStack_90 = 0;
    uStack_a0 = uStack_a0 & 0xffffff00;
    if (0xf < uStack_10c) break;
    uStack_20 = 3;
    uStack_10c = 0xf;
    local_110 = 0;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00911760();
    uStack_10c = 0xf;
    local_110 = 0;
    FUN_00409350("action_option",0xd);
    uStack_20 = 0xd;
    piVar4 = (int *)(**(code **)(*piStack_f4 + 0x34))();
    if (cVar9 == '\0') {
      pcVar7 = *(code **)(*piVar4 + 0xbc);
    }
    else {
      pcVar7 = *(code **)(*piVar4 + 0xb8);
    }
    (*pcVar7)();
    if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar3);
    }
    uStack_24 = 0xffffffff;
    local_110 = 0xf;
    (**(code **)*puVar5)(1);
    local_110 = local_110 + 1;
    if (0x10 < (int)local_110) {
      ExceptionList = pvStack_14;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

