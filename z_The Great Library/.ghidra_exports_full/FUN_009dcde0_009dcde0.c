// FUN_009dcde0 @ 009dcde0 body=[[009dcde0, 009dd071] [009dd075, 009dd094] [009dd098, 009dd1e7]]


undefined4 * FUN_009dcde0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6160e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009d9070(param_1,param_2);
  local_8 = 0;
  param_1[0x53] = CLostDeviceInterface::vftable;
  param_1[0x54] = param_3;
  *param_1 = &PTR_LAB_00e3bb58;
  param_1[0x53] = &PTR_FUN_00e3bcc8;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 0x56) = 1;
  param_1[0x5c] = 0xf;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  FUN_00409350("animated",8);
  local_8._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x17e) = 0;
  *(undefined4 *)((int)param_1 + 0x17a) = 0;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  FUN_00408ed0(param_3 + 0x16,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1ba) = 0xffff;
  param_1[0x74] = 0xf;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 3;
  param_1[0x7b] = 0xf;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 1;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  local_8._0_1_ = 5;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xa8] = 1;
  uVar3 = DAT_01258a74;
  param_1[9] = param_3;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((int)param_1 + 0x30a) = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_1[0x7d] = uVar3;
  local_14 = param_1 + 0x53;
  FUN_0068f390();
  iVar2 = param_3[0x26];
  iVar1 = (**(code **)(*param_3 + 0x54))();
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x6bd00) + -4 + iVar1 * 4);
  }
  param_1[0x85] = iVar2;
  if (iVar2 == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("ButtonEffect",0xc);
    local_8._0_1_ = 6;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("gfx\\FX\\buttonstate.fx",0x15);
    local_8._0_1_ = 7;
    iVar2 = FUN_009be510(param_1[0x7d] + 0x6bcfc,local_34,local_50,
                         *(undefined4 *)(param_1[0x7d] + 100));
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8._0_1_ = 5;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_1[0x7d] + 0x6bd00) + -4 + iVar2 * 4);
    }
    param_1[0x85] = uVar3;
  }
  param_1[1] = param_1[0x85];
  FUN_00409350(&DAT_00e12e7c,2);
  iVar2 = param_1[0x7d];
  local_18 = *(undefined4 *)(iVar2 + 0x6b9bc);
  local_14 = *(undefined4 **)(iVar2 + 0x6b9c0);
  D3DXMatrixOrthoRH(param_1 + 0xac,(float)*(int *)(iVar2 + 0x6b9bc),(float)(int)local_14,0,
                    DAT_00f092fc);
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x24))((int *)param_1[0x85],0,&DAT_00e0bce4);
  param_1[0x86] = uVar3;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x34))((int *)param_1[0x85],&DAT_00e12e7c);
  param_1[0x88] = uVar3;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x34))((int *)param_1[0x85],&DAT_00e1a0d4);
  param_1[0x89] = uVar3;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x34))((int *)param_1[0x85],&DAT_00e1a0dc);
  param_1[0x8a] = uVar3;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x34))((int *)param_1[0x85],"disable");
  param_1[0x8b] = uVar3;
  uVar3 = (**(code **)(*(int *)param_1[0x85] + 0x24))
                    ((int *)param_1[0x85],0,"WorldViewProjectionMatrix");
  param_1[0x87] = uVar3;
  ExceptionList = local_10;
  return param_1;
}

