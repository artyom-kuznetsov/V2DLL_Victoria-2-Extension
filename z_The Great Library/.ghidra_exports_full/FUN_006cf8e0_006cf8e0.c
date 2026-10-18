// FUN_006cf8e0 @ 006cf8e0 body=[[006cf8e0, 006cff59] [006cff5d, 006cff94] [006cff98, 006cffb7] [006cffbb, 006d0079] [006d007d, 006d00a2] [006d00a6, 006d0162] [006d0166, 006d019d] [006d01a1, 006d01c0] [006d01c4, 006d0211] [006d0215, 006d0234] [006d0238, 006d024c]]


undefined1 * FUN_006cf8e0(int param_1,undefined1 *param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte bVar6;
  int *in_ECX;
  char *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uStack_16c;
  undefined1 local_b8 [28];
  undefined1 *local_9c;
  undefined4 local_98;
  undefined1 local_94 [28];
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c [5];
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00ba62cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_98 = 1;
  uStack_16c = CONCAT44(0x6cf94c,(undefined4)uStack_16c);
  pbVar2 = (byte *)(**(code **)(*in_ECX + 0x44))();
  if (0xf < *(uint *)(pbVar2 + 0x14)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar7 = "revolt_risk";
  do {
    bVar6 = *pbVar2;
    bVar8 = bVar6 < (byte)*pcVar7;
    if (bVar6 != *pcVar7) {
LAB_006cf980:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_006cf985;
    }
    if (bVar6 == 0) break;
    bVar6 = pbVar2[1];
    bVar8 = bVar6 < (byte)pcVar7[1];
    if (bVar6 != pcVar7[1]) goto LAB_006cf980;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar6 != 0);
  iVar3 = 0;
LAB_006cf985:
  if (iVar3 != 0) {
    uStack_16c = CONCAT44(0x6cf996,(undefined4)uStack_16c);
    pbVar2 = (byte *)(**(code **)(*in_ECX + 0x44))();
    if (0xf < *(uint *)(pbVar2 + 0x14)) {
      pbVar2 = *(byte **)pbVar2;
    }
    pcVar7 = "rebel_icon_revoltrisk";
    do {
      bVar6 = *pbVar2;
      bVar8 = bVar6 < (byte)*pcVar7;
      if (bVar6 != *pcVar7) {
LAB_006cf9c3:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_006cf9c8;
      }
      if (bVar6 == 0) break;
      bVar6 = pbVar2[1];
      bVar8 = bVar6 < (byte)pcVar7[1];
      if (bVar6 != pcVar7[1]) goto LAB_006cf9c3;
      pbVar2 = pbVar2 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar6 != 0);
    iVar3 = 0;
LAB_006cf9c8:
    if (iVar3 != 0) {
      uStack_16c = CONCAT44(0x6cf9d9,(undefined4)uStack_16c);
      (**(code **)(*in_ECX + 0x44))();
      uStack_16c = CONCAT44(0x6cf9e3,(undefined4)uStack_16c);
      cVar1 = FUN_0040b360();
      if (cVar1 == '\0') {
        uStack_16c = CONCAT44(0x6cf9f4,(undefined4)uStack_16c);
        (**(code **)(*in_ECX + 0x44))();
        uStack_16c = CONCAT44(0x6cf9fe,(undefined4)uStack_16c);
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          uStack_16c = CONCAT44(0x6cfa0f,(undefined4)uStack_16c);
          (**(code **)(*in_ECX + 0x44))();
          uStack_16c = CONCAT44(0x6cfa19,(undefined4)uStack_16c);
          cVar1 = FUN_0040b360();
          if (cVar1 == '\0') {
            uStack_16c = CONCAT44(0x6cfa2a,(undefined4)uStack_16c);
            (**(code **)(*in_ECX + 0x44))();
            uStack_16c = CONCAT44(0x6cfa34,(undefined4)uStack_16c);
            cVar1 = FUN_0040b360();
            if (cVar1 == '\0') {
              uStack_16c = CONCAT44(0x6cfa45,(undefined4)uStack_16c);
              (**(code **)(*in_ECX + 0x44))();
              uStack_16c = CONCAT44(0x6cfa4f,(undefined4)uStack_16c);
              cVar1 = FUN_0040b360();
              if (cVar1 == '\0') {
                uStack_16c = CONCAT44(0x6cfa60,(undefined4)uStack_16c);
                (**(code **)(*in_ECX + 0x44))();
                uStack_16c = CONCAT44(0x6cfa6a,(undefined4)uStack_16c);
                cVar1 = FUN_0040b360();
                if (cVar1 == '\0') {
                  uStack_16c = CONCAT44(0x6cfa7b,(undefined4)uStack_16c);
                  (**(code **)(*in_ECX + 0x44))();
                  uStack_16c = CONCAT44(0x6cfa85,(undefined4)uStack_16c);
                  cVar1 = FUN_0040b360();
                  if (cVar1 == '\0') {
                    uStack_16c = CONCAT44(0x6cfa92,(undefined4)uStack_16c);
                    (**(code **)(*in_ECX + 0x44))();
                    uStack_16c = CONCAT44(0x6cfa9c,(undefined4)uStack_16c);
                    cVar1 = FUN_0040b360();
                    if (cVar1 == '\0') {
                      uStack_16c = CONCAT44(*(undefined4 *)(param_1 + 0x28),0x6cfaaf);
                      FUN_0041a080();
                      uStack_16c = 0xffffffff00000000;
                      local_8 = 0x28;
                      FUN_00408ed0();
                      local_8 = local_8 & 0xffffff00;
                      uStack_16c = CONCAT44(0x6cfacd,(undefined4)uStack_16c);
                      FUN_00408ad0();
                      uStack_16c = CONCAT44(0x6cfad8,(undefined4)uStack_16c);
                      FUN_004e42c0();
                      uStack_16c = 0xffffffff00000000;
                      local_8 = 0x29;
                      FUN_00408ed0();
                      uStack_16c = CONCAT44(0x6cfaf3,(undefined4)uStack_16c);
                      FUN_00408ad0();
                      ExceptionList = local_10;
                      return param_2;
                    }
                  }
                  uStack_16c = CONCAT44(0x6cfb05,(undefined4)uStack_16c);
                  FUN_009885d0();
                  local_8 = 0x1e;
                  uStack_16c = CONCAT44(0x6cfb19,(undefined4)uStack_16c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x1f;
                  uStack_16c = CONCAT44(0x6cfb2a,(undefined4)uStack_16c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x20;
                  uStack_16c = CONCAT44(*(undefined4 *)(param_1 + 0x28),0x6cfb40);
                  uVar4 = FUN_004e8f90();
                  uStack_16c = CONCAT44(local_40,local_24);
                  local_8._0_1_ = 0x21;
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x22;
                  uStack_16c = CONCAT44(0x6cfb5e,(undefined4)uStack_16c);
                  iVar3 = FUN_00475500();
                  uStack_16c = *(undefined8 *)(iVar3 + 0x74);
                  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
                  local_8._0_1_ = 0x23;
                  uStack_16c = CONCAT44(local_78,0x6cfb99);
                  FUN_00988f20();
                  local_8._0_1_ = 0x24;
                  uStack_16c = CONCAT44(uVar4,0x6cfbab);
                  FUN_00988f20();
                  local_8._0_1_ = 0x25;
                  uStack_16c = CONCAT44(local_5c,0x6cfbc0);
                  FUN_00988f20();
                  uStack_16c = 0xffffffff00000000;
                  local_8._0_1_ = 0x26;
                  FUN_00408ed0();
                  uStack_16c = CONCAT44(0x6cfbd7,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(0x6cfbe2,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(0x6cfbed,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(0x6cfbf8,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x21;
                  uStack_16c = CONCAT44(local_24,0x6cfc05);
                  FUN_009a9740();
                  uStack_16c = CONCAT44(0x6cfc10,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(0x6cfc18,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(0x6cfc20,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  uStack_16c = CONCAT44(0x6cfc2c,(undefined4)uStack_16c);
                  FUN_00408ad0();
                  uStack_16c = CONCAT44(local_94,0x6cfc38);
                  FUN_004e9040();
                  local_8 = 0x27;
                  goto LAB_006cfc3f;
                }
              }
              uStack_16c = CONCAT44(0x6cfc69,(undefined4)uStack_16c);
              FUN_009885d0();
              local_8 = 0x12;
              uStack_16c = CONCAT44(0x6cfc7d,(undefined4)uStack_16c);
              FUN_009885d0();
              uStack_16c = CONCAT44(local_5c,local_24);
              local_8._0_1_ = 0x13;
              FUN_009a8ee0();
              local_8._0_1_ = 0x14;
              uStack_16c = CONCAT44(0x6cfc98,(undefined4)uStack_16c);
              iVar3 = FUN_00475500();
              uStack_16c = *(undefined8 *)(iVar3 + 0x74);
              FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
              local_8._0_1_ = 0x15;
              uStack_16c = CONCAT44(local_40,0x6cfcd2);
              FUN_00988f20();
              uStack_16c = 0xffffffff00000000;
              local_8._0_1_ = 0x16;
              FUN_00408ed0();
              uStack_16c = CONCAT44(0x6cfce9,(undefined4)uStack_16c);
              FUN_00408ad0();
              uStack_16c = CONCAT44(0x6cfcf4,(undefined4)uStack_16c);
              FUN_00408ad0();
              local_8._0_1_ = 0x13;
              uStack_16c = CONCAT44(local_24,0x6cfd01);
              FUN_009a9740();
              uStack_16c = CONCAT44(0x6cfd09,(undefined4)uStack_16c);
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_16c = CONCAT44(0x6cfd15,(undefined4)uStack_16c);
              FUN_00408ad0();
              uStack_16c = CONCAT44(0x6cfd22,(undefined4)uStack_16c);
              FUN_009885d0();
              uStack_16c = CONCAT44(local_5c,local_24);
              local_8 = 0x17;
              FUN_009a8ee0();
              local_8._0_1_ = 0x18;
              uStack_16c = CONCAT44(0x6cfd40,(undefined4)uStack_16c);
              iVar3 = FUN_00475500();
              uStack_16c = *(undefined8 *)(iVar3 + 0x74);
              FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
              local_8._0_1_ = 0x19;
              uStack_16c = 0xffffffff00000000;
              FUN_00448aa0();
              uStack_16c = CONCAT44(0x6cfd7c,(undefined4)uStack_16c);
              FUN_00408ad0();
              local_8._0_1_ = 0x17;
              uStack_16c = CONCAT44(local_24,0x6cfd89);
              FUN_009a9740();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_16c = CONCAT44(0x6cfd95,(undefined4)uStack_16c);
              FUN_00408ad0();
              uStack_16c = CONCAT44(0x6cfda1,(undefined4)uStack_16c);
              FUN_00989030();
              uStack_16c = CONCAT44(0x6cfdae,(undefined4)uStack_16c);
              FUN_009885d0();
              uStack_16c = 0xded94d;
              local_8 = 0x1a;
              uVar4 = FUN_004e8bb0();
              FUN_009c99e0(local_b8,uVar4);
              local_8._0_1_ = 0x1b;
              uStack_16c = CONCAT44(local_5c,0x6cfdf0);
              FUN_00988f20();
              uStack_16c = 0xffffffff00000000;
              local_8._0_1_ = 0x1c;
              FUN_00448aa0();
              uStack_16c = CONCAT44(0x6cfe07,(undefined4)uStack_16c);
              FUN_00408ad0();
              uStack_16c = CONCAT44(0x6cfe12,(undefined4)uStack_16c);
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              uStack_16c = CONCAT44(0x6cfe1e,(undefined4)uStack_16c);
              FUN_00408ad0();
              uStack_16c = CONCAT44(local_94,*(undefined4 *)(param_1 + 0x28));
              FUN_004e8c70();
              local_8 = 0x1d;
              goto LAB_006cfc3f;
            }
          }
          uStack_16c = CONCAT44(0x6cfe47,(undefined4)uStack_16c);
          FUN_009885d0();
          uStack_16c = CONCAT44(local_5c,local_24);
          local_8 = 0xe;
          FUN_009a8ee0();
          local_8._0_1_ = 0xf;
          uStack_16c = CONCAT44(0x6cfe65,(undefined4)uStack_16c);
          iVar3 = FUN_00475500();
          uStack_16c = *(undefined8 *)(iVar3 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
          uStack_16c = 0xffffffff00000000;
          local_8._0_1_ = 0x10;
          FUN_00408ed0();
          uStack_16c = CONCAT44(0x6cfea1,(undefined4)uStack_16c);
          FUN_00408ad0();
          local_8._0_1_ = 0xe;
          uStack_16c = CONCAT44(local_24,0x6cfeae);
          FUN_009a9740();
          local_8 = (uint)local_8._1_3_ << 8;
          uStack_16c = CONCAT44(0x6cfeba,(undefined4)uStack_16c);
          FUN_00408ad0();
          uStack_16c = CONCAT44(local_94,*(undefined4 *)(param_1 + 0x28));
          FUN_004e8c70();
          local_8 = 0x11;
LAB_006cfc3f:
          uStack_16c = 0xffffffff00000000;
          FUN_00408ed0();
          uStack_16c = CONCAT44(0x6cfc57,(undefined4)uStack_16c);
          FUN_00408ad0();
          ExceptionList = local_10;
          return param_2;
        }
      }
      uStack_16c = 0x1600e0d7a8;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      FUN_00409350();
      uStack_16c = CONCAT44(local_78,local_24);
      local_8 = 9;
      FUN_009a8ee0();
      local_8._0_1_ = 10;
      uStack_16c = CONCAT44(0x6cff19,(undefined4)uStack_16c);
      iVar3 = FUN_00475500();
      uStack_16c = *(undefined8 *)(iVar3 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      uStack_16c = 0xffffffff00000000;
      local_8._0_1_ = 0xb;
      FUN_00408ed0();
      if (0xf < local_2c) {
        uStack_16c = CONCAT44(local_40[0],&UNK_006cff5a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      local_8._0_1_ = 0xc;
      uStack_16c = CONCAT44(0x6cff7b,(undefined4)uStack_16c);
      FUN_009adb70();
      if (local_20 != 0) {
        uStack_16c = CONCAT44(0x6cff8c,(undefined4)uStack_16c);
        FUN_009e6a80();
        uStack_16c = CONCAT44(local_20,&UNK_006cff95);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0xf < local_64) {
        uStack_16c = CONCAT44(local_78[0],&UNK_006cffb8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_16c = CONCAT44(local_5c,*(undefined4 *)(param_1 + 0x28));
      FUN_004e8c70();
      uStack_16c = 0xffffffff00000000;
      local_8 = 0xd;
      FUN_00408ed0();
      if (local_48 < 0x10) {
        ExceptionList = local_10;
        return param_2;
      }
      uStack_16c._4_4_ = local_5c[0];
      goto LAB_006d0230;
    }
  }
  local_9c = (undefined1 *)&uStack_16c;
  uStack_16c._4_4_ = 1;
  uStack_16c._0_1_ = bVar6;
  piVar5 = (int *)FUN_004e9130();
  uVar9 = __allmul(*piVar5,*piVar5 >> 0x1f,100000,0);
  uVar4 = __alldiv(uVar9,1000,0);
  uStack_16c = CONCAT44(uStack_16c._4_4_,uVar4);
  uVar4 = FUN_00988a50();
  uStack_16c = CONCAT44(uVar4,local_40);
  local_8 = 1;
  FUN_0042c180();
  uStack_16c = 0xffffffff00000000;
  local_8._0_1_ = 2;
  FUN_00408ed0();
  if (0xf < local_2c) {
    uStack_16c = CONCAT44(local_40[0],&UNK_006d007a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
    uStack_16c = CONCAT44(local_5c[0],&UNK_006d00a3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_16c = 0x6d00b3;
  FUN_008a8650();
  uStack_16c = 0x1700e0d778;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350();
  uStack_16c = CONCAT44(local_78,local_24);
  local_8 = 3;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  uStack_16c = CONCAT44(0x6d0121,(undefined4)uStack_16c);
  iVar3 = FUN_00475500();
  uStack_16c = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  uStack_16c = 0xffffffff00000000;
  local_8._0_1_ = 5;
  FUN_00408ed0();
  if (0xf < local_2c) {
    uStack_16c = CONCAT44(local_40[0],&UNK_006d0163);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_8._0_1_ = 6;
  uStack_16c = CONCAT44(0x6d0184,(undefined4)uStack_16c);
  FUN_009adb70();
  if (local_20 != 0) {
    uStack_16c = CONCAT44(0x6d0195,(undefined4)uStack_16c);
    FUN_009e6a80();
    uStack_16c = CONCAT44(local_20,&UNK_006d019e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_64) {
    uStack_16c = CONCAT44(local_78[0],&UNK_006d01c1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_16c = CONCAT44(0x6d01db,(undefined4)uStack_16c);
  uVar4 = FUN_004eac30();
  local_8 = 7;
  uStack_16c = CONCAT44(uVar4,0x6d01f0);
  FUN_00988fa0();
  uStack_16c = 0xffffffff00000000;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00448aa0();
  if (0xf < local_2c) {
    uStack_16c = CONCAT44(local_40[0],&UNK_006d0212);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (local_48 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
  uStack_16c._4_4_ = local_5c[0];
LAB_006d0230:
  uStack_16c = CONCAT44(uStack_16c._4_4_,&UNK_006d0235);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

