// FUN_00775930 @ 00775930 body=[[00775930, 00775a04] [00775a08, 00775a3e] [00775a42, 00775b42] [00775b46, 00775bc1] [00775bc5, 00775c30] [00775c39, 00775cf6] [00775cfa, 00775d8e] [00775d92, 00775e28] [00775e2c, 00775e92] [00775e96, 00775ee7] [00775eeb, 00775fdc] [00775fe0, 00776008] [0077600c, 007760ec] [007760f0, 00776119] [0077611d, 00776140] [00776144, 007761af] [007761b3, 00776251] [00776255, 007762fb] [007762ff, 00776326] [0077632a, 007765da] [007765de, 00776612] [00776616, 0077664d] [00776651, 007766a0] [007766a4, 007766ba]]


/* WARNING: Removing unreachable block (ram,0x0077631d) */
/* WARNING: Removing unreachable block (ram,0x00776609) */
/* WARNING: Removing unreachable block (ram,0x00776248) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffecc : 0x0077634a */
/* WARNING: Removing unreachable block (ram,0x00775fff) */
/* WARNING: Removing unreachable block (ram,0x00775e89) */
/* WARNING: Removing unreachable block (ram,0x007761a6) */
/* WARNING: Removing unreachable block (ram,0x00775fd3) */
/* WARNING: Removing unreachable block (ram,0x00775d85) */
/* WARNING: Removing unreachable block (ram,0x00775ede) */
/* WARNING: Removing unreachable block (ram,0x00776110) */
/* WARNING: Removing unreachable block (ram,0x007762f2) */
/* WARNING: Removing unreachable block (ram,0x00775c27) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00775930(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint in_ECX;
  undefined4 extraout_ECX;
  int in_stack_00000140;
  int *in_stack_000001c0;
  int in_stack_00000474;
  int in_stack_00000478;
  int *piStack_134;
  int *piStack_130;
  uint uStack_128;
  uint uStack_11c;
  int iStack_fc;
  uint uStack_f8;
  int iStack_e4;
  char acStack_cc [8];
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_b0;
  undefined1 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  int local_94;
  uint uStack_90;
  undefined1 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint uStack_60;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_44;
  void *pvStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7b984;
  pvStack_14 = ExceptionList;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = 0;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x26c) + 0x6c))();
  (**(code **)(*piVar3 + 0x7c))();
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_9c = 0xf;
  uStack_a0 = 0;
  uStack_b0 = uStack_b0 & 0xffffff00;
  if ((DAT_012589ac == 2) || (*(int *)(param_1 + 0x1c) == *(int *)(in_ECX + 0x2e0))) {
    iVar4 = FUN_00aae9af();
    pvStack_14 = (void *)0x2;
    if (iVar4 == 0) {
      piStack_130 = (int *)0x0;
    }
    else {
      uStack_30 = 0xf;
      uStack_34 = 0;
      uStack_44 = uStack_44 & 0xffffff00;
      FUN_00409350();
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
      piVar3 = *(int **)(in_ECX - 8);
      piStack_134 = (int *)0x1;
      (**(code **)(*piVar3 + 0x3c))();
      (**(code **)(*piVar3 + 0x34))();
      piStack_130 = (int *)FUN_0076cc20();
    }
    pvStack_14 = (void *)0xffffffff;
    if (((uint)piStack_134 & 1) != 0) {
      if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_30 = 0xf;
      uStack_34 = 0;
      uStack_44 = uStack_44 & 0xffffff00;
    }
  }
  else {
    iVar4 = FUN_00aae9af();
    pvStack_14 = (void *)0x5;
    if (iVar4 == 0) {
      piStack_130 = (int *)0x0;
    }
    else {
      uStack_4c = 0xf;
      uStack_50 = 0;
      uStack_60 = uStack_60 & 0xffffff00;
      FUN_00409350();
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,6);
      piVar3 = *(int **)(in_ECX - 8);
      piStack_134 = (int *)0x2;
      (**(code **)(*piVar3 + 0x3c))();
      (**(code **)(*piVar3 + 0x34))();
      piStack_130 = (int *)FUN_0076cc20();
    }
    pvStack_14 = (void *)0xffffffff;
    if (((uint)piStack_134 & 2) != 0) {
      if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_4c = 0xf;
      uStack_50 = 0;
      uStack_60 = uStack_60 & 0xffffff00;
    }
    uStack_128 = uStack_128 & 0xffffff00;
    FUN_00409350();
    pvStack_14 = (void *)0x8;
    iVar4 = (**(code **)(*(int *)piStack_130[8] + 0x34))();
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350();
    uStack_1c = 9;
    iVar4 = (**(code **)(*(int *)piStack_130[8] + 0x34))();
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  }
  pvStack_14 = (void *)0xffffffff;
  piVar3 = (int *)piStack_130[8];
  uStack_128 = uStack_128 & 0xffffff00;
  FUN_00409350();
  pvStack_14 = (void *)0xa;
  (**(code **)(*piVar3 + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  uStack_18 = 0xffffffff;
  FUN_00409350();
  uStack_18 = 0xb;
  iVar4 = (**(code **)(*piStack_130 + 0x34))();
  (**(code **)(**(int **)(iVar4 + 0xa0) + 0x14c))();
  iVar4 = **(int **)(iVar4 + 0xa0);
  FUN_0052fc10();
  (**(code **)(iVar4 + 0x150))();
  uStack_24 = 0xffffffff;
  if (0xf < in_ECX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(uStack_128 + 0x10))();
  FUN_00409350();
  uStack_2c = 0xc;
  (*pcRam00000033)();
  uStack_30 = 0xffffffff;
  FUN_00409350();
  uStack_30 = 0xd;
  FUN_009a8ee0();
  uStack_30._0_1_ = 0xf;
  FUN_00409350();
  uStack_30._0_1_ = 0x10;
  iVar4 = (**(code **)(uStack_128 + 0x2c))();
  uStack_30._0_1_ = 0x11;
  pcVar5 = __itoa(*(int *)(iVar4 + 8),acStack_cc,10);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  uStack_30._0_1_ = 0x12;
  iVar4 = FUN_00aae9af();
  uStack_30._0_1_ = 0x13;
  if (iVar4 != 0) {
    FUN_009a9ce0();
  }
  uStack_30._0_1_ = 0x12;
  FUN_009e6810();
  uStack_30._0_1_ = 0xf;
  FUN_00409350();
  uStack_30._0_1_ = 0x14;
  FUN_00409350();
  uStack_30 = CONCAT31(uStack_30._1_3_,0x15);
  piVar3 = (int *)(**(code **)(*in_stack_000001c0 + 0x6c))();
  FUN_00475500();
  FUN_009a9880();
  uStack_34 = CONCAT31(uStack_34._1_3_,0x16);
  (**(code **)(*piVar3 + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  uStack_38._0_1_ = 0xf;
  if ((int *)0xf < piStack_130) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(char *)(in_stack_00000140 + 0x67) == '\0') {
    (**(code **)(iRam0000001d + 0x30))();
  }
  FUN_00409350();
  uStack_38._0_1_ = 0x17;
  FUN_009a8ee0();
  uStack_38._0_1_ = 0x19;
  FUN_00409350();
  uStack_38._0_1_ = 0x1a;
  iVar4 = FUN_00aae9af();
  uStack_38._0_1_ = 0x1b;
  if (iVar4 != 0) {
    FUN_009a9ce0();
  }
  uStack_38._0_1_ = 0x1a;
  FUN_009e6810();
  uStack_38._0_1_ = 0x19;
  iVar4 = FUN_00475500();
  FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c));
  uStack_38._0_1_ = 0x1c;
  FUN_00408ed0();
  uStack_38._0_1_ = 0x1d;
  FUN_00771510();
  uStack_38 = CONCAT31(uStack_38._1_3_,0x19);
  iVar4 = (**(code **)(iStack_fc + 0x28))();
  if ((*(char *)(iVar4 + 0x34) != '\0') && (in_stack_00000478 != 0)) {
    iVar4 = (**(code **)(*piStack_134 + 0x100))();
    if ((*(char *)(*(int *)(iVar4 + 300) + 0x34) != '\0') &&
       (iVar4 = (**(code **)(*piStack_134 + 0x100))(), *(int *)(iVar4 + 300) != 0)) {
      DAT_01258b2d = 1;
    }
    iVar4 = FUN_00aae9af();
    uStack_38._0_1_ = 0x1e;
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_009c19f0(extraout_ECX);
      piVar3 = (int *)FUN_00a14a70();
    }
    uStack_38._0_1_ = 0x19;
    FUN_0076ce00();
    iVar4 = *piVar3;
    (**(code **)(*piStack_134 + 0x44))();
    (**(code **)(iVar4 + 0x20))();
    FUN_00408ed0(&stack0x00000458);
    pcVar2 = *(code **)(*piVar3 + 0x24);
    piVar3[0x2c] = in_stack_00000474;
    (*pcVar2)();
    (**(code **)(*piVar3 + 0x28))();
    if (((char)piVar3[0x2d] == '\0') &&
       (iVar4 = piVar3[0x36], *(undefined1 *)(piVar3 + 0x36) = 1, (char)iVar4 == '\0')) {
      if (piVar3[0x35] == 0x29a) {
        FUN_009a8ee0();
        uStack_38._0_1_ = 0x1f;
        iVar4 = FUN_00475500();
        FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c));
        uStack_38._0_1_ = 0x20;
        FUN_009f23c0();
        uStack_38._0_1_ = 0x21;
        FUN_00771510();
        FUN_0076bf20();
        FUN_00408ad0();
        uStack_38._0_1_ = 0x19;
        FUN_009a9740();
      }
      else {
        FUN_009f23c0();
        uStack_38._0_1_ = 0x22;
        FUN_00771510();
        uStack_38._0_1_ = 0x19;
        FUN_0076bf20();
      }
    }
    FUN_00409350();
    uStack_38._0_1_ = 0x23;
    FUN_009a8ee0();
    uStack_38._0_1_ = 0x24;
    iVar4 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar4 + 0x6c));
    uStack_38._0_1_ = 0x25;
    FUN_009f23c0();
    uStack_38._0_1_ = 0x26;
    FUN_00771510();
    FUN_0076bf20();
    if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_38 = CONCAT31(uStack_38._1_3_,0x23);
    FUN_009a9740();
  }
  uStack_38 = CONCAT31(uStack_38._1_3_,0x27);
  FUN_009adb70();
  if (iStack_e4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_38 = 0x28;
  FUN_009adb70();
  if (local_94 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_40;
  return;
}

