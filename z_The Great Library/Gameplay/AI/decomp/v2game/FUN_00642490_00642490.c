// FUN_00642490 @ 00642490 body=[[00642490, 00643018] [00643020, 006430ad]]


void FUN_00642490(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int *piVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  int local_2c;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  float local_18;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  if (*(char *)(*(int *)(param_1 + 8) + 0x2a) != '\0') {
    FUN_00415ac0(param_1 + 0xac,param_4[0xe96],param_4,*(undefined4 *)(param_1 + 0xc));
  }
  local_20 = DAT_012588e8 + 0xb5c;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar10 = *(int *)(DAT_012588e8 + 0xb28);
    piVar1 = (int *)**(int **)(param_1 + 0x24);
    (**(code **)(*piVar1 + 0x34))();
    (**(code **)(*piVar1 + 0xbc))((float)iVar10 + 1.0);
    if (DAT_00f092fc <= (float)piVar1[0x70]) {
      for (puVar2 = *(undefined4 **)(param_1 + 0x24);
          (puVar2 != (undefined4 *)0x0 && ((int *)*puVar2 != piVar1));
          puVar2 = (undefined4 *)puVar2[2]) {
      }
      FUN_005f2ae0(puVar2);
      iVar10 = *(int *)(param_1 + 0x18);
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = (int)piVar1;
        piVar7[1] = iVar10;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar9 = *(int *)(param_1 + 0x1c);
      *(int **)(param_1 + 0x18) = piVar7;
      *(int *)(param_1 + 0x1c) = iVar9 + 1;
      if (iVar9 == 0) {
        *(int **)(param_1 + 0x14) = piVar7;
      }
      else {
        *(int **)(iVar10 + 8) = piVar7;
      }
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    local_18 = (float)*(int *)(DAT_012588e8 + 0xb28) + 1.0;
    while (piVar1 != (int *)0x0) {
      piVar7 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      (**(code **)(*piVar7 + 0xbc))(local_18);
      if ((char)piVar7[0x73] != '\0') {
        for (puVar2 = *(undefined4 **)(param_1 + 0x14);
            (puVar2 != (undefined4 *)0x0 && ((int *)*puVar2 != piVar7));
            puVar2 = (undefined4 *)puVar2[2]) {
        }
        FUN_005f2ae0(puVar2);
        FUN_009962f0(param_4 + 0x6b1);
      }
    }
  }
  if ((*(char *)(*(int *)(param_1 + 8) + 0x28) != '\0') && (*(int **)(param_1 + 0x78) != (int *)0x0)
     ) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
    uVar8 = (**(code **)(**(int **)(param_1 + 0x78) + 0x44))();
    FUN_009962f0(uVar8);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  iVar10 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar10 + 300) == 0) {
LAB_006427ca:
    if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x38))();
      uVar8 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x44))();
      FUN_009962f0(uVar8);
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  else {
    local_1c = *(undefined4 *)(iVar10 + 0x128);
    cVar6 = FUN_00545a20(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 300) * 4));
    if (cVar6 == '\0') goto LAB_006427ca;
    if (*(int **)(param_1 + 0x7c) == (int *)0x0) {
      iVar9 = FUN_004dad40();
      iVar10 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(*(int *)(iVar9 + 0x34) + 0x58) * 0x10 + *(int *)(iVar10 + 0x330);
      local_38 = *(float *)(iVar9 + 8) - (float)*(int *)(iVar10 + 0x74);
      auVar14 = ZEXT416(0);
      local_30 = *(float *)(iVar9 + 0xc) - (float)*(int *)(iVar10 + 0x78);
      local_34 = 0;
      FUN_009885d0();
      local_8 = 0;
      uVar8 = FUN_009964f0(*param_4);
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
      local_8 = 0xffffffff;
      FUN_00408ad0();
      if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7c) + 0x84))(&local_38);
        iVar10 = **(int **)(param_1 + 0x7c);
        FUN_00415a80();
        (**(code **)(iVar10 + 0x94))(auVar14._0_4_);
        FUN_00644b40(*(undefined4 *)(param_1 + 0x7c),1);
        (**(code **)(**(int **)(param_1 + 0x7c) + 0x34))();
      }
    }
    else {
      cVar6 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x3c))();
      if (cVar6 == '\0') {
        (**(code **)(**(int **)(param_1 + 0x7c) + 0x34))();
      }
    }
  }
  if ((((*(int **)(param_1 + 0x84) != (int *)0x0) &&
       (cVar6 = (**(code **)(**(int **)(param_1 + 0x84) + 0x3c))(), cVar6 == '\0')) &&
      (piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 800), piVar1 != (int *)0x0)) &&
     ((cVar6 = (**(code **)(*piVar1 + 0x38))(), cVar6 != '\0' &&
      (*(int *)(*(int *)(param_1 + 0xc) + 300) == *(int *)(local_20 + 4))))) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x60))(piVar1[0x13] + 1);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x34))();
  }
  if ((*(int **)(param_1 + 0x80) != (int *)0x0) &&
     (cVar6 = (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))(), cVar6 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x80) + 0x34))();
  }
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x110) == 0) ||
     ((DAT_00f092fb != '\0' && (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x5c) + 0x360) < 1)))) {
    if (*(int **)(param_1 + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
      uVar8 = (**(code **)(**(int **)(param_1 + 0x78) + 0x44))();
      FUN_009962f0(uVar8);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  else if (*(int **)(param_1 + 0x78) == (int *)0x0) {
    iVar10 = *(int *)(param_1 + 8);
    local_44 = (float)*(int *)(iVar10 + 0x7c) - (float)*(int *)(iVar10 + 0x74);
    local_3c = (float)*(int *)(iVar10 + 0x80) - (float)*(int *)(iVar10 + 0x78);
    local_40 = 0;
    FUN_009885d0();
    local_8 = 1;
    uVar8 = FUN_009964f0(*param_4);
    *(undefined4 *)(param_1 + 0x78) = uVar8;
    local_8 = 0xffffffff;
    FUN_00408ad0();
    if (*(int **)(param_1 + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x78) + 0x84))(&local_44);
      FUN_00644b40(*(undefined4 *)(param_1 + 0x78),1);
      (**(code **)(**(int **)(param_1 + 0x78) + 0x34))();
      (**(code **)(**(int **)(param_1 + 0x78) + 0x48))(2);
    }
  }
  else {
    cVar6 = (**(code **)(**(int **)(param_1 + 0x78) + 0x3c))();
    if (cVar6 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x78) + 0x34))();
    }
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0xfc);
  local_18 = *(float *)(*(int *)(param_1 + 0xc) + 0x104);
  local_13 = '\0';
  local_14 = '\0';
  param_3._3_1_ = '\0';
  local_12 = '\0';
  local_11 = '\0';
