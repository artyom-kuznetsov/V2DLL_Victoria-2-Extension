// FUN_00903a60 @ 00903a60 body=[[00903a60, 00903b6d] [00903b76, 00903c79] [00903c7f, 00903c99] [00903c9d, 00903cb3]]


void FUN_00903a60(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  LPSTR lpsz;
  int in_ECX;
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b58977;
  pvStack_14 = ExceptionList;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_0045be80(param_1,&local_e8);
  iVar1 = local_e8;
  if ((local_e4 - local_e8) / 0x1c == 3) {
    FUN_00408ed0(local_e8,0,0xffffffff);
    piVar4 = (int *)(iVar1 + 0x1c);
    if (0xf < *(uint *)(iVar1 + 0x30)) {
      piVar4 = (int *)*piVar4;
    }
    uVar3 = FUN_00aaf0c5(piVar4);
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    piVar4 = (int *)(iVar1 + 0x38);
    if (0xf < *(uint *)(iVar1 + 0x4c)) {
      piVar4 = (int *)*piVar4;
    }
    uVar3 = FUN_00aaf0c5(piVar4);
    *(undefined4 *)(in_ECX + 0x3c) = uVar3;
    if (*(uint *)(in_ECX + 0x34) < 0x10) {
      lpsz = (LPSTR)(in_ECX + 0x20);
    }
    else {
      lpsz = *(LPSTR *)(in_ECX + 0x20);
    }
    CharLowerBuffA(lpsz,*(DWORD *)(in_ECX + 0x30));
    cVar2 = FUN_00464f10();
    if (cVar2 == '\0') {
      *(undefined1 *)(in_ECX + 0x40) = 1;
    }
    else {
      local_f0 = 0xf;
      local_f4 = 0;
      local_104[0] = local_104[0] & 0xffffff00;
      FUN_00409350("trigger.cpp",0xb);
      local_c._0_1_ = 3;
      uVar3 = FUN_004015b0(local_104,0x2647,0x10004);
      local_c._0_1_ = 4;
      FUN_00987d50(uVar3,"length_eq has invalid array name. Allowed: tags, values, strings\n",0x41,0
                  );
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_104[0]);
      }
    }
  }
  else {
    local_f0 = 0xf;
    local_f4 = 0;
    local_104[0] = local_104[0] & 0xffffff00;
    FUN_00409350("trigger.cpp",0xb);
    local_c._0_1_ = 1;
    uVar3 = FUN_004015b0(local_104,0x263c,0x10004);
    local_c._0_1_ = 2;
    FUN_00987d50(uVar3,"length_eq has invalid amount of arguments.\n",0x2b,0);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_104[0]);
    }
  }
  if (iVar1 == 0) {
    ExceptionList = pvStack_14;
    return;
  }
  FUN_00413860();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

