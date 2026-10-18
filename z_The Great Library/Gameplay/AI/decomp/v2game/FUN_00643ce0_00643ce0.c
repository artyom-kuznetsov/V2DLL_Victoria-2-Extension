// FUN_00643ce0 @ 00643ce0  (requested 00643CE0, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_00643ce0(int param_1,int param_2,undefined4 *param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  int *piVar12;
  int *piVar13;
  char local_1f8 [256];
  int local_f8 [13];
  float local_c4;
  int local_b8 [13];
  float local_84;
  float local_5c [3];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char local_34 [8];
  float local_2c [3];
  int local_20;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45630;
  local_10 = ExceptionList;
  if (*(int *)(*(int *)(param_1 + 8) + 0xdc) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    return;
  }
  ExceptionList = &local_10;
  if ((*(char *)(*(int *)(param_1 + 8) + 0x28) != '\0') &&
     (ExceptionList = &local_10, *(int **)(param_1 + 0x74) != (int *)0x0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(param_1 + 0x74) + 0x38))();
    uVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x44))();
    FUN_009962f0(uVar4);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  iVar10 = *(int *)(*(int *)(param_2 + 0x118) + DAT_01258720 * 4);
  iVar9 = *(int *)(iVar10 + 0x24) / 1000;
  local_18 = iVar10;
  if (((*(int *)(param_2 + 0x158) == 0) || (*(int *)(*(int *)(param_2 + 0x158) + 0x10) < 1)) ||
     (cVar3 = FUN_004b6de0(param_2), cVar3 != '\0')) {
    param_1._3_1_ = '\0';
    cVar3 = param_1._3_1_;
    param_1._3_1_ = '\0';
    cVar11 = param_1._3_1_;
    param_1._3_1_ = cVar3;
  }
  else {
    param_1._3_1_ = '\x01';
    cVar11 = '\x01';
  }
  local_20 = *(int *)(*(int *)(iVar10 + 0x18) + 0x134);
  if (((*(char *)(*(int *)(iVar2 + 8) + 0x28) != '\0') || (iVar9 != *(int *)(iVar2 + 0x8c))) ||
     (cVar11 != *(char *)(iVar2 + 0x90))) {
    *(char *)(iVar2 + 0x90) = cVar11;
    *(int *)(iVar2 + 0x8c) = iVar9;
    local_1c = (int *)&DAT_00ded94d;
    if (iVar9 < 1) {
      local_34[0] = '\0';
    }
    else {
      _sprintf(local_34,"%d",iVar9);
      cVar11 = param_1._3_1_;
    }
    if (cVar11 != '\0') {
      local_1c = (int *)0xe08988;
    }
    puVar5 = (undefined4 *)(*(int *)(iVar10 + 0x18) + 0x20);
    if (0xf < *(uint *)(*(int *)(iVar10 + 0x18) + 0x34)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    __snprintf(local_1f8,0xff,"building_%s%s%s",puVar5,local_34,local_1c);
    iVar9 = local_20;
    piVar8 = (int *)(*(int *)(iVar2 + 0x54) + local_20 * 4);
    if (*piVar8 != 0) {
      (**(code **)(*(int *)*piVar8 + 0x38))();
      uVar4 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x54) + iVar9 * 4) + 0x44))();
      FUN_009962f0(uVar4);
      *(undefined4 *)(*(int *)(iVar2 + 0x54) + local_20 * 4) = 0;
      iVar10 = local_18;
    }
    iVar9 = *(int *)(iVar2 + 8);
    iVar6 = *(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 0x10 + *(int *)(iVar9 + 0x330);
    local_2c[0] = *(float *)(iVar6 + 8) - (float)*(int *)(iVar9 + 0x74);
    pcVar7 = local_1f8;
    local_2c[1] = 0.0;
    local_2c[2] = *(float *)(iVar6 + 0xc) - (float)*(int *)(iVar9 + 0x78);
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(local_1f8,(int)pcVar7 - (int)(local_1f8 + 1));
    local_8 = 0;
    piVar8 = (int *)FUN_005c2ad0(local_50);
    piVar8 = (int *)(**(code **)(*piVar8 + 0x48))();
    local_1c = piVar8;
    (**(code **)(param_3[0x535] + 0x10))(piVar8);
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if ((*(char *)(*(int *)(iVar10 + 0x18) + 0x129) != '\0') &&
       (fVar1 = *(float *)(*(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 0x10 +
                           *(int *)(*(int *)(iVar2 + 8) + 0x330) + 8),
       iVar9 = FUN_004c4570(*(int *)(iVar2 + 8)), 0.0 < fVar1 - *(float *)(iVar9 + 8))) {
      *(undefined1 *)((int)piVar8 + 0x14e) = 1;
    }
    (**(code **)(*piVar8 + 0x34))();
    (**(code **)(*piVar8 + 0x84))(local_2c);
    (**(code **)(*piVar8 + 0x94))
              (*(undefined4 *)
                (*(int *)(*(int *)(iVar2 + 8) + 0x350) +
                *(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 4));
    if (*(int *)(param_3[0x836] + *(int *)(*(int *)(iVar2 + 8) + 0xb4) * 4) != 0) {
      FUN_00644a70(param_3,piVar8,1);
    }
    iVar10 = *(int *)(local_18 + 0x18);
    piVar8 = piVar8 + 0x15;
    piVar12 = local_b8;
    for (iVar9 = 0x10; piVar13 = local_1c, iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar12 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar12 = piVar12 + 1;
    }
    local_84 = local_84 +
               *(float *)(*(int *)(*(int *)(iVar2 + 8) + 0x340) + *(int *)(iVar10 + 0x58) * 4);
    (**(code **)(*local_1c + 0xa4))(local_b8);
    *(int **)(*(int *)(iVar2 + 0x54) + local_20 * 4) = piVar13;
    iVar10 = local_18;
  }
  piVar8 = *(int **)(iVar2 + 0x74);
  if (*(char *)(param_2 + 0x170) == '\0') {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x38))();
      FUN_009962f0(param_3 + 0x535);
      *(undefined4 *)(iVar2 + 0x74) = 0;
    }
  }
  else {
    if (piVar8 == (int *)0x0) {
      iVar9 = *(int *)(iVar2 + 8);
      iVar10 = *(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 0x10 + *(int *)(iVar9 + 0x330);
      local_5c[0] = *(float *)(iVar10 + 8) - (float)*(int *)(iVar9 + 0x74);
      local_5c[2] = *(float *)(iVar10 + 0xc) - (float)*(int *)(iVar9 + 0x78);
      local_5c[1] = 0.0;
      FUN_009885d0();
      local_8 = 1;
      uVar4 = FUN_009964f0(*param_3);
      *(undefined4 *)(iVar2 + 0x74) = uVar4;
      local_8 = 0xffffffff;
      FUN_00408ad0();
      iVar10 = local_18;
      if (*(char *)(*(int *)(local_18 + 0x18) + 0x129) != '\0') {
        local_2c[0] = *(float *)(*(int *)(*(int *)(iVar2 + 8) + 0x330) + 8 +
                                *(int *)(*(int *)(local_18 + 0x18) + 0x58) * 0x10);
        iVar9 = FUN_004c4570(*(int *)(iVar2 + 8));
        if (0.0 < local_2c[0] - *(float *)(iVar9 + 8)) {
          *(undefined1 *)(*(int *)(iVar2 + 0x74) + 0x14e) = 1;
        }
      }
      (**(code **)(**(int **)(iVar2 + 0x74) + 0x34))();
      (**(code **)(**(int **)(iVar2 + 0x74) + 0x84))(local_5c);
      (**(code **)(**(int **)(iVar2 + 0x74) + 0x94))
                (*(undefined4 *)
                  (*(int *)(*(int *)(iVar2 + 8) + 0x350) +
                  *(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 4));
      if (*(int *)(param_3[0x836] + *(int *)(*(int *)(iVar2 + 8) + 0xb4) * 4) != 0) {
        FUN_00644a70(param_3,*(undefined4 *)(iVar2 + 0x74),1);
      }
      iVar10 = local_18;
      piVar8 = *(int **)(iVar2 + 0x74);
      piVar12 = piVar8 + 0x15;
      piVar13 = local_f8;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar13 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar13 = piVar13 + 1;
      }
      local_c4 = *(float *)(*(int *)(*(int *)(iVar2 + 8) + 0x340) +
                           *(int *)(*(int *)(iVar10 + 0x18) + 0x58) * 4) + local_c4;
      (**(code **)(*piVar8 + 0xa4))(local_f8);
      ExceptionList = local_10;
      return;
    }
    cVar3 = (**(code **)(*piVar8 + 0x3c))();
    if (cVar3 == '\0') {
      (**(code **)(**(int **)(iVar2 + 0x74) + 0x34))();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

