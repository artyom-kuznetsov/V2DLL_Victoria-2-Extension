// FUN_009941e0 @ 009941e0 body=[[009941e0, 00994739] [0099473d, 00994aa5] [00994aa9, 00994b42] [00994b46, 00994c56] [00994c5a, 00994c7a] [00994c7e, 00994c99] [00994c9d, 00994cb9] [00994cbf, 00994e2f] [00994e33, 00994e5f] [00994e63, 00994e8a] [00994e8e, 00994eb5] [00994eb9, 00994eda] [00994ede, 00994ef9] [00994efd, 00994f18] [00994f1c, 00994f38] [00994f3c, 00994fba] [00994fbe, 00995003] [00995007, 0099504c] [00995050, 00995090] [00995094, 00995178] [0099517c, 00995240] [00995249, 0099533f] [00995343, 009953d8] [009953dc, 00995510] [00995514, 00995729] [0099572f, 00995960] [00995964, 00995978]]


undefined4 * FUN_009941e0(undefined4 *param_1,HWND param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *****pppppuVar10;
  uint uVar11;
  int iVar12;
  int X;
  int Y;
  char *pcVar13;
  undefined1 local_69c [512];
  char local_49c [588];
  char local_250 [32];
  undefined1 local_230 [12];
  undefined4 local_224;
  uint local_220;
  undefined4 local_210;
  uint local_20c;
  uint local_204;
  undefined4 local_1f4;
  uint local_1f0;
  uint local_1e8;
  undefined4 local_1d8;
  uint local_1d4;
  char local_1cc [4];
  uint local_1c8;
  undefined4 local_1b8;
  uint local_1b4;
  undefined **local_134 [18];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int local_74;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 local_49;
  undefined4 ****local_48;
  undefined8 local_44;
  tagRECT local_3c;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5802a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0x18d;
  *param_1 = &PTR_FUN_00e38324;
  param_1[1] = &PTR_LAB_00e38338;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x1ff;
  pvVar3 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x24] = pvVar3;
  _memset(pvVar3,0,param_1[0x23] * 4);
  local_8._0_1_ = 5;
  param_1[0x25] = 0;
  param_1[0x26] = 0x1ff;
  pvVar3 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x27] = pvVar3;
  _memset(pvVar3,0,param_1[0x26] * 4);
  local_8._0_1_ = 6;
  param_1[0x28] = 0;
  param_1[0x29] = 0x1ff;
  pvVar3 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x2a] = pvVar3;
  _memset(pvVar3,0,param_1[0x29] * 4);
  local_8._0_1_ = 7;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x1ff;
  pvVar3 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x2d] = pvVar3;
  _memset(pvVar3,0,param_1[0x2c] * 4);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_8._0_1_ = 0x12;
  FUN_009bc1e0(param_1 + 0x56);
  local_8._0_1_ = 0x13;
  FUN_00993f20(param_1 + 0x1ae0f);
  param_1[0x1ae6f] = *(undefined4 *)(param_3 + 0x38);
  param_1[0x1ae70] = *(undefined4 *)(param_3 + 0x3c);
  *(undefined1 *)(param_1 + 0x1ae71) = *(undefined1 *)(param_3 + 0x44);
  *(undefined1 *)((int)param_1 + 0x6b9c5) = *(undefined1 *)(param_3 + 0x45);
  local_54 = *(undefined4 *)(param_3 + 0x38);
  local_3c.bottom._0_2_ = (short)local_54;
  local_3c.bottom._2_2_ = (short)*(undefined4 *)(param_3 + 0x3c);
  local_50 = param_1 + 0x1ae78;
  FUN_009f8e80();
  uVar4 = DAT_00f092fc;
  local_8._0_1_ = 0x15;
  param_1[0x1ae78] = &PTR_FUN_00e38350;
  param_1[0x1aeb6] = uVar4;
  param_1[0x1aeb9] = local_3c.bottom;
  param_1[0x1aebf] = 0xf;
  param_1[0x1aebe] = 0;
  *(undefined1 *)(param_1 + 0x1aeba) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x1aec1) = 1;
  *(undefined4 *)((int)param_1 + 0x6bb06) = 0;
  local_54 = *(undefined4 *)(param_3 + 0x38);
  local_3c.bottom._0_2_ = (short)*(undefined4 *)(param_3 + 0x38);
  local_3c.bottom._2_2_ = (short)*(undefined4 *)(param_3 + 0x3c);
  local_50 = param_1 + 0x1aec3;
  FUN_009f8e80();
  uVar4 = DAT_00f092fc;
  local_8._0_1_ = 0x17;
  param_1[0x1af04] = local_3c.bottom;
  param_1[0x1aec3] = &PTR_FUN_00e38350;
  param_1[0x1af01] = uVar4;
  param_1[0x1af0a] = 0xf;
  param_1[0x1af09] = 0;
  *(undefined1 *)(param_1 + 0x1af05) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)(param_1 + 0x1af0c) = 1;
  *(undefined4 *)((int)param_1 + 0x6bc32) = 0;
  *(undefined1 *)(param_1 + 0x1af11) = 0;
  param_1[0x1af12] = param_3;
  *(undefined1 *)(param_1 + 0x1af13) = 0;
  param_1[0x1af14] = 0;
  param_1[0x1af15] = 0;
  param_1[0x1af16] = 0;
  *(undefined1 *)(param_1 + 0x1af19) = 0;
  param_1[0x1af21] = 0;
  param_1[0x1af22] = 0;
  param_1[0x1af23] = 0;
  param_1[0x1af24] = 0;
  param_1[0x1af25] = 0;
  param_1[0x1af26] = 0;
  local_8._0_1_ = 0x19;
  *(undefined1 *)(param_1 + 0x1af37) = 0;
  *(undefined1 *)(param_1 + 0x1af28) = 1;
  param_1[0x1af3d] = 0x1ff;
  param_1[0x1af3c] = 0;
  pvVar3 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x1af3e] = pvVar3;
  _memset(pvVar3,0,param_1[0x1af3d] * 4);
  local_8._0_1_ = 0x1a;
  FUN_00993e30(param_1 + 0x1af3f);
  param_1[0x1af52] = 0;
  param_1[0x1af53] = 0;
  param_1[0x1af54] = 0;
  param_1[0x1af56] = 0;
  param_1[0x1af57] = 0;
  param_1[0x1af58] = 0;
  *(undefined1 *)(param_1 + 0x1af59) = 0;
  local_8._0_1_ = 0x1d;
  FUN_004bf300(0x800);
  FUN_004bf300(0x800);
  FUN_004bf300(0x800);
  DAT_01258a74 = param_1;
  param_1[3] = param_2;
  local_74 = GetSystemMetrics(0);
  local_50 = (undefined4 *)GetSystemMetrics(1);
  uVar4 = Direct3DCreate9(0x20);
  param_1[0x18] = uVar4;
  local_3c.right = 0xf;
  local_3c.top = 0;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  FUN_00409350("graphics.cpp",0xc);
  local_8._0_1_ = 0x1e;
  FUN_004015b0(&local_48,0xa1,3);
  local_8._0_1_ = 0x1f;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x1e;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  local_8 = CONCAT31(local_8._1_3_,0x1d);
  if (0xf < (uint)local_3c.right) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_3c.right = 0xf;
  local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar5 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  param_1[0x1af5a] = piVar5;
  (**(code **)(*piVar5 + 4))();
  FUN_009bb260(param_3,param_1[0x18]);
  piVar5 = param_1 + 0x1ae6f;
  piVar6 = (int *)FUN_009bb460(param_1[0x1af12],&local_3c.right,piVar5,0);
  *piVar5 = *piVar6;
  param_1[0x1ae70] = piVar6[1];
  if ((*piVar5 != *(int *)(param_1[0x1af12] + 0x38)) ||
     (param_1[0x1ae70] != *(int *)(param_1[0x1af12] + 0x3c))) {
    iVar12 = piVar6[1];
    *(int *)(param_3 + 0x38) = *piVar6;
    *(int *)(param_3 + 0x3c) = iVar12;
    iVar12 = *piVar5;
    if (*(char *)(param_3 + 0x44) == '\0') {
      if (*(char *)(param_1[0x1af12] + 0x45) == '\0') {
        SetRect(&local_3c,0x1e,0x1e,iVar12 + 0x1e,param_1[0x1ae70] + 0x1e);
        AdjustWindowRect(&local_3c,0xcf0000,0);
      }
      else {
        SetRect(&local_3c,0,0,iVar12,param_1[0x1ae70]);
      }
      iVar7 = local_3c.bottom - local_3c.top;
      iVar12 = local_3c.right - local_3c.left;
      X = local_3c.left;
      Y = local_3c.top;
    }
    else {
      iVar7 = param_1[0x1ae70];
      X = 0;
      Y = 0;
    }
    MoveWindow(param_2,X,Y,iVar12,iVar7,1);
  }
  _memset(param_1 + 0x1af29,0,0x38);
  param_1[0x1af30] = param_1[3];
  if (*(char *)(param_1 + 0x1ae71) == '\0') {
    param_1[0x1af2b] = 0;
    param_1[0x1af31] = 1;
  }
  else {
    param_1[0x1af31] = 0;
    param_1[0x1af29] = param_1[0x1ae6f];
    param_1[0x1af2a] = param_1[0x1ae70];
    param_1[0x1af2b] = 0x16;
    FUN_009bbe30();
    param_1[0x1af35] = *(undefined4 *)(param_3 + 0x40);
  }
  param_1[0x1af2b] = 0x15;
  param_1[0x1af36] = (-(uint)(*(char *)(param_3 + 0x32) != '\0') & 0x80000001) + 0x80000000;
  param_1[0x1af2c] = 1;
  param_1[0x1af2f] = 1;
  param_1[0x1af34] = 2;
  param_1[0x1af32] = 1;
  param_1[0x1af33] = 0x4b;
  iVar12 = *(int *)(param_3 + 0x4c);
  if (((iVar12 < 2) || ((&DAT_00f086c4)[(iVar12 * 3 + -6) * 4] == '\0')) || (iVar12 < 2)) {
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (uint)local_70[0]._1_3_ << 8;
    FUN_00409350("graphics.cpp",0xc);
    local_8._0_1_ = 0x24;
    FUN_004015b0(local_70,0x117,3);
    local_8._0_1_ = 0x25;
    uVar4 = FUN_00987d20();
    FUN_00401280(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x24);
    FUN_00987ac0(local_134);
    local_134[0] = std::ios_base::vftable;
    FUN_00aad52d(local_134);
  }
  else {
    do {
      iVar7 = iVar12 + -2;
      if (iVar12 < 2) {
        iVar7 = 0;
      }
      else if (0x10 < iVar12) {
        iVar7 = 0xe;
      }
      if ((&DAT_00f086c4)[iVar7 * 0xc] != '\0') {
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = (uint)local_70[0]._1_3_ << 8;
        FUN_00409350("graphics.cpp",0xc);
        local_8._0_1_ = 0x20;
        FUN_004015b0(local_70,0x10d,3);
        local_8._0_1_ = 0x21;
        uVar4 = FUN_00987d20(iVar12);
        uVar4 = FUN_00455470(uVar4);
        FUN_00401280(uVar4);
        local_8 = CONCAT31(local_8._1_3_,0x20);
        FUN_00987ac0(local_134);
        local_134[0] = std::ios_base::vftable;
        FUN_00aad52d(local_134);
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
        param_1[0x1af2d] = iVar12;
        goto LAB_00994b46;
      }
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = (uint)local_70[0]._1_3_ << 8;
    FUN_00409350("graphics.cpp",0xc);
    local_8._0_1_ = 0x22;
    FUN_004015b0(local_70,0x112,3);
    local_8._0_1_ = 0x23;
    uVar4 = FUN_00987d20();
    FUN_00401280(uVar4);
    local_8 = CONCAT31(local_8._1_3_,0x22);
    FUN_00987ac0(local_134);
    local_134[0] = std::ios_base::vftable;
    FUN_00aad52d(local_134);
  }
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
LAB_00994b46:
  param_1[0x1a] = *(undefined4 *)(param_3 + 0x34);
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  local_8._0_1_ = 0x26;
  if (*(int *)(param_3 + 0x1c) == 0x40) {
    pcVar13 = "Creating device with: D3DCREATE_HARDWARE_VERTEXPROCESSING\n";
  }
  else {
    pcVar13 = "Creating device with: D3DCREATE_SOFTWARE_VERTEXPROCESSING\n";
  }
  FUN_00409350(pcVar13,0x3a);
  if (*(char *)(param_1 + 0x1ae71) == '\0') {
    FUN_00448740("\tFullscreen=no\n",0xf);
  }
  else {
    FUN_00448740("\tFullscreen=yes\n",0x10);
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_3c.right = 0xf;
    local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
    local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
    local_8._0_1_ = 0x28;
    pcVar8 = __itoa(*(int *)(param_3 + 0x40),local_1cc,10);
    pcVar13 = pcVar8;
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar8,(int)pcVar13 - (int)(pcVar8 + 1));
    local_8._0_1_ = 0x29;
    FUN_00988fa0(&local_48);
    local_8._0_1_ = 0x2a;
    uVar4 = FUN_00988f20(local_70);
    local_8._0_1_ = 0x2b;
    FUN_00448aa0(uVar4,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < (uint)local_3c.right) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
    local_8._0_1_ = 0x26;
    local_3c.right = 0xf;
    local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
    local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
  }
  if (*(char *)((int)param_1 + 0x6b9c5) != '\0') {
    FUN_00448740("\tBorderless=yes\n",0x10);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 0x2c;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd420,1);
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  local_8._0_1_ = 0x2e;
  pcVar8 = __itoa(param_1[0x1ae70],local_250,10);
  pcVar13 = pcVar8;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar8,(int)pcVar13 - (int)(pcVar8 + 1));
  local_3c.right = 0xf;
  local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  local_8._0_1_ = 0x30;
  pcVar8 = __itoa(param_1[0x1ae6f],local_250,10);
  pcVar13 = pcVar8;
  do {
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar8,(int)pcVar13 - (int)(pcVar8 + 1));
  local_8._0_1_ = 0x31;
  FUN_00988fa0(&local_48);
  local_8._0_1_ = 0x32;
  FUN_00988f20(local_70);
  local_8._0_1_ = 0x33;
  FUN_00988f20(local_90);
  local_8._0_1_ = 0x34;
  uVar4 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x35;
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1e8);
  }
  local_1d4 = 0xf;
  local_1d8 = 0;
  local_1e8 = local_1e8 & 0xffffff00;
  if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_204);
  }
  local_1f0 = 0xf;
  local_1f4 = 0;
  local_204 = local_204 & 0xffffff00;
  if (0xf < local_20c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_220);
  }
  local_20c = 0xf;
  local_210 = 0;
  local_220 = local_220 & 0xffffff00;
  if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1c8);
  }
  local_1b4 = 0xf;
  local_1b8 = 0;
  local_1c8 = local_1c8 & 0xffffff00;
  if (0xf < (uint)local_3c.right) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_3c.right = 0xf;
  local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_8._0_1_ = 0x26;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("graphics.cpp",0xc);
  local_8._0_1_ = 0x36;
  local_3c.right = 0xf;
  local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  FUN_00408ed0(local_ac,0,0xffffffff);
  local_8._0_1_ = 0x37;
  uVar4 = FUN_004015b0(local_2c,0x12e,3);
  local_8._0_1_ = 0x3a;
  pppppuVar10 = (undefined4 *****)local_48;
  if ((uint)local_3c.right < 0x10) {
    pppppuVar10 = &local_48;
  }
  FUN_00418e30(uVar4,pppppuVar10);
  if (0xf < (uint)local_3c.right) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_3c.right = 0xf;
  local_3c._0_8_ = local_3c._0_8_ & 0xffffffff;
  local_48 = (undefined4 ****)((uint)local_48 & 0xffffff00);
  local_8._0_1_ = 0x36;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  local_8._0_1_ = 0x26;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  uVar11 = 0;
  iVar12 = (**(code **)(*(int *)param_1[0x18] + 0x10))((int *)param_1[0x18]);
  if (iVar12 != 0) {
    do {
      (**(code **)(*(int *)param_1[0x18] + 0x14))((int *)param_1[0x18],uVar11,0,local_69c);
      pcVar13 = local_49c;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      do {
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(local_49c,(int)pcVar13 - (int)(local_49c + 1));
      iVar12 = FUN_005484e0(local_2c,"PerfHUD",7);
      local_49 = iVar12 != -1;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      if ((bool)local_49) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        local_3c.bottom = uVar11;
        FUN_00409350("graphics.cpp",0xc);
        local_8._0_1_ = 0x3b;
        FUN_004015b0(local_2c,0x13c,3);
        local_8._0_1_ = 0x3c;
        uVar4 = FUN_00987d20();
        FUN_00401280(uVar4);
        local_8._0_1_ = 0x3b;
        FUN_00987ac0(local_134);
        local_134[0] = std::ios_base::vftable;
        FUN_00aad52d(local_134);
        local_8._0_1_ = 0x26;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        param_1[0x1a] = local_3c.bottom;
        uVar4 = (**(code **)(*(int *)param_1[0x18] + 0x40))
                          ((int *)param_1[0x18],local_3c.bottom,2,param_2,0x40,param_1 + 0x1af29,
                           param_1 + 0x19);
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("graphics.cpp",0xc);
        local_8._0_1_ = 0x3d;
        FUN_004015b0(local_2c,0x14a,3);
        local_8._0_1_ = 0x3e;
        uVar4 = FUN_00987d20(uVar4);
        uVar4 = FUN_004931f0(uVar4);
        FUN_00401280(uVar4);
        local_8._0_1_ = 0x3d;
        FUN_00987ac0(local_134);
        local_134[0] = std::ios_base::vftable;
        FUN_00aad52d(local_134);
        local_8._0_1_ = 0x26;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        goto LAB_0099547e;
      }
      uVar11 = uVar11 + 1;
      uVar9 = (**(code **)(*(int *)param_1[0x18] + 0x10))((int *)param_1[0x18]);
    } while (uVar11 < uVar9);
  }
  if (*(char *)(param_3 + 0x33) == '\0') {
    iVar12 = (**(code **)(*(int *)param_1[0x18] + 0x40))
                       ((int *)param_1[0x18],param_1[0x1a],1,param_2,*(undefined4 *)(param_3 + 0x1c)
                        ,param_1 + 0x1af29,param_1 + 0x19);
    if ((iVar12 < 0) && (*(char *)(param_1 + 0x1ae71) != '\0')) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("graphics.cpp",0xc);
      local_8._0_1_ = 0x3f;
      FUN_004015b0(local_2c,0x163,3);
      local_8._0_1_ = 0x40;
      uVar4 = FUN_00987d20(local_74,&DAT_00dfd420,local_50,"  and default refresh.");
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      FUN_00401280(uVar4);
      local_8._0_1_ = 0x3f;
      FUN_00987ac0(local_134);
      local_134[0] = std::ios_base::vftable;
      FUN_00aad52d(local_134);
      local_8._0_1_ = 0x26;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("graphics.cpp",0xc);
      local_8._0_1_ = 0x41;
      FUN_004015b0(local_2c,0x164,0x1000);
      local_8._0_1_ = 0x42;
      uVar4 = FUN_00987d20();
      FUN_00401280(uVar4);
      local_8._0_1_ = 0x41;
      FUN_00987ac0(local_134);
      local_134[0] = std::ios_base::vftable;
      FUN_00aad52d(local_134);
      local_8._0_1_ = 0x26;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      Sleep(100);
      piVar5 = param_1 + 0x1ae6f;
      *piVar5 = local_74;
      param_1[0x1ae70] = local_50;
      piVar6 = (int *)FUN_009bb460(param_3,&local_54,piVar5,1);
      *piVar5 = *piVar6;
      iVar12 = param_1[0x1af12];
      param_1[0x1ae70] = piVar6[1];
      iVar7 = piVar6[1];
      *(int *)(iVar12 + 0x38) = *piVar6;
      *(int *)(iVar12 + 0x3c) = iVar7;
      param_1[0x1af29] = *piVar5;
      param_1[0x1af2a] = param_1[0x1ae70];
      param_1[0x1af35] = *(undefined4 *)(param_3 + 0x40);
      (**(code **)(*(int *)param_1[0x18] + 0x40))
                ((int *)param_1[0x18],param_1[0x1a],1,param_2,*(undefined4 *)(param_3 + 0x1c),
                 param_1 + 0x1af29,param_1 + 0x19);
      uVar4 = param_1[0x1ae70];
      iVar12 = param_1[0x1af12];
      *(int *)(iVar12 + 0x38) = *piVar5;
      *(undefined4 *)(iVar12 + 0x3c) = uVar4;
    }
  }
  else {
    param_1[0x1a] = 1;
    (**(code **)(*(int *)param_1[0x18] + 0x40))
              ((int *)param_1[0x18],1,1,param_2,0x40,param_1 + 0x1af29);
  }
