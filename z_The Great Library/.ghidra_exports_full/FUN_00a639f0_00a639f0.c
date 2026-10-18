// FUN_00a639f0 @ 00a639f0 body=[[00a639f0, 00a63c4e] [00a63c52, 00a63dbd] [00a63dc1, 00a63f47] [00a63f4b, 00a64003] [00a6400c, 00a640c1] [00a640c5, 00a64123]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00a639f0(char param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  int *in_ECX;
  uint unaff_EDI;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 uStack_200;
  int *local_1f8;
  undefined4 local_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e0;
  uint uStack_1dc;
  int *local_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c4;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined **appuStack_140 [4];
  undefined **appuStack_130 [4];
  undefined **appuStack_120 [44];
  undefined **appuStack_70 [17];
  undefined4 uStack_2c;
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5ce9e;
  pvStack_14 = ExceptionList;
  uStack_200 = (uint)(uint3)uStack_200;
  ExceptionList = &pvStack_14;
  local_1d4 = in_ECX;
  if (in_ECX[0x3e] != 0) {
    ExceptionList = &pvStack_14;
    if (DAT_00f20c18 == (int *)0x0) {
      ExceptionList = &pvStack_14;
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    piVar3 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
    in_ECX[0x3e] = (int)piVar3;
    (**(code **)(*piVar3 + 4))();
  }
  local_1f8 = (int *)in_ECX[0x3d];
  local_1f4 = CONCAT22(local_1f4._2_2_,(short)in_ECX[5]);
  *(int **)(in_ECX[7] + 0xf8) = local_1f8;
  iVar4 = FUN_00a8aaf0(in_ECX[6]);
  DVar5 = timeGetTime();
  DAT_012586d0 = DVar5 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  if (iVar4 != 0) {
    in_ECX[0x3a] = iVar4;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar3 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  local_1f8 = piVar3;
  (**(code **)(*piVar3 + 4))();
  fVar9 = (float10)(**(code **)(*piVar3 + 0x14))();
  if ((float10)3.0 <= fVar9) {
LAB_00a6400c:
    uStack_1a0 = 0xf;
    uStack_1a4 = 0;
    uStack_1b4 = uStack_1b4 & 0xffffff00;
    FUN_00409350("server.cpp",10);
    uStack_c = 8;
    uVar6 = FUN_004015b0(&uStack_1b4,0x543,0x301);
    uStack_c = CONCAT31(uStack_c._1_3_,9);
    FUN_00987d50(uVar6,"Connection Failed",0x11,0);
    FUN_00401280(uVar6);
    uStack_1c = CONCAT31(uStack_1c._1_3_,8);
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    uStack_1c = 0xffffffff;
    if (uStack_1b0 < 0x10) {
      uStack_1b0 = 0xf;
      uStack_1b4 = 0;
      uStack_1c4 = uStack_1c4 & 0xffffff00;
      DVar5 = timeGetTime();
      DAT_012586d0 = DVar5 - _DAT_01258b70;
      FUN_00a899f0(0,0);
      FUN_00a8a450();
      FUN_00a8a360();
      ExceptionList = pvStack_24;
      return unaff_EDI >> 0x18;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_1c4);
  }
  while( true ) {
    iVar4 = FUN_00a89d00(in_ECX[6],&iStack_1d0,0x23);
    uVar2 = uStack_200;
    while (uStack_200._3_1_ = (char)(uVar2 >> 0x18), uStack_200 = uVar2, 0 < iVar4) {
      Sleep(0x23);
      bVar8 = uStack_200._3_1_ == '\0';
      if ((bVar8) && (iStack_1d0 == 1)) {
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        uStack_1f0 = uStack_1f0 & 0xffffff00;
        FUN_00409350("server.cpp",10);
        uStack_c = 0;
        piVar3 = (int *)FUN_004015b0(&uStack_1f0,0x4f4,0x301);
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        FUN_00987d50(piVar3,"Found server...",0xf,0);
        FUN_00408be0(piVar3);
        uVar7 = 0;
        if (((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) &&
           (iVar4 = (**(code **)(**(int **)(*(int *)(*piVar3 + 4) + 0x38 + (int)piVar3) + 0x34))(),
           iVar4 == -1)) {
          uVar7 = 4;
        }
        if (uVar7 != 0) {
          uVar7 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0xc) | uVar7;
          if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x38) == 0) {
            uVar7 = uVar7 | 4;
          }
          FUN_00401120(uVar7,0);
        }
        uStack_c = uStack_c & 0xffffff00;
        FUN_00987ac0(appuStack_120);
        appuStack_120[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_120);
        uStack_c = 0xffffffff;
        if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_1f0);
        }
        in_ECX = local_1d4;
        if (param_1 == '\0') {
          uStack_200._0_3_ = (uint3)uVar2;
          uStack_200 = CONCAT13(1,(uint3)uStack_200);
        }
      }
      iVar4 = FUN_00a89d00(in_ECX[6],&iStack_1d0,0x23);
      uVar2 = uStack_200;
    }
    DVar5 = timeGetTime();
    DAT_012586d0 = DVar5 - _DAT_01258b70;
    FUN_00a899f0(0,0);
    Sleep(0x23);
    if (uStack_200._3_1_ != '\0') break;
    fVar9 = (float10)(**(code **)(*local_1f8 + 0x14))();
    if ((float10)3.0 <= fVar9) goto LAB_00a63e87;
  }
  local_1f8 = (int *)&DAT_00000008;
  local_1f4 = 0;
  (**(code **)(*in_ECX + 0x14))(&local_1f8,8,0,1);
  DVar5 = timeGetTime();
  DAT_012586d0 = DVar5 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  uStack_1cc = 0xf;
  iStack_1d0 = 0;
  uStack_1e0 = uStack_1e0 & 0xffffff00;
  FUN_00409350("server.cpp",10);
  uStack_1c = 2;
  uVar6 = FUN_004015b0(&uStack_1e0,0x522,0x301);
  uStack_1c = CONCAT31(uStack_1c._1_3_,3);
  FUN_00987d50(uVar6,"Requesting machine id",0x15,0);
  FUN_00401280(uVar6);
  uStack_2c = CONCAT31(uStack_2c._1_3_,2);
  FUN_00987ac0(appuStack_140);
  appuStack_140[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_140);
  uStack_2c = 0xffffffff;
  if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_1f0);
  }
  uStack_1dc = 0xf;
  uStack_1e0 = 0;
  uStack_1f0 = uStack_1f0 & 0xffffff00;
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar3 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  (**(code **)(*piVar3 + 4))();
  iVar1 = *(int *)(in_ECX[7] + 0x2c);
  while ((((iVar1 != 4 && (iVar1 = *(int *)(in_ECX[7] + 0x2c), iVar1 != 6)) && (iVar1 != 9)) &&
         ((iVar1 != 0xe && (fVar9 = (float10)(**(code **)(*piVar3 + 0x14))(), fVar9 < (float10)30.0)
          )))) {
    FUN_009af9f0(in_ECX[7]);
    Sleep(0x1e);
    iVar1 = *(int *)(in_ECX[7] + 0x2c);
  }
  (**(code **)*piVar3)(1);
  iVar1 = *(int *)(in_ECX[7] + 0x2c);
  if (((iVar1 == 4) || (iVar1 == 6)) ||
     ((iVar1 == 9 || (uStack_200 = uVar2 & 0xffffff, iVar1 == 0xe)))) {
    uStack_200 = CONCAT13(1,(uint3)uStack_200);
  }