joined_r0x006429fa:
  if (piVar1 != (int *)0x0) {
    piVar7 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    local_18 = (float)((int)local_18 + -1);
    (**(code **)(*piVar7 + 0x8c))(0x3dcccccd,param_5,local_18);
    if ((piVar7[0x44] != 0) && (cVar6 = (**(code **)(*(int *)piVar7[0x44] + 0x3c))(), cVar6 == '\0')
       ) {
      (**(code **)(*(int *)piVar7[0x44] + 0x34))();
    }
    cVar6 = (**(code **)(*piVar7 + 0x38))();
    if ((cVar6 != '\0') && (iVar10 = (**(code **)(*piVar7 + 0x2c))(), *(int *)(iVar10 + 0x1b4) != 0)
       ) {
      piVar12 = (int *)piVar7[0x43];
      if (0 < piVar7[0x3b]) {
        if ((piVar12 != (int *)0x0) && (cVar6 = (**(code **)(*piVar12 + 0x3c))(), cVar6 == '\0')) {
          (**(code **)(*(int *)piVar7[0x43] + 0x34))();
        }
        goto LAB_00642a9c;
      }
LAB_00642afa:
      if ((piVar12 != (int *)0x0) && (cVar6 = (**(code **)(*piVar12 + 0x3c))(), cVar6 != '\0')) {
        piVar7 = (int *)piVar7[0x43];
        goto LAB_00642c80;
      }
      goto joined_r0x006429fa;
    }
LAB_00642a9c:
    if ((((piVar7[0x31] != *(int *)(local_20 + 4)) &&
         (local_2c = piVar7[0x30],
         *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar7[0x31] * 4) + 0xbe8)
                          + *(int *)(local_20 + 4) * 4) + 0x20) == 0)) && (DAT_00f092fb != '\0')) &&
       (*(int *)(*(int *)(piVar7[0x37] + 0x5c) + 0x360) < 1)) {
      piVar12 = (int *)piVar7[0x43];
      goto LAB_00642afa;
    }
    cVar6 = (**(code **)(*piVar7 + 0x3c))();
    if ((cVar6 != '\0') && (*(char *)(*(int *)(piVar7[0x37] + 0x5c) + 0x2a) != '\0')) {
      if (((int *)piVar7[0x43] != (int *)0x0) &&
         (cVar6 = (**(code **)(*(int *)piVar7[0x43] + 0x3c))(), cVar6 != '\0')) {
        (**(code **)(*(int *)piVar7[0x43] + 0x38))();
      }
      goto joined_r0x006429fa;
    }
    cVar6 = (**(code **)(*piVar7 + 0x38))();
    if ((((cVar6 != '\0') &&
         ((*(char *)(*(int *)(piVar7[0x37] + 0x5c) + 0x2a) != '\0' &&
          (iVar10 = (**(code **)(*piVar7 + 0x2c))(), *(int *)(iVar10 + 0x1b4) != 0)))) &&
        ((int *)piVar7[0x43] != (int *)0x0)) &&
       (cVar6 = (**(code **)(*(int *)piVar7[0x43] + 0x3c))(), cVar6 != '\0')) {
      (**(code **)(*(int *)piVar7[0x43] + 0x38))();
    }
    bVar4 = true;
    if (piVar7[0x1d] == 0) {
      cVar6 = (**(code **)(*piVar7 + 0x40))();
      if (cVar6 == '\0') {
        if ((piVar7[0x3b] < 1) || (cVar6 = (**(code **)(*piVar7 + 0x3c))(), cVar6 != '\0')) {
          if (local_12 == '\x01') {
            bVar4 = false;
          }
          else {
            local_12 = '\x01';
          }
        }
        else if (local_11 == '\x01') {
          bVar4 = false;
        }
        else {
          local_11 = '\x01';
        }
      }
      else if (param_3._3_1_ == '\x01') {
        bVar4 = false;
      }
      else {
LAB_00642c25:
        param_3._3_1_ = '\x01';
      }
    }
    else {
      cVar6 = (**(code **)(*piVar7 + 0x40))();
      if (cVar6 == '\0') {
        cVar6 = FUN_005cf260();
        if (cVar6 == '\0') {
          if (local_14 == '\x01') {
            bVar4 = false;
          }
          else {
            local_14 = '\x01';
          }
        }
        else if (local_13 == '\x01') {
          bVar4 = false;
        }
        else {
          local_13 = '\x01';
        }
      }
      else {
        if (param_3._3_1_ != '\x01') goto LAB_00642c25;
        bVar4 = false;
      }
    }
    piVar7 = (int *)piVar7[0x43];
    if (piVar7 == (int *)0x0) goto joined_r0x006429fa;
    if ((bVar4) || (DAT_013f0840 != 0)) {
      pcVar11 = *(code **)(*piVar7 + 0x34);
    }
    else {
      if (piVar7 == (int *)0x0) goto joined_r0x006429fa;
LAB_00642c80:
      pcVar11 = *(code **)(*piVar7 + 0x38);
    }
    (*pcVar11)();
    goto joined_r0x006429fa;
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    cVar6 = (**(code **)(**(int **)(param_1 + 0x34) + 0x3c))();
    if (cVar6 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x34))();
    }
    (**(code **)(**(int **)(param_1 + 0x34) + 0xbc))(0x3dcccccd);
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  iVar10 = 0;
  iVar9 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2;
  if (0 < iVar9) {
    do {
      if ((*(int *)(*(int *)(param_1 + 0x54) + iVar10 * 4) != 0) &&
         (cVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar10 * 4) + 0x3c))(),
         cVar6 == '\0')) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar10 * 4) + 0x34))();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  if ((*(int **)(param_1 + 0x74) != (int *)0x0) &&
     (cVar6 = (**(code **)(**(int **)(param_1 + 0x74) + 0x3c))(), cVar6 == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x34))();
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    local_2c = *(int *)(*(int *)(param_1 + 0xc) + 0x128);
    iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                     *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                      *(int *)(*(int *)(param_1 + 0xc) + 300) * 4) + 0xbe4) * 4);
    cVar6 = (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
    if ((cVar6 == '\0') || (iVar10 == *(int *)(param_1 + 0xc))) {
      cVar6 = (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
      if ((cVar6 != '\0') || (iVar10 != *(int *)(param_1 + 0xc))) goto LAB_00642d94;
      pcVar11 = *(code **)(**(int **)(param_1 + 0x38) + 0x34);
    }
    else {
      pcVar11 = *(code **)(**(int **)(param_1 + 0x38) + 0x38);
    }
    (*pcVar11)();
  }
LAB_00642d94:
  iVar10 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar10 + 0x134) == 0) || (*(int *)(iVar10 + 300) == 0)) {
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 0x38))();
      FUN_009962f0(param_4 + 3);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
      FUN_009962f0(param_4 + 0x535);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    piVar1 = (int *)(param_1 + 0x58);
    piVar7 = (int *)(param_1 + 0x54);
    param_1 = 0;
    if (0 < (int)(*piVar1 - *piVar7 & 0xfffffffcU)) {
      do {
        piVar1 = *(int **)(*(int *)(iVar5 + 0x54) + param_1 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x38))();
          FUN_009962f0(param_4 + 0x535);
          *(undefined4 *)(*(int *)(iVar5 + 0x54) + param_1 * 4) = 0;
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(iVar5 + 0x58) - *(int *)(iVar5 + 0x54) >> 2);
    }
    if (*(int **)(iVar5 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0x74) + 0x38))();
      FUN_009962f0(param_4 + 0x535);
      *(undefined4 *)(iVar5 + 0x74) = 0;
    }
    local_24 = 0x4e4f4e;
    *(undefined4 *)(iVar5 + 0x4c) = 0x4e4f4e;
    *(undefined4 *)(iVar5 + 0x50) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x88) % 0xf == 0) {
      FUN_00643ce0(param_1,iVar10,param_4);
      FUN_006430b0(param_1,*(undefined4 *)(param_1 + 0xc),param_4);
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x188) + 0x24))();
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x5c) + 0x28) = 0;
  }
  fVar13 = DAT_00f092fc;
  if ((DAT_00f092fb != '\0') && (*(int *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x5c) + 0x360) < 1)) {
    fVar13 = 0.0;
  }
  iVar10 = 0;
  iVar9 = *(int *)(iVar5 + 0x58) - *(int *)(iVar5 + 0x54) >> 2;
  if (3 < iVar9) {
    do {
      if (*(int *)(*(int *)(iVar5 + 0x54) + iVar10 * 4) != 0) {
        *(float *)(*(int *)(*(int *)(iVar5 + 0x54) + iVar10 * 4) + 0x198) = fVar13;
      }
      if (*(int *)(*(int *)(iVar5 + 0x54) + 4 + iVar10 * 4) != 0) {
        *(float *)(*(int *)(*(int *)(iVar5 + 0x54) + 4 + iVar10 * 4) + 0x198) = fVar13;
      }
      if (*(int *)(*(int *)(iVar5 + 0x54) + 8 + iVar10 * 4) != 0) {
        *(float *)(*(int *)(*(int *)(iVar5 + 0x54) + 8 + iVar10 * 4) + 0x198) = fVar13;
      }
      if (*(int *)(*(int *)(iVar5 + 0x54) + 0xc + iVar10 * 4) != 0) {
        *(float *)(*(int *)(*(int *)(iVar5 + 0x54) + 0xc + iVar10 * 4) + 0x198) = fVar13;
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < iVar9 + -3);
  }
  for (; iVar10 < iVar9; iVar10 = iVar10 + 1) {
    if (*(int *)(*(int *)(iVar5 + 0x54) + iVar10 * 4) != 0) {
      *(float *)(*(int *)(*(int *)(iVar5 + 0x54) + iVar10 * 4) + 0x198) = fVar13;
    }
  }
  iVar10 = 0;
  iVar9 = *(int *)(iVar5 + 0x9c) - *(int *)(iVar5 + 0x98) >> 3;
  if (3 < iVar9) {
    do {
      iVar3 = *(int *)(*(int *)(iVar5 + 0x98) + 4 + iVar10 * 8);
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0x198) = fVar13;
      }
      iVar3 = *(int *)(*(int *)(iVar5 + 0x98) + 0xc + iVar10 * 8);
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0x198) = fVar13;
      }
      iVar3 = *(int *)(*(int *)(iVar5 + 0x98) + 0x14 + iVar10 * 8);
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0x198) = fVar13;
      }
      iVar3 = *(int *)(*(int *)(iVar5 + 0x98) + 0x1c + iVar10 * 8);
      if (iVar3 != 0) {
        *(float *)(iVar3 + 0x198) = fVar13;
      }
      iVar10 = iVar10 + 4;
    } while (iVar10 < iVar9 + -3);
  }
  for (; iVar10 < iVar9; iVar10 = iVar10 + 1) {
    iVar3 = *(int *)(*(int *)(iVar5 + 0x98) + 4 + iVar10 * 8);
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x198) = fVar13;
    }
  }
  if (505.0 <= *(float *)(param_2 + 0x348)) {
    FUN_004c7600(*(undefined4 *)(iVar5 + 8));
    ExceptionList = local_10;
    return;
  }
  iVar10 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x13c))();
  FUN_004c7870(*(undefined4 *)(iVar5 + 8),iVar10 == 8);
  ExceptionList = local_10;
  return;
}

