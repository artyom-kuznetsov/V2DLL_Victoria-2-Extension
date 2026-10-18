// FUN_005fb7e0 @ 005fb7e0 body=[[005fb7e0, 005fb990]]


undefined1 * FUN_005fb7e0(undefined1 *param_1)

{
  int iVar1;
  short *psVar2;
  int *in_ECX;
  undefined1 local_dc [92];
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f7bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_1c = 1;
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))(local_18);
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))(local_80);
  local_64 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = 0;
  local_24 = 0;
  local_20 = 1;
  local_8 = 1;
  local_14 = *(int **)(in_ECX[0x26] + 0x98);
  if (local_14 != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x198))(local_dc,local_14);
    local_8._0_1_ = 2;
    FUN_00408ed0(iVar1,0,0xffffffff);
    FUN_00408ed0(iVar1 + 0x1c,0,0xffffffff);
    FUN_00408ed0(iVar1 + 0x38,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    param_1[0x58] = *(undefined1 *)(iVar1 + 0x58);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00459820();
    psVar2 = (short *)(**(code **)(*local_14 + 0x60))(&local_14);
    local_14 = (int *)CONCAT22(*(short *)(param_1 + 0x56) + psVar2[1],
                               *(short *)(param_1 + 0x54) + *psVar2);
    *(int **)(param_1 + 0x54) = local_14;
    iVar1 = (**(code **)(*in_ECX + 0x54))();
    if ((float)(int)*(short *)(param_1 + 0x56) <= (float)*(int *)(iVar1 + 0xc) * 0.8) {
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x40;
    }
    else {
      param_1[0x58] = 0;
    }
  }
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

