// FUN_00954f40 @ 00954f40 body=[[00954f40, 00955252] [00955256, 00955446]]


undefined4 * FUN_00954f40(undefined4 *param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_EDX;
  undefined8 uVar6;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b9038a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = CPop::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar3 = DAT_012587ec;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = in_EDX;
  if (iVar3 == 0) {
    local_14 = FUN_00aae9af(0x98);
    local_8 = 2;
    if (local_14 == 0) {
      iVar3 = 0;
      DAT_012587ec = iVar3;
      uVar1 = uStack_7;
    }
    else {
      iVar3 = FUN_00561080(local_14);
      DAT_012587ec = iVar3;
      uVar1 = uStack_7;
    }
  }
  uStack_7 = uVar1;
  local_8 = 1;
  param_1[0x1b] = iVar3;
  if (DAT_0125880c == 0) {
    local_14 = FUN_00aae9af(0x74);
    local_8 = 3;
    if (local_14 == 0) {
      DAT_0125880c = 0;
    }
    else {
      DAT_0125880c = FUN_00567560(local_14);
    }
  }
  local_8 = 1;
  param_1[0x1c] = DAT_0125880c;
  FUN_004be4f0(param_1 + 0x1d);
  local_8 = 4;
  FUN_004be4f0(param_1 + 0x27);
  local_8 = 5;
  FUN_004be4f0(param_1 + 0x31);
  local_8 = 6;
  FUN_004be4f0(param_1 + 0x3b);
  local_8 = 7;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0x8000;
  param_1[0x4e] = 0x8000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
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
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 8;
  param_1[0x88] = 0;
  param_1[0x89] = DAT_01268fec;
  param_1[0x8a] = DAT_01268ff0;
  param_1[0x90] = 0xf;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 9;
    uVar2 = local_8;
    local_8 = 9;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    if (DAT_00f20c04 == 0) {
      if (DAT_0131bb34 == 0) {
        local_14 = FUN_00aae9af(0x188);
        local_8 = 10;
        if (local_14 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0041a160();
        }
        local_8 = 9;
        FUN_00423700(uVar4);
        uVar2 = local_8;
      }
      local_8 = uVar2;
      DAT_00f20c04 = DAT_0131bb34;
      uVar2 = local_8;
    }
    local_8 = uVar2;
    if (DAT_00f20c08 == 0) {
      DAT_00f20c08 = DAT_012586dc;
    }
    uVar6 = FUN_00b31c36();
    *(undefined8 *)(param_1 + 0x4a) = uVar6;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    if (*(char *)(param_1[0x1a] + 0x39c) != '\0') {
      local_14 = FUN_00aae9af(0x100);
      _local_8 = CONCAT31(uStack_7,0xb);
      if (local_14 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00954910(local_14);
      }
      param_1[0x75] = uVar4;
    }
    iVar3 = DAT_01258a48;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    iVar5 = 0;
    iVar3 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(param_1[0x2d] + iVar5 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a48 + 0x18) + iVar5 * 4) + 0x30);
        *(undefined4 *)(param_1[0x41] + iVar5 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a48 + 0x18) + iVar5 * 4) + 0x30);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    iVar3 = 0;
    iVar5 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
    if (0 < iVar5) {
      do {
        *(undefined4 *)(param_1[0x23] + iVar3 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a3c + 0xc) + iVar3 * 4) + 8);
        *(undefined4 *)(param_1[0x37] + iVar3 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a3c + 0xc) + iVar3 * 4) + 8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined1 *)((int)param_1 + 0x1d2) = 0;
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

