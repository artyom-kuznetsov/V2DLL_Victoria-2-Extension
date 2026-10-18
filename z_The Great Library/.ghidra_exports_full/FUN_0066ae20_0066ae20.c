// FUN_0066ae20 @ 0066ae20 body=[[0066ae20, 0066b01b] [0066b01f, 0066b056] [0066b05a, 0066b07c] [0066b080, 0066b19b] [0066b19f, 0066b1ce] [0066b1d2, 0066b1f6] [0066b1fa, 0066b215] [0066b219, 0066b234] [0066b238, 0066b24e] [0066b269, 0066b315] [0066b319, 0066b351] [0066b35a, 0066b3dc] [0066b3e0, 0066b418] [0066b421, 0066b44b]]


void FUN_0066ae20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *in_ECX;
  char *pcVar7;
  undefined4 uStack_e8;
  uint auStack_e4 [3];
  undefined4 uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined1 auStack_ac [4];
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  int iStack_90;
  undefined1 uStack_8c;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_38 [32];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbbf6b;
  pvStack_14 = ExceptionList;
  piVar1 = (int *)in_ECX[0x368];
  do {
    ExceptionList = &pvStack_14;
    if (piVar1 == (int *)0x0) goto LAB_0066aebb;
    puVar2 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
  } while (puVar2[10] != param_1);
  for (piVar1 = (int *)in_ECX[0x368]; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != puVar2));
      piVar1 = (int *)piVar1[2]) {
  }
  ExceptionList = &pvStack_14;
  FUN_005f2ae0();
  (**(code **)*puVar2)();
  if ((char)in_ECX[0x744] == '\0') {
    FUN_0066a750();
  }
LAB_0066aebb:
  if (in_ECX[0x36a] < 2) {
    (**(code **)(*(int *)(in_ECX[0x592] + 0x18) + 0x38))();
  }
  if (in_ECX[0x36a] == 1) {
    *(undefined4 *)(in_ECX[0x590] + 8) = *(undefined4 *)(*(int *)in_ECX[0x368] + 0x28);
    FUN_00793510();
    (**(code **)(**(int **)(*(int *)in_ECX[0x368] + 0x20) + 0x2c))();
  }
  else {
    FUN_00793570();
    (**(code **)(*in_ECX + 0x74))();
  }
  if (*(char *)(in_ECX[0x58f] + 0xc) != '\0') {
    FUN_00795740();
  }
  iStack_90 = in_ECX[0x36a];
  if (iStack_90 < 1) {
    (**(code **)(*(int *)in_ECX[0x58e] + 0x48))();
  }
  else {
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = 0;
    uStack_c = 0;
    cVar3 = (**(code **)(**(int **)(*(int *)in_ECX[0x368] + 0x28) + 0x38))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(int **)(*(int *)in_ECX[0x368] + 0x28) + 0x3c))();
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      if (cVar3 == '\0') {
        FUN_00409350("AIRWINGS",8);
        uStack_c._0_1_ = 8;
        uStack_e8 = FUN_009a8ee0(auStack_ac,auStack_e4);
        uStack_c._0_1_ = 9;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        uStack_c._0_1_ = 10;
        FUN_00408ed0();
        if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_b4 = 0xf;
        uStack_b8 = 0;
        uStack_c8 = uStack_c8 & 0xffffff00;
        uStack_c._0_1_ = 8;
        FUN_009a9740();
        uStack_c._0_1_ = 0;
        if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        FUN_00409350("NAVIES",6);
        uStack_c._0_1_ = 5;
        uStack_e8 = FUN_009a8ee0(auStack_ac,auStack_e4);
        uStack_c._0_1_ = 6;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
        uStack_c._0_1_ = 7;
        FUN_00408ed0();
        if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_b4 = 0xf;
        uStack_b8 = 0;
        uStack_c8 = uStack_c8 & 0xffffff00;
        uStack_c._0_1_ = 5;
        FUN_009a9740();
        uStack_c._0_1_ = 0;
        if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      uStack_d0 = 0xf;
      uStack_d4 = 0;
      auStack_e4[0] = auStack_e4[0] & 0xffffff00;
      FUN_00409350("ARMIES",6);
      uStack_c._0_1_ = 1;
      uStack_e8 = FUN_009a8ee0(auStack_ac,auStack_e4);
      uStack_c._0_1_ = 2;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      uStack_c._0_1_ = 3;
      FUN_00408ed0();
      if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_b4 = 0xf;
      uStack_b8 = 0;
      uStack_c8 = uStack_c8 & 0xffffff00;
      uStack_c._0_1_ = 4;
      FUN_009adb70();
      if (iStack_a8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_c._0_1_ = 0;
      iStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    uStack_c._0_1_ = 0;
    uStack_b4 = 0xf;
    uStack_b8 = 0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    FUN_00409350(&DAT_00dfac10,4);
    uStack_c._0_1_ = 0xb;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    auStack_e4[0] = auStack_e4[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    uStack_98 = 0xf;
    uStack_9c = 0;
    auStack_ac[0] = 0;
    uStack_c._0_1_ = 0xd;
    pcVar5 = __itoa(iStack_90,acStack_38,10);
    pcVar7 = pcVar5;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
    uStack_c._0_1_ = 0xe;
    FUN_00988f20();
    uStack_c._0_1_ = 0xf;
    uVar6 = FUN_00988f20();
    uStack_c = CONCAT31(uStack_c._1_3_,0x10);
    (**(code **)(*(int *)in_ECX[0x592] + 0x3c))();
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_74);
    }
    uStack_60 = 0xf;
    uStack_64 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_58);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    uStack_58 = uStack_58 & 0xffffff00;
    if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b0);
    }
    uStack_9c = 0xf;
    uStack_a0 = 0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_e8);
    }
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_cc);
    }
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_90);
    }
  }
  ExceptionList = pvStack_18;
  return;
}

