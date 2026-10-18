// FUN_00a72e40 @ 00a72e40 body=[[00a72e40, 00a73470]]


void FUN_00a72e40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  undefined **local_6fc [8];
  undefined1 local_6dc [28];
  undefined1 local_6c0 [28];
  undefined1 local_6a4 [28];
  undefined1 local_688 [28];
  undefined1 local_66c [28];
  undefined1 local_650 [28];
  undefined1 local_634 [132];
  undefined **appuStack_5b0 [48];
  undefined **appuStack_4f0 [48];
  undefined **appuStack_430 [48];
  undefined **appuStack_370 [48];
  undefined **appuStack_2b0 [48];
  undefined **appuStack_1f0 [48];
  undefined **appuStack_130 [47];
  undefined **appuStack_74 [19];
  void *pvStack_28;
  void *pvStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5453b;
  local_14 = ExceptionList;
  switch(param_2) {
  case 0x1a:
    ExceptionList = &local_14;
    FUN_009a1750(in_ECX + 0x18,0);
    FUN_009885d0();
    local_c = 7;
    uVar1 = FUN_004015b0(local_688,0x36,3);
    local_c = CONCAT31(local_c._1_3_,8);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_1c = 7;
    FUN_00987ac0(appuStack_2b0);
    appuStack_2b0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_2b0);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  default:
    ExceptionList = &local_14;
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  case 0xc9:
    ExceptionList = &local_14;
    FUN_009a1c10();
    FUN_009885d0();
    local_c = 0xd;
    uVar1 = FUN_004015b0(local_66c,0x42,3);
    local_c = CONCAT31(local_c._1_3_,0xe);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_1c = 0xd;
    FUN_00987ac0(appuStack_1f0);
    appuStack_1f0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1f0);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  case 0xcd:
    ExceptionList = &local_14;
    FUN_009a1750(in_ECX + 0x34,0);
    FUN_009885d0();
    local_c = 9;
    uVar1 = FUN_004015b0(local_6dc,0x3a,3);
    local_c = CONCAT31(local_c._1_3_,10);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_1c = 9;
    FUN_00987ac0(appuStack_4f0);
    appuStack_4f0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_4f0);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  case 0xd4:
    piVar2 = (int *)(in_ECX + 0xa8);
    ExceptionList = &local_14;
    FUN_009a1750(piVar2,0);
    FUN_009885d0();
    local_c = 2;
    uVar1 = FUN_004015b0(local_6c0,0x2a,3);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987d50(uVar1,"read db password ",0x11,0);
    if (0xf < *(uint *)(in_ECX + 0xbc)) {
      piVar2 = (int *)*piVar2;
    }
    break;
  case 0xdd:
    local_6fc[0] = &PTR_FUN_00e3ede4;
    local_c = 4;
    ExceptionList = &local_14;
    FUN_00a12570(param_1,in_ECX + 8,local_6fc);
    FUN_009885d0();
    local_c._0_1_ = 5;
    uVar1 = FUN_004015b0(local_650,0x31,3);
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_1c = 5;
    FUN_00987ac0(appuStack_130);
    appuStack_130[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_130);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  case 0xe0:
    piVar2 = (int *)(in_ECX + 0x8c);
    ExceptionList = &local_14;
    FUN_009a1750(piVar2,0);
    FUN_009885d0();
    local_c = 0;
    uVar1 = FUN_004015b0(local_634,0x26,3);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987d50(uVar1,"read db username ",0x11,0);
    if (0xf < *(uint *)(in_ECX + 0xa0)) {
      piVar2 = (int *)*piVar2;
    }
    uVar1 = FUN_00418e30(uVar1,piVar2);
    FUN_00401280(uVar1);
    uStack_1c = 0;
    FUN_00987ac0(appuStack_5b0);
    appuStack_5b0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_5b0);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  case 0xe7:
    ExceptionList = &local_14;
    FUN_009a1750(in_ECX + 0x50,0);
    FUN_009885d0();
    local_c = 0xb;
    uVar1 = FUN_004015b0(local_6a4,0x3e,3);
    local_c = CONCAT31(local_c._1_3_,0xc);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_1c = 0xb;
    FUN_00987ac0(appuStack_370);
    appuStack_370[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_370);
    FUN_00408ad0();
    ExceptionList = pvStack_24;
    return;
  case 0x115:
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 0xc4) + 0xc))(param_1);
    FUN_009885d0();
    puStack_10 = (undefined1 *)0xf;
    uVar1 = FUN_004015b0(local_6fc,0x46,3);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
    FUN_00987d50(uVar1,"read channel list ",0x12,0);
    FUN_00401280(uVar1);
    uStack_20 = 0xf;
    FUN_00987ac0(appuStack_74);
    appuStack_74[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_74);
    FUN_00408ad0();
    ExceptionList = pvStack_28;
    return;
  }
  uVar1 = FUN_00418e30(uVar1,piVar2);
  FUN_00401280(uVar1);
  uStack_1c = 2;
  FUN_00987ac0(appuStack_430);
  appuStack_430[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_430);
  FUN_00408ad0();
  ExceptionList = pvStack_24;
  return;
}

