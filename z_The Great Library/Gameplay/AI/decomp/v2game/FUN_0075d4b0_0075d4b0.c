// FUN_0075d4b0 @ 0075d4b0 body=[[0075d4b0, 0075d57b] [0075d57f, 0075d59d] [0075d5a1, 0075d7d8]]


void FUN_0075d4b0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_ESI;
  float10 fVar6;
  float fVar7;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c950;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_00475500();
  iVar4 = DAT_012588e8;
  *(bool *)(iVar3 + 0xe5) = *(char *)(unaff_ESI + 0x324) != '\0';
  *(undefined4 *)(iVar4 + 0xbb4) = *(undefined4 *)(unaff_ESI + 0x354);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x350);
  iVar4 = FUN_00475500();
  *(undefined4 *)(iVar4 + 0x160) = uVar2;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("gamma_slider",0xc);
  local_8 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar5 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x34c) + 0x6c))(local_38);
  iVar4 = (**(code **)(*piVar5 + 0x4c))(local_54);
  fVar6 = (float10)(**(code **)(*(int *)(iVar4 + 0x54) + 0x10))();
  local_14 = (float)fVar6;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_8 = 0xffffffff;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (local_40 < 0x10) {
    if (0.0 <= local_14) {
      if (100.0 < local_14) {
        local_14 = DAT_00f14418;
      }
    }
    else {
      local_14 = 0.0;
    }
    iVar4 = FUN_00475500();
    *(float *)(iVar4 + 0x5c) = local_14;
    FUN_0099d200(*(undefined4 *)(unaff_ESI + 0x180));
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 800) + 0x54) + 0x10))();
    local_14 = (float)fVar6;
    if (0.0 <= local_14) {
      fVar7 = local_14;
      if (100.0 < local_14) {
        fVar7 = DAT_00f14418;
      }
    }
    else {
      fVar7 = 0.0;
    }
    FUN_00401000((fVar7 / 100.0 + 0.0005) * 1000.0);
    iVar4 = FUN_00b31c00();
    iVar3 = FUN_00475500();
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (1000 < iVar4) {
      iVar4 = 1000;
    }
    *(int *)(iVar3 + 0x104) = iVar4;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x328) + 0x54) + 0x10))();
    local_14 = (float)fVar6;
    iVar4 = FUN_00475500();
    *(float *)(iVar4 + 0x80) = local_14;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x32c) + 0x54) + 0x10))();
    local_18 = (float)fVar6;
    iVar4 = FUN_00475500();
    *(float *)(iVar4 + 0x84) = local_18;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x330) + 0x54) + 0x10))();
    local_1c = (float)fVar6;
    iVar4 = FUN_00475500();
    *(float *)(iVar4 + 0x88) = local_1c;
    *(float *)(unaff_ESI + 0x408) = local_14;
    *(float *)(unaff_ESI + 0x40c) = local_18;
    *(float *)(unaff_ESI + 0x410) = local_1c;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x33c) + 0x54) + 0x10))();
    local_18 = (float)fVar6;
    iVar4 = FUN_00475500();
    fVar7 = DAT_00f177e0;
    if (DAT_00f177e0 < local_18) {
      fVar7 = local_18;
    }
    *(float *)(iVar4 + 0x90) = fVar7;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x344) + 0x54) + 0x10))();
    local_18 = (float)fVar6;
    iVar4 = FUN_00475500();
    fVar7 = DAT_00f092fc;
    if (1.0 < local_18) {
      fVar7 = local_18;
    }
    *(float *)(iVar4 + 0x98) = fVar7;
    fVar6 = (float10)(**(code **)(*(int *)(*(int *)(unaff_ESI + 0x348) + 0x54) + 0x10))();
    local_1c = (float)fVar6;
    iVar4 = FUN_00475500();
    *(float *)(iVar4 + 0xf8) = local_1c;
    uVar1 = *(undefined1 *)(unaff_ESI + 0x325);
    iVar4 = FUN_00475500();
    *(undefined1 *)(iVar4 + 0x17c) = uVar1;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_54[0]);
}

