// FUN_004c3440 @ 004c3440 body=[[004c3440, 004c39e2]]


undefined4 * FUN_004c3440(undefined4 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined **local_38;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_24 [3];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_01258704;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b75ca2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = CMapIconClient::vftable;
  *param_1 = CProvinceTemplate::vftable;
  param_1[2] = CProvinceTemplate::vftable;
  if (iVar1 == 0) {
    local_18 = FUN_00aae9af(0x54);
    local_8 = 0;
    if (local_18 == 0) {
      iVar1 = 0;
      DAT_01258704 = iVar1;
    }
    else {
      iVar1 = FUN_00490c40(local_18);
      DAT_01258704 = iVar1;
    }
  }
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[0xc] = param_3;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0x18d;
  param_1[0xf] = CMapPoint::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0x18d;
  param_1[0x13] = CMapPoint::vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0x18d;
  param_1[0x17] = CMapPoint::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = DAT_00f092fc;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = param_2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  local_8._0_1_ = 5;
  local_8._1_3_ = 0;
  param_1[0x54] = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 == 0) {
    param_2 = (char *)0x0;
    std::exception::exception((exception *)&local_34,&param_2);
    local_34 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_00e6fb20);
  }
  param_1[0x53] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[0x53] + 4) = param_1[0x53];
  *(undefined4 *)(param_1[0x53] + 8) = param_1[0x53];
  *(undefined1 *)(param_1[0x53] + 0x14) = 1;
  *(undefined1 *)(param_1[0x53] + 0x15) = 1;
  local_8._0_1_ = 6;
  param_1[0x58] = 0;
  iVar1 = FUN_00aae9af(0x18);
  if (iVar1 == 0) {
    param_3 = (char *)0x0;
    std::exception::exception((exception *)local_24,&param_3);
    local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb20);
  }
  param_1[0x57] = iVar1;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[0x57] + 4) = param_1[0x57];
  *(undefined4 *)(param_1[0x57] + 8) = param_1[0x57];
  *(undefined1 *)(param_1[0x57] + 0x14) = 1;
  *(undefined1 *)(param_1[0x57] + 0x15) = 1;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = 0x18d;
  param_1[0x6b] = CMapPoint::vftable;
  param_1[0x70] = 0x18d;
  param_1[0x6f] = CMapPoint::vftable;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0x18d;
  param_1[0x73] = CMapPoint::vftable;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  puVar2 = param_1 + 0x78;
  iVar1 = 0x29;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  param_1[0xd8] = 0;
  param_1[0xd9] = 0xfffffc18;
  param_1[0xda] = 0;
  if ((int)param_1[0x2d] < 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(char *)(param_1[0x2d] + *(int *)(DAT_0125870c + 0x2224)) != '\0';
  }
  *(bool *)((int)param_1 + 0x2a) = !bVar6;
  param_1[0xb] = 0;
  FUN_004c3be0(param_1);
  _memset(param_1 + 0x78,0,0x150);
  FUN_004c8e00(10);
  if (*(char *)(DAT_0125870c + 0x28) != '\0') {
    FUN_004237e0(2000);
  }
  if (DAT_0125ce80 == 0) {
    param_3 = (char *)FUN_00aae9af(0x3c);
    local_8._0_1_ = 0xb;
    if (param_3 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004dada0();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_004dc340(uVar3);
  }
  uVar5 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  uVar4 = (int)(param_1[0xcd] - param_1[0xcc]) >> 4;
  local_34 = (undefined **)0x18d;
  local_38 = CMapPoint::vftable;
  local_30 = 0;
  local_2c = 0;
  if (uVar4 < uVar5) {
    FUN_004c9160(param_1 + 0xcc,param_1[0xcd],uVar5 - uVar4,&local_38);
  }
  else if (uVar5 < uVar4) {
    FUN_004c90f0(param_1 + 0xcc,&param_3,uVar5 * 0x10 + param_1[0xcc],param_1[0xcd]);
  }
  uVar4 = (int)(param_1[0xd1] - param_1[0xd0]) >> 2;
  param_3 = (char *)0x0;
  if (uVar4 < uVar5) {
    FUN_004c8ee0(param_1 + 0xd0,param_1[0xd1],&param_3);
  }
  else if (uVar5 < uVar4) {
    FUN_0054ab90(param_1 + 0xd0,param_1[0xd0] + uVar5 * 4,param_1[0xd1]);
  }
  uVar4 = (int)(param_1[0xd5] - param_1[0xd4]) >> 2;
  param_3 = (char *)0x0;
  if (uVar4 < uVar5) {
    FUN_004c8ee0(param_1 + 0xd4,param_1[0xd5],&param_3);
  }
  else if (uVar5 < uVar4) {
    FUN_0054ab90(param_1 + 0xd4,param_1[0xd4] + uVar5 * 4,param_1[0xd5]);
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_004c30d0();
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  ExceptionList = local_10;
  return param_1;
}

