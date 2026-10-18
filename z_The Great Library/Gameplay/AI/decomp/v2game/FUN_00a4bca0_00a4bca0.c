// FUN_00a4bca0 @ 00a4bca0 body=[[00a4bca0, 00a4beb4]]


void FUN_00a4bca0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6,int param_7,int param_8,int *param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int in_ECX;
  int iVar9;
  undefined4 uVar10;
  int unaff_EDI;
  int iVar11;
  int iVar12;
  undefined8 local_74;
  undefined1 local_6c [8];
  int iStack_64;
  int iStack_60;
  undefined1 local_50 [36];
  float fStack_2c;
  float fStack_28;
  
  local_74 = CONCAT44(local_74._4_4_,in_ECX);
  if ((*param_9 == 0) && (param_9[1] == 0)) {
    iVar9 = *(int *)(in_ECX + 0x2c);
    local_74 = CONCAT44(*(undefined4 *)(iVar9 + 0x6b9bc),in_ECX);
    iVar11 = *(int *)(iVar9 + 0x6b9c0);
    local_6c._0_4_ = iVar11;
    *param_9 = *(int *)(iVar9 + 0x6b9bc);
    param_9[1] = iVar11;
  }
  FUN_00408b00();
  piVar3 = *(int **)(*(int *)(in_ECX + 0x2c) + 100);
  iVar12 = 0x100;
  (**(code **)(*piVar3 + 0xb4))(piVar3,0x100,local_50);
  local_74 = param_6;
  uVar5 = local_74;
  local_74._0_4_ = (int)param_6;
  iVar11 = (int)((float)param_5 - fStack_28);
  iVar9 = (int)((float)param_4 + fStack_2c);
  _local_6c = (undefined1  [16])0x0;
  auVar7 = _local_6c;
  if ((int)local_74 == 0) {
    auVar7._4_4_ = param_9[1];
    auVar7._0_4_ = *(undefined4 *)(*(int *)(unaff_EDI + 0x2c) + 0x6b9bc);
    auVar7._8_8_ = 0;
    _local_6c = auVar7 << 0x40;
    auVar7 = _local_6c;
    goto LAB_00a4be36;
  }
  local_74._4_4_ = (int)((ulonglong)param_6 >> 0x20);
  stack0xffffff98 = SUB1612((undefined1  [16])0x0,4);
  iVar6 = iStack_60;
  if (param_3 == 0) {
    iVar8 = -param_8;
    iVar2 = iVar11;
LAB_00a4be26:
    local_6c._0_4_ = iVar9 + param_7;
    iStack_64 = ((int)local_74 - param_7) + iVar9;
    auVar4 = _local_6c;
  }
  else {
    if (param_3 != 4) {
      if (param_3 != 2) goto LAB_00a4be36;
      iVar2 = param_9[1] + iVar11;
      iVar8 = param_9[1] - param_8;
      goto LAB_00a4be26;
    }
    local_6c._0_4_ = *param_9 / 2 + iVar9 + param_7;
    iVar2 = param_9[1] / 2 + iVar11;
    iVar8 = param_9[1] / 2 - param_8;
    iStack_64 = (*param_9 / 2 - param_7) + (int)local_74 + iVar9;
    auVar4 = _local_6c;
  }
  _local_6c = auVar4;
  _local_6c = CONCAT412(iVar6,_local_6c);
  local_6c._0_4_ = auVar4._0_4_;
  local_6c._4_4_ = iVar2 + param_8;
  iStack_60 = local_74._4_4_ + iVar8 + iVar11;
  auVar7 = _local_6c;
LAB_00a4be36:
  _local_6c = auVar7;
  uVar10 = 0x110;
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar10 = 0x112;
    }
    else if ((param_2 == 2) && (uVar10 = 0x111, param_3 == 4)) {
      uVar10 = 0x115;
    }
  }
  local_74 = uVar5;
  (**(code **)(*DAT_01258b5c + 0x20))(DAT_01258b5c,0x30);
  puVar1 = param_1 + 4;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  (**(code **)(**(int **)(iVar12 + 0x30) + 0x38))
            (*(int **)(iVar12 + 0x30),DAT_01258b5c,param_1,*puVar1,&local_74,uVar10,
             *(undefined4 *)(iVar12 + 0x70));
  (**(code **)(*DAT_01258b5c + 0x2c))(DAT_01258b5c);
  return;
}

