// FUN_00638da0 @ 00638da0 body=[[00638da0, 00638e75] [00638e79, 00638ef5] [00638ef9, 00638fe9] [00638fed, 00639105] [00639109, 0063911d]]


void FUN_00638da0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_264;
  uint uStack_25c;
  ulonglong uStack_254;
  uint uStack_248;
  uint local_244;
  uint uStack_240;
  double dStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  uint uStack_218;
  undefined **appuStack_1b4 [7];
  undefined **appuStack_198 [48];
  undefined **appuStack_d8 [26];
  undefined4 uStack_70;
  void *pvStack_5c;
  uint uStack_54;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b7f690;
  pvStack_4c = ExceptionList;
  local_230 = 0xf;
  dStack_238 = (double)(ulonglong)dStack_238._0_4_;
  local_244 = local_244 & 0xffffff00;
  ExceptionList = &pvStack_4c;
  FUN_00409350("eu3application.cpp",0x12);
  local_44 = 0;
  uVar2 = FUN_004015b0(&local_244,0x308,3);
  uVar6 = 0xe;
  pcVar5 = "initialise map";
  local_44 = CONCAT31(local_44._1_3_,1);
  FUN_00987d50(uVar2,"initialise map",0xe,0);
  FUN_00401280(uVar2);
  uStack_54 = uStack_54 & 0xffffff00;
  FUN_00987ac0(appuStack_198);
  appuStack_198[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_198);
  uStack_54 = 0xffffffff;
  if (0xf < uStack_240) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b((undefined4)uStack_254);
  }
  if (*(int *)(in_ECX + 0x124) == 0) {
    fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x128) + 0x14))();
    dStack_238 = (double)fVar4;
    iVar3 = FUN_00aae9af(0x3a5c);
    uStack_54 = 2;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006442e0(iVar3,*(undefined4 *)(in_ECX + 0x11c));
    }
    uStack_54 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x124);
    if ((iVar3 != iVar1) && (iVar1 != 0)) {
      FUN_006446a0(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *(int *)(in_ECX + 0x124) = iVar3;
    fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0x128) + 0x14))();
    uStack_25c = (uint)((ulonglong)(double)fVar4 >> 0x20);
    uStack_240 = 0xf;
    local_244 = 0;
    uStack_254 = uStack_254 & 0xffffffffffffff00;
    FUN_00409350("eu3application.cpp",0x12);
    uStack_54 = 3;
    uVar2 = FUN_004015b0(&uStack_254,0x30f,0x10006);
    uStack_54._0_1_ = 4;
    FUN_00987d50(uVar2,"Initialising Graphical Map <",0x1c,0);
    uVar2 = FUN_0048c130(uVar2,(double)CONCAT44(uStack_26c,uStack_270) -
                               (double)CONCAT44(local_244,uStack_248),extraout_ECX,&DAT_00e07938);
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    uStack_70 = CONCAT31(uStack_70._1_3_,3);
    FUN_00987ac0(appuStack_1b4);
    appuStack_1b4[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1b4);
    uStack_70 = 0xffffffff;
    if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_270);
    }
    FUN_004a14a0(DAT_0125870c);
    FUN_004a13e0(DAT_0125870c);
    (**(code **)(**(int **)(in_ECX + 0x128) + 0x14))();
    dStack_238 = 3.18299368644791e-313;
    uStack_248 = uStack_248 & 0xffffff00;
    FUN_00409350("eu3application.cpp",0x12);
    uStack_70 = 5;
    uVar2 = FUN_004015b0(&uStack_248,0x314,0x10006);
    uStack_70 = CONCAT31(uStack_70._1_3_,6);
    FUN_00987d50(uVar2,"Cleaning up after Graphical Map <",0x21,0);
    uVar2 = FUN_0048c130(uVar2,(double)CONCAT44(uVar6,pcVar5) - (double)(ulonglong)uStack_264,
                         extraout_ECX_00,&DAT_00e07938);
    uVar2 = FUN_00418e30(uVar2);
    FUN_00401280(uVar2);
    uStack_54 = CONCAT31(uStack_54._1_3_,5);
    FUN_00987ac0(appuStack_d8);
    appuStack_d8[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_d8);
    if (0xf < uStack_218) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_22c);
    }
  }
  ExceptionList = pvStack_5c;
  return;
}

