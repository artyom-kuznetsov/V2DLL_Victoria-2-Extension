// FUN_009f9630 @ 009f9630 body=[[009f9630, 009f97f6] [009f97fa, 009f98b5] [009f98b9, 009f998a] [009f998e, 009f99ca]]


void FUN_009f9630(undefined4 *param_1,int *param_2,int param_3,int param_4,uint param_5,char param_6
                 )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  uint uStack_224;
  int iStack_220;
  uint uStack_21c;
  undefined1 *puStack_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  uint *puStack_208;
  char *pcStack_204;
  undefined4 uStack_200;
  int *piStack_1fc;
  int iStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined4 *puStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1d4;
  undefined **appuStack_174 [48];
  undefined **appuStack_b4 [18];
  void *pvStack_6c;
  uint uStack_60;
  void *pvStack_30;
  undefined4 uStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b56922;
  pvStack_14 = ExceptionList;
  uStack_1ec = (uint)(*(char *)(param_1 + 5) != '\0');
  local_1d4 = 8;
  if (param_6 != '\0') {
    local_1d4 = 0x208;
  }
  uStack_1e4 = 0;
  puStack_1e8 = param_1;
  uStack_1f0 = param_5;
  uStack_1f4 = local_1d4;
  iStack_1f8 = param_3 * param_4;
  piStack_1fc = param_2;
  uStack_200 = 0x9f9698;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*param_2 + 0x68))();
  if (-1 < iVar1) {
    *(char *)((int)param_1 + 0x15) = param_6;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    param_1[6] = param_4;
    param_1[3] = param_3;
    param_1[7] = param_5;
    ExceptionList = pvStack_30;
    return;
  }
  uStack_200 = 0x17;
  pcStack_204 = "primitivescontainer.cpp";
  uStack_1ec = uStack_1ec & 0xffffff00;
  puStack_208 = (uint *)0x9f96f0;
  FUN_00409350();
  uStack_200 = 0x1000;
  puStack_208 = &uStack_1ec;
  pcStack_204 = (char *)0x44;
  uStack_28 = 0;
  uStack_20c = 0x9f970c;
  uVar2 = FUN_004015b0();
  uStack_200 = 0;
  pcStack_204 = (char *)0x16;
  puStack_208 = (uint *)0xe3d568;
  uStack_28 = CONCAT31(uStack_28._1_3_,1);
  uStack_210 = 0x9f9727;
  uStack_20c = uVar2;
  FUN_00987d50();
  uStack_210 = param_5;
  uStack_214 = param_5;
  puStack_218 = &DAT_00ded950;
  uStack_21c = param_5;
  iStack_220 = param_4;
  uStack_224 = param_5;
  uVar2 = FUN_004931f0(uVar2,iVar1,uStack_200,&DAT_00ded950,uStack_200,uStack_200,param_5,
                       &DAT_00ded950,param_5,param_3,param_5,&DAT_00ded950);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00447240(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00455470(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00455470(uVar2);
  uVar2 = FUN_00418e30(uVar2);
  uVar2 = FUN_00447240(uVar2);
  FUN_00401280(uVar2);
  uStack_60 = uStack_60 & 0xffffff00;
  FUN_00987ac0(appuStack_174);
  appuStack_174[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_174);
  uStack_60 = 0xffffffff;
  if (0xf < uStack_210) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_224);
  }
  if (*(char *)(param_1 + 5) != '\0') {
    uStack_210 = 0xf;
    uStack_214 = 0;
    uStack_224 = uStack_224 & 0xffffff00;
    FUN_00409350("primitivescontainer.cpp",0x17);
    uStack_60 = 2;
    uVar2 = FUN_004015b0(&uStack_224,0x48,0x1000);
    uStack_60._0_1_ = 3;
    FUN_00987d50(uVar2,"managed",7,0);
    FUN_00401280(uVar2);
    uStack_60 = CONCAT31(uStack_60._1_3_,2);
    FUN_00987ac0(appuStack_174);
    appuStack_174[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_174);
    uStack_60 = 0xffffffff;
    if (0xf < uStack_210) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_224);
    }
  }
  uStack_60 = 0xffffffff;
  if (param_6 != '\0') {
    uStack_1f4 = 0xf;
    iStack_1f8 = 0;
    puStack_208 = (uint *)((uint)puStack_208 & 0xffffff00);
    FUN_00409350("primitivescontainer.cpp",0x17);
    uStack_60 = 4;
    uVar2 = FUN_004015b0(&puStack_208,0x4a,0x1000);
    uVar3 = 0;
    uStack_60._0_1_ = 5;
    FUN_00987d50(uVar2,"dynamic",7,0);
    uVar2 = FUN_004931f0(uVar2,iVar1,extraout_ECX,uVar3);
    uVar2 = FUN_00447240(uVar2);
    FUN_00401280(uVar2);
    uStack_60 = CONCAT31(uStack_60._1_3_,4);
    FUN_00987ac0(appuStack_b4);
    appuStack_b4[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_b4);
    uStack_60 = 0xffffffff;
    if (0xf < uStack_1f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_208);
    }
    uStack_1f4 = 0xf;
    iStack_1f8 = 0;
    puStack_208 = (uint *)((uint)puStack_208 & 0xffffff00);
  }
  uStack_60 = 0xffffffff;
  param_1[6] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  (**(code **)(*param_2 + 0xc))(param_2);
  ExceptionList = pvStack_6c;
  return;
}

