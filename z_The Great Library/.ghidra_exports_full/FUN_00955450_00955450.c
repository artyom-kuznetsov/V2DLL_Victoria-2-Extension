// FUN_00955450 @ 00955450 body=[[00955450, 00955768] [0095576c, 009558c8] [009558d0, 00955978]]


undefined4 * FUN_00955450(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4a834;
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
  local_8 = 1;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x4c);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x19] = *(undefined4 *)(param_2 + 100);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  FUN_00955980(param_1 + 0x1d);
  local_8 = 2;
  FUN_00955980(param_1 + 0x27);
  local_8 = 3;
  FUN_00955980(param_1 + 0x31);
  local_8 = 4;
  FUN_00955980(param_1 + 0x3b);
  local_8 = 5;
  param_1[0x46] = *(undefined4 *)(param_2 + 0x118);
  param_1[0x47] = *(undefined4 *)(param_2 + 0x11c);
  param_1[0x48] = *(undefined4 *)(param_2 + 0x120);
  param_1[0x49] = *(undefined4 *)(param_2 + 0x124);
  param_1[0x4a] = *(undefined4 *)(param_2 + 0x128);
  param_1[0x4b] = *(undefined4 *)(param_2 + 300);
  param_1[0x4c] = *(undefined4 *)(param_2 + 0x130);
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x134);
  param_1[0x4e] = *(undefined4 *)(param_2 + 0x138);
  param_1[0x4f] = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x50] = *(undefined4 *)(param_2 + 0x140);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x144);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = *(undefined4 *)(param_2 + 0x150);
  param_1[0x55] = *(undefined4 *)(param_2 + 0x154);
  param_1[0x60] = *(undefined4 *)(param_2 + 0x180);
  param_1[0x61] = *(undefined4 *)(param_2 + 0x184);
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
  param_1[0x72] = *(undefined4 *)(param_2 + 0x1c8);
  param_1[0x73] = *(undefined4 *)(param_2 + 0x1cc);
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 6;
  param_1[0x88] = 0;
  param_1[0x89] = DAT_01268fec;
  param_1[0x8a] = DAT_01268ff0;
  param_1[0x90] = 0xf;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 7;
    uVar1 = local_8;
    local_8 = 7;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = *(undefined4 *)(param_2 + 0x268);
    param_1[0x9b] = 0;
    param_1[0x9c] = *(undefined4 *)(param_2 + 0x270);
    param_1[0x9d] = *(undefined4 *)(param_2 + 0x274);
    if (DAT_0131bb34 == 0) {
      iVar2 = FUN_00aae9af(0x188);
      local_8 = 8;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0041a160();
      }
      local_8 = 7;
      FUN_00423700(uVar3);
      uVar1 = local_8;
    }
    local_8 = uVar1;
    DAT_00f20c04 = DAT_0131bb34;
    DAT_00f20c08 = DAT_012586dc;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    if (*(int *)(param_2 + 0x1d4) != 0) {
      if (param_1[0x75] == 0) {
        iVar2 = FUN_00aae9af(0x100);
        local_8 = 9;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00954910(iVar2);
        }
        local_8 = 7;
        param_1[0x75] = uVar3;
      }
      FUN_0047dbb0(param_1[0x75],*(undefined4 *)(param_2 + 0x1d4));
    }
    iVar2 = DAT_01258a48;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    iVar4 = 0;
    iVar2 = *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2;
    if (0 < iVar2) {
      do {
        *(undefined4 *)(param_1[0x2d] + iVar4 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a48 + 0x18) + iVar4 * 4) + 0x30);
        *(undefined4 *)(param_1[0x41] + iVar4 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a48 + 0x18) + iVar4 * 4) + 0x30);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    iVar2 = 0;
    iVar4 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
    if (0 < iVar4) {
      do {
        *(undefined4 *)(param_1[0x23] + iVar2 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a3c + 0xc) + iVar2 * 4) + 8);
        *(undefined4 *)(param_1[0x37] + iVar2 * 4) =
             *(undefined4 *)(*(int *)(*(int *)(DAT_01258a3c + 0xc) + iVar2 * 4) + 8);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(undefined1 *)((int)param_1 + 0x1d2) = 0;
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

