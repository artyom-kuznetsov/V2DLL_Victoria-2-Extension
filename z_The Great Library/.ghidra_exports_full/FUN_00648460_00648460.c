// FUN_00648460 @ 00648460 body=[[00648460, 00648688] [0064868c, 006486ea] [006486ee, 0064872e] [00648732, 006487ea] [006487ee, 00648909] [0064890d, 0064891f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00648460(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  undefined1 local_194 [72];
  short local_14c;
  undefined2 local_14a;
  undefined1 local_dc [28];
  undefined1 local_c0 [16];
  int local_b0;
  undefined1 local_a4 [16];
  int local_94;
  undefined4 local_88;
  char local_84;
  undefined1 local_7c [8];
  undefined1 local_74 [4];
  undefined4 local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  int local_24;
  uint local_20;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ff9e;
  local_10 = ExceptionList;
  if ((char)param_2 == '\0') {
    ExceptionList = &local_10;
    (**(code **)(*(int *)param_1[0x14] + 0x38))();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar3 = (**(code **)(*(int *)param_1[0x16] + 0x4c))(local_7c);
  iVar3 = *(int *)(iVar3 + 4);
  piVar4 = (int *)(**(code **)(*(int *)piVar1[0x16] + 0x4c))(local_74);
  local_18 = (float)*piVar4;
  local_14 = (float)iVar3;
  if ((_DAT_013f2af8 & 1) == 0) {
    _DAT_013f2af8 = _DAT_013f2af8 | 1;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8 = 0;
  (**(code **)(*piVar1 + 0x4c))(local_dc);
  local_8._0_1_ = 1;
  FUN_00408ed0(local_dc,0,0xffffffff);
  if ((DAT_013f2af0 != local_18) || (DAT_013f2af4 != local_14)) {
    piVar4 = (int *)(**(code **)(*piVar1 + 0x50))();
    (**(code **)(*piVar4 + 0x14))();
    _DAT_013f0844 = FUN_00b31c00();
  }
  DAT_013f2af0 = local_18;
  DAT_013f2af4 = local_14;
  piVar4 = (int *)(**(code **)(*piVar1 + 0x50))();
  fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
  if (((float10)1 < fVar7 - (float10)_DAT_013f0844) && (local_b0 != 0)) {
    FUN_00448740("\n--------------\n",0x10);
    FUN_00448aa0(local_c0,0,0xffffffff);
  }
  iVar3 = FUN_00475500();
  if (*(char *)(iVar3 + 0x17c) != '\0') {
    piVar4 = (int *)(**(code **)(*piVar1 + 0x50))();
    fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
    if (((float10)1 < fVar7 - (float10)_DAT_013f0844) && (local_94 != 0)) {
      if (local_24 != 0) {
        FUN_00448740("\n--------------",0xf);
      }
      FUN_00448740(&DAT_00dee2cc,1);
      FUN_00448aa0(local_a4,0,0xffffffff);
    }
  }
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    uVar5 = FUN_00989330(local_50);
    local_8._0_1_ = 2;
    FUN_00408ed0(uVar5,0,0xffffffff);
    local_8._0_1_ = 1;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    FUN_00408ed0(local_34,0,0xffffffff);
    if (local_24 == 0) {
      (**(code **)(*(int *)piVar1[0x14] + 0x38))();
    }
    else {
      uVar5 = FUN_009e74b0(piVar1[0x14]);
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar4 = (int *)FUN_00973bd0(uVar5);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_00973bd0(uVar5);
      }
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_8._0_1_ = 4;
      FUN_009f4bc0(local_194,local_6c,piVar4);
      local_8._0_1_ = 6;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      iVar3 = piVar1[0x14];
      local_70 = *(undefined4 *)(iVar3 + 0xbc);
      local_14c = *(short *)(iVar3 + 0xb4) + (short)*(undefined4 *)(iVar3 + 0xb8) * -3;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_14a = 2000;
      FUN_009f5290(local_34);
      iVar3 = (**(code **)(*piVar1 + 0x54))();
      iVar3 = *(int *)(iVar3 + 0xc);
      local_18 = *(float *)(piVar1[0x14] + 0xb8);
      local_14 = *(float *)(piVar1[0x14] + 0xbc);
      uVar6 = (**(code **)(*piVar4 + 0x2c))();
      FUN_009f6140(local_50,(uint)(iVar3 + (int)local_14 * -2) / uVar6 - 1);
      local_8._0_1_ = 7;
      FUN_009e75a0();
      local_8._0_1_ = 6;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      (**(code **)(*(int *)piVar1[0x14] + 0x34))();
      local_8._0_1_ = 1;
      FUN_009f4d20();
    }
  }
  param_2 = local_88;
  if (local_84 == '\0') {
    (**(code **)(**(int **)(piVar1[0x14] + 0x58) + 0xd8))(&param_1);
    param_2 = CONCAT22(param_2._2_2_ - param_1._2_2_,(short)param_2);
  }
  (**(code **)(**(int **)(piVar1[0x14] + 0x58) + 0xd8))(&param_1);
  iVar3 = (**(code **)(*piVar1 + 0x54))();
  if (*(int *)(iVar3 + 8) < (int)(short)param_1 + (int)(short)param_2) {
    iVar3 = (**(code **)(*piVar1 + 0x54))();
    uVar5 = *(undefined4 *)(iVar3 + 8);
    (**(code **)(**(int **)(piVar1[0x14] + 0x58) + 0xd8))(&param_1);
    param_2 = CONCAT22(param_2._2_2_,(short)uVar5 - (short)param_1);
  }
  (**(code **)(**(int **)(piVar1[0x14] + 0x58) + 0xd8))(&param_1);
  iVar3 = (**(code **)(*piVar1 + 0x54))();
  if (*(int *)(iVar3 + 0xc) < (int)param_1._2_2_ + (int)param_2._2_2_) {
    iVar3 = (**(code **)(*piVar1 + 0x54))();
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    (**(code **)(**(int **)(piVar1[0x14] + 0x58) + 0xd8))((int)&local_18 + 2);
    param_2 = CONCAT22((short)uVar5 - SUB42(local_14,0),(short)param_2);
  }
  FUN_009e7350(param_2);
  FUN_00459820();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return;
}

