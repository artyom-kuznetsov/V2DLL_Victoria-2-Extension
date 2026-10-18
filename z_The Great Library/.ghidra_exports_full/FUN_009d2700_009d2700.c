// FUN_009d2700 @ 009d2700 body=[[009d2700, 009d2825] [009d2829, 009d28f2] [009d28f6, 009d2909]]


void FUN_009d2700(LPBYTE param_1)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  HKEY local_1dc;
  DWORD local_1d8 [2];
  uint local_1d0 [3];
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  undefined1 local_1b4 [4];
  uint uStack_1b0;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined **appuStack_120 [44];
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = -1;
  puStack_10 = &LAB_00b56d2c;
  pvStack_14 = ExceptionList;
  local_1d8[0] = 0xff;
  local_1dc = (HKEY)0x0;
  ExceptionList = &pvStack_14;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\Cryptography",0,0x20119,&local_1dc);
  if (LVar1 != 0) {
    local_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4[0] = 0;
    FUN_00409350("dlc.cpp",7);
    local_c = 2;
    uVar2 = FUN_004015b0(local_1b4,0x180,0x1000);
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_00987d50(uVar2,"Failed to read from registry",0x1c,0);
    FUN_00401280(uVar2);
    uStack_1c = 2;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1c4);
    }
    ExceptionList = pvStack_24;
    return;
  }
  local_1d8[1] = 1;
  LVar1 = RegQueryValueExA(local_1dc,"MachineGuid",(LPDWORD)0x0,local_1d8 + 1,param_1,local_1d8);
  if (LVar1 != 0) {
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0[0] = local_1d0[0] & 0xffffff00;
    FUN_00409350("dlc.cpp",7);
    local_c = 0;
    uVar2 = FUN_004015b0(local_1d0,0x177,0x1000);
    local_c._0_1_ = 1;
    FUN_00987d50(uVar2,"Failed to identify system GUID",0x1e,0);
    FUN_00401280(uVar2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_120);
    appuStack_120[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_120);
    if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1d0[0]);
    }
  }
  RegCloseKey(local_1dc);
  ExceptionList = pvStack_14;
  return;
}