LAB_00a63e87:
  if (iVar4 == -1) {
    uStack_1dc = 0xf;
    uStack_1e0 = 0;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    FUN_00409350("server.cpp",10);
    uStack_c = 4;
    uVar6 = FUN_004015b0(&uStack_1f0,0x53d,0x301);
    uStack_c._0_1_ = 5;
    FUN_00987d50(uVar6,"Network service call failed",0x1b,0);
    FUN_00401280(uVar6);
    uStack_c = CONCAT31(uStack_c._1_3_,4);
    FUN_00987ac0(appuStack_120);
    appuStack_120[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_120);
    uStack_c = 0xffffffff;
    if (0xf < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1f0);
    }
  }
  if (uStack_200._3_1_ != '\0') {
    uStack_1dc = 0xf;
    uStack_1e0 = 0;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    FUN_00409350("server.cpp",10);
    uStack_c = 6;
    uVar6 = FUN_004015b0(&uStack_1f0,0x540,0x301);
    uStack_c = CONCAT31(uStack_c._1_3_,7);
    FUN_00987d50(uVar6,"Connection Succeeded",0x14,0);
    FUN_00401280(uVar6);
    uStack_1c = CONCAT31(uStack_1c._1_3_,6);
    FUN_00987ac0(appuStack_130);
    appuStack_130[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_130);
    if (uStack_1ec < 0x10) {
      ExceptionList = pvStack_24;
      return unaff_EDI >> 0x18;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_200);
  }
  goto LAB_00a6400c;
}