LAB_0099547e:
  piVar5 = param_1 + 0x19;
  if (*piVar5 != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("graphics.cpp",0xc);
    local_8._0_1_ = 0x43;
    FUN_004015b0(local_2c,0x17f,3);
    local_8._0_1_ = 0x44;
    FUN_00987d20();
    local_8._0_1_ = 0x43;
    FUN_00987ac0(local_134);
    local_134[0] = std::ios_base::vftable;
    FUN_00aad52d(local_134);
    local_8._0_1_ = 0x26;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  if (param_1[0x1af35] != 0) {
    *(undefined4 *)(param_1[0x1af12] + 0x40) = param_1[0x1af35];
  }
  (**(code **)(*(int *)*piVar5 + 0x48))((int *)*piVar5,0,0,0,param_1 + 4);
  (**(code **)(*(int *)*piVar5 + 0xa0))((int *)*piVar5,param_1 + 5);
  param_1[0x1ae0b] = *piVar5;
  param_1[0x1ae1d] = *piVar5;
  param_1[0x1ae1e] = param_1[0x1af12];
  FUN_0099da20();
  (**(code **)(*(int *)*piVar5 + 0x20))((int *)*piVar5,0,local_230);
  switch(local_224) {
  case 0x15:
    uVar4 = 8;
    param_1[0x1e] = 8;
    param_1[0x1c] = 8;
    param_1[0x1f] = 4;
    break;
  case 0x16:
    uVar4 = 8;
    param_1[0x1c] = 8;
    param_1[0x1f] = 4;
    goto LAB_00995610;
  case 0x17:
    param_1[0x1c] = 6;
    goto LAB_00995609;
  case 0x18:
    param_1[0x1c] = 5;
LAB_00995609:
    uVar4 = 5;
    param_1[0x1f] = 2;
LAB_00995610:
    param_1[0x1e] = 0;
    break;
  case 0x19:
    uVar4 = 5;
    param_1[0x1e] = 1;
    param_1[0x1c] = 5;
    param_1[0x1f] = 2;
    break;
  default:
    goto switchD_00995597_caseD_1a;
  case 0x23:
    uVar4 = 10;
    param_1[0x1e] = 2;
    param_1[0x1c] = 10;
    param_1[0x1f] = 4;
  }
  param_1[0x1d] = uVar4;
  param_1[0x1b] = uVar4;
switchD_00995597_caseD_1a:
  (**(code **)(*(int *)*piVar5 + 0x1c))((int *)*piVar5,param_1 + 0x1ae23);
  D3DXCreateEffectPool(param_1 + 0x1ae72);
  param_1[0x1ae74] = 0;
  param_1[0x1ae75] = 0;
  param_1[0x1ae76] = 0;
  param_1[0x1ae77] = 0;
  if (*(char *)(param_1[0x1af12] + 0x50) != '\0') {
    FUN_0099d0c0();
  }
  if (*(char *)(param_1 + 0x1af13) != '\0') {
    if (*(char *)(param_1[0x1af12] + 0x50) == '\0') {
      FUN_0099d060();
      goto LAB_00995739;
    }
    if (*(char *)(param_1 + 0x1af13) != '\0') {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("graphics.cpp",0xc);
      local_8._0_1_ = 0x45;
      FUN_004015b0(local_2c,0x1d6,3);
      local_8._0_1_ = 0x46;
      uVar4 = FUN_00987d20();
      FUN_00401280(uVar4);
      local_8._0_1_ = 0x45;
      FUN_00987ac0(local_134);
      local_134[0] = std::ios_base::vftable;
      FUN_00aad52d(local_134);
      local_8._0_1_ = 0x26;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      goto LAB_00995739;
    }
  }
  *(undefined1 *)(param_1[0x1af12] + 0x50) = 0;
LAB_00995739:
  FUN_0099d200(param_1);
  local_50 = (undefined4 *)param_1[0x1ae70];
  local_54 = param_1[0x1ae6f];
  iVar12 = param_1[0x1ae6f];
  iVar7 = param_1[0x1ae70];
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x82) = 0;
  local_50 = (undefined4 *)FUN_00aae9af(0x378);
  local_8._0_1_ = 0x47;
  if (local_50 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009ae160(local_50,(int)(float)iVar12,(int)(float)iVar7);
  }
  local_8 = CONCAT31(local_8._1_3_,0x26);
  param_1[0x1af21] = uVar4;
  local_b4 = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_b0 = DAT_00f092fc;
  local_c4 = DAT_00f092fc;
  local_d8 = DAT_00f092fc;
  local_ec = DAT_00f092fc;
  (**(code **)(*(int *)*piVar5 + 0xb0))((int *)*piVar5,0x100,&local_ec);
  (**(code **)(*(int *)*piVar5 + 0xb0))((int *)*piVar5,2,&local_ec);
  uVar4 = (**(code **)(*(int *)(param_1[0x1af21] + 0x1c) + 0x174))();
  (**(code **)(*(int *)*piVar5 + 0xb0))((int *)*piVar5,3,uVar4);
  puVar2 = (undefined8 *)param_1[0x1af21];
  local_44 = *puVar2;
  local_3c._0_8_ = puVar2[1];
  local_3c._8_8_ = puVar2[2];
  (**(code **)(*(int *)*piVar5 + 0xbc))((int *)*piVar5,&local_44);
  (**(code **)(*(int *)*piVar5 + 0xa4))((int *)*piVar5);
  (**(code **)(*(int *)*piVar5 + 0xac))((int *)*piVar5,0,0,7,0xff000000,DAT_00f092fc,0);
  (**(code **)(*(int *)*piVar5 + 0xa8))((int *)*piVar5);
  (**(code **)(*(int *)*piVar5 + 0x44))((int *)*piVar5,0,0,0,0);
  param_1[0x1af3b] = 0;
  param_1[0x1af38] = 0;
  param_1[0x1af3a] = 0;
  param_1[0x1af39] = 0;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

