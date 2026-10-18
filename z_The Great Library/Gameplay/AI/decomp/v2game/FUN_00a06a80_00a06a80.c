// FUN_00a06a80 @ 00a06a80 body=[[00a06a80, 00a06c1c] [00a06c20, 00a06c34]]


void FUN_00a06a80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puVar5;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = FUN_009fabb0(in_ECX);
  if (cVar1 != '\0') {
    iVar2 = DAT_01258a94;
    if (DAT_00f0d838 < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_009c1d40();
    }
    puVar5 = (undefined4 *)(in_ECX + 0x74);
    iVar2 = FUN_00a72680(iVar2 + 0x68,puVar5);
    if (iVar2 == 0) {
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = local_f4[0] & 0xffffff00;
      FUN_00409350("metaservercommands.cpp",0x16);
      local_c = 0;
      uVar4 = FUN_004015b0(local_f4,0x6af,4);
      local_c._0_1_ = 1;
      FUN_00987d50(uVar4,"Warning: Atempt to join non-existant game ",0x2a,0);
      if (0xf < *(uint *)(in_ECX + 0x88)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar4 = FUN_00418e30(uVar4,puVar5);
      FUN_00401280(uVar4);
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f4[0]);
      }
    }
    else {
      iVar3 = FUN_00a727a0(in_ECX + 0x3c);
      if (iVar3 != 0) {
        if (*(char *)(in_ECX + 0xac) != '\0') {
          FUN_00a18ac0(iVar2);
          ExceptionList = local_14;
          return;
        }
        FUN_00a169b0();
        ExceptionList = local_14;
        return;
      }
    }
  }
  ExceptionList = local_14;
  return;
}

