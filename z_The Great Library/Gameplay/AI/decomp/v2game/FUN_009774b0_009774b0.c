// FUN_009774b0 @ 009774b0 body=[[009774b0, 00977654] [00977658, 00977bc5] [00977bc9, 00977bfb] [00977bff, 00977c8f] [00977c93, 00977dd7] [00977ddb, 00977e0c] [00977e10, 00977e37] [00977e3b, 00977e51]]


/* WARNING: Removing unreachable block (ram,0x0097764b) */
/* WARNING: Removing unreachable block (ram,0x00977c86) */

void FUN_009774b0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  uint uStack_594;
  uint uStack_578;
  uint uStack_55c;
  uint uStack_540;
  uint uStack_524;
  uint uStack_508;
  void *pvStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8323d;
  local_14 = ExceptionList;
  if (param_2 < 0x33b) {
    if (param_2 == 0x33a) {
      pcVar5 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar5 - (param_1 + 0x22d));
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x1a) {
      pcVar5 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x339) {
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x4c6) {
    pcVar5 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    iVar4 = FUN_00973bd0();
    local_c = 0xffffffff;
    if (iVar4 != 0) {
      *(int *)(in_ECX + 0x54) = iVar4;
      ExceptionList = local_14;
      return;
    }
    FUN_00409350();
    local_c = 1;
    FUN_0055dd40();
    local_c._0_1_ = 2;
    FUN_009790b0();
    local_c._0_1_ = 3;
    FUN_004015b0();
    local_c = CONCAT31(local_c._1_3_,4);
    FUN_00987d50();
    uVar3 = FUN_00418e30();
    FUN_00418e30(uVar3);
    FUN_00418e30();
    FUN_00401280();
    FUN_00987ac0();
    FUN_00aad52d();
    if (0xf < uStack_540) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < uStack_508) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto joined_r0x00977e2c;
  }
  pcVar5 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 5;
  iVar2 = FUN_004a2f70();
  iVar4 = DAT_0131be94;
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
  local_c = 0xffffffff;
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x5c) != 1) {
      FUN_009885d0();
      local_c = 0xf;
      FUN_0055dd40();
      local_c._0_1_ = 0x10;
      FUN_009790b0();
      local_c._0_1_ = 0x11;
      uVar3 = FUN_004015b0();
      local_c = CONCAT31(local_c._1_3_,0x12);
      FUN_00987d50();
      FUN_00418e30(uVar3);
      FUN_00418e30();
      uVar3 = FUN_00418e30();
      FUN_00418e30(uVar3);
      FUN_00418e30();
      FUN_00401280();
      FUN_00987ac0();
      FUN_00aad52d();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = pvStack_24;
      return;
    }
    FUN_009885d0();
    local_c = 6;
    iVar2 = FUN_00975ed0();
    if (iVar2 == 0) {
      iVar2 = FUN_00974850();
    }
    local_c = 0xffffffff;
    FUN_00408ad0();
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x54) == iVar4) {
        *(int *)(*(int *)(in_ECX + 0x58) + *(int *)(iVar4 + 0x50) * 4) = iVar2;
        ExceptionList = local_14;
        return;
      }
      FUN_009885d0();
      local_c = 7;
      FUN_0055dd40();
      local_c._0_1_ = 8;
      FUN_009790b0();
      local_c._0_1_ = 9;
      FUN_004015b0();
      local_c._0_1_ = 10;
      FUN_00987d20();
      FUN_00989050();
      FUN_00418e30();
      FUN_00989050();
      FUN_00418e30();
      FUN_00989050();
      FUN_00418e30();
      FUN_00989050();
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,9);
      FUN_00401650();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
    FUN_009885d0();
    local_c = 0xb;
    FUN_0055dd40();
    local_c._0_1_ = 0xc;
    FUN_009790b0();
    local_c._0_1_ = 0xd;
    FUN_004015b0();
    local_c._0_1_ = 0xe;
    FUN_00987d20();
    FUN_00418e30();
    FUN_00418e30();
    FUN_00989050();
    FUN_00418e30();
    FUN_00989050();
    FUN_00401280();
    local_c = CONCAT31(local_c._1_3_,0xd);
    FUN_00401650();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  }
  FUN_00409350();
  local_c = 0x13;
  FUN_0055dd40();
  local_c._0_1_ = 0x14;
  FUN_009790b0();
  local_c._0_1_ = 0x15;
  uVar3 = FUN_004015b0();
  local_c = CONCAT31(local_c._1_3_,0x16);
  FUN_00987d50();
  FUN_00418e30(uVar3);
  FUN_00418e30();
  uVar3 = FUN_00418e30();
  FUN_00418e30(uVar3);
  FUN_00418e30();
  FUN_00401280();
  FUN_00987ac0();
  FUN_00aad52d();
  if (0xf < uStack_524) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_578 = uStack_594;
  if (0xf < uStack_55c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x00977e2c:
  if (uStack_578 < 0x10) {
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

