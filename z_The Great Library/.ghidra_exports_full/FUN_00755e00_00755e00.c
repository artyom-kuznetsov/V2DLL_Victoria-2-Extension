// FUN_00755e00 @ 00755e00 body=[[00755e00, 0075615c]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00755e00(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined1 local_40 [28];
  undefined1 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97c8a;
  local_10 = ExceptionList;
  if (*(char *)((int)param_1 + 0x761) != '\0') {
    return;
  }
  ExceptionList = &local_10;
  (**(code **)(param_1[0x7b] + 0xc))();
  (**(code **)(*(int *)param_1[0xdf] + 0x14))();
  if (*(char *)(param_1[0x79] + 0x6bca0) == '\0') {
    if ((char)param_1[0x1da] != '\0') {
      piVar2 = (int *)FUN_009e8090();
      (**(code **)(*piVar2 + 0x14))();
      piVar2 = (int *)FUN_009c7290();
      (**(code **)(*piVar2 + 0x70))(0);
    }
    *(undefined1 *)(param_1 + 0x1da) = 0;
  }
  else if ((char)param_1[0x1da] == '\0') {
    piVar2 = (int *)FUN_009e8090();
    (**(code **)(*piVar2 + 0xc))();
    piVar2 = (int *)FUN_009c7290();
    (**(code **)(*piVar2 + 0x70))(1);
    *(undefined1 *)(param_1 + 0x1da) = 1;
  }
  FUN_009ae320(param_1[0xda]);
  iVar5 = param_1[0xda];
  iVar3 = (**(code **)(*param_1 + 0x38))();
  piVar2 = param_1 + 0xe0;
  FUN_007f7ce0(iVar3 + 0x20bc,piVar2,iVar5,(undefined1 *)(iVar3 + 0x3a28));
  bVar6 = DAT_012586da != '\0';
  *(undefined1 *)(iVar3 + 0x3a28) = 0;
  if (bVar6) {
    DAT_012586da = '\0';
  }
  fVar7 = (float10)(**(code **)(*(int *)param_1[0xdf] + 0x14))();
  _DAT_013f089c = (float)(fVar7 - (float10)_DAT_013f08a0);
  fVar7 = (float10)(**(code **)(*(int *)param_1[0xdf] + 0x14))();
  if (0 < param_1[0x1db]) {
    param_1[0x1db] = param_1[0x1db] + -1;
    goto LAB_007560d8;
  }
  cVar1 = FUN_0099c370(param_1[0x79]);
  if (cVar1 == '\0') goto LAB_007560d8;
  iVar5 = param_1[0xda];
  uVar4 = (**(code **)(*param_1 + 0x38))(iVar5);
  FUN_00645330(uVar4,iVar5);
  DAT_01258a6c = 0;
  DAT_01258a70 = 0;
  (**(code **)(**(int **)(param_1[0x79] + 100) + 0xa4))(*(int **)(param_1[0x79] + 100));
  (**(code **)(**(int **)(param_1[0x79] + 100) + 0xac))
            (*(int **)(param_1[0x79] + 100),0,0,7,0xff000000,DAT_00f092fc,0);
  uVar9 = CONCAT44(param_1[0xda],piVar2);
  (**(code **)(*param_1 + 0x38))(piVar2,param_1[0xda]);
  FUN_00645460(uVar9);
  FUN_0099a480();
  FUN_00999bb0();
  FUN_00999fa0();
  if ((char)param_1[0x1da] != '\0') {
    if (*(char *)((int)param_1 + 0x1b1) == '\0') {
      if (DAT_013f08a4 == 0) goto LAB_007560b9;
    }
    else {
      DAT_013f08a4 = 0xf;
    }
    DAT_013f08a4 = DAT_013f08a4 + -1;
    FUN_009885d0();
    local_8 = 0;
    FUN_009a8ee0(local_24,local_40);
    local_8._0_1_ = 1;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 2;
    FUN_007e1210();
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_009a9740();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
LAB_007560b9:
  (**(code **)(**(int **)(param_1[0x79] + 100) + 0xa8))();
  FUN_0099a520();
LAB_007560d8:
  *(undefined1 *)((int)param_1 + 0x1b1) = 0;
  fVar8 = (float10)(**(code **)(*(int *)param_1[0xdf] + 0x14))();
  _DAT_013f0894 = (float)(fVar8 - (float10)(float)fVar7);
  fVar7 = (float10)(**(code **)(*(int *)param_1[0xdf] + 0x14))();
  _DAT_013f0898 = (float)(fVar7 - (float10)_DAT_013f08a0);
  fVar7 = (float10)(**(code **)(*(int *)param_1[0xdf] + 0x14))();
  _DAT_013f08a0 = (float)fVar7;
  (**(code **)(*(int *)param_1[0xdf] + 0x14))();
  FUN_0099d8b0();
  (**(code **)(*(int *)param_1[0xdf] + 0x14))();
  ExceptionList = local_10;
  return;
}

