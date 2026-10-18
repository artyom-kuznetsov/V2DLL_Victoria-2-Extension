// FUN_00496ee0 @ 00496ee0 body=[[00496ee0, 0049723c] [00497240, 0049728f] [004972a9, 00497550] [0049756a, 0049760d]]


void FUN_00496ee0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar4;
  uint local_260 [4];
  undefined4 local_250;
  uint local_24c;
  undefined4 local_244 [5];
  uint local_230;
  undefined1 local_228 [28];
  undefined1 local_20c [28];
  undefined1 local_1f0 [28];
  undefined1 local_1d4 [28];
  undefined1 local_1b8 [28];
  undefined1 local_19c [28];
  undefined1 local_180 [28];
  undefined1 local_164 [28];
  undefined1 local_148 [28];
  undefined1 local_12c [28];
  undefined1 local_110 [28];
  undefined1 local_f4 [148];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b605;
  local_14 = ExceptionList;
  if (param_2 < 0x3a4) {
    if (param_2 == 0x3a3) {
      pcVar2 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
      uVar3 = FUN_00496b60(local_244);
      local_c = 7;
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (local_230 < 0x10) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_244[0]);
    }
    switch(param_2) {
    case 0x285:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x20bc);
      uVar3 = FUN_00496b60(local_164);
      local_c = 1;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x286:
      ExceptionList = &local_14;
      uVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x2234) = uVar3;
      ExceptionList = local_14;
      return;
    case 0x287:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x2138);
      uVar3 = FUN_00496b60(local_12c);
      local_c = 0;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x2b4:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x20d8);
      uVar3 = FUN_00496b60(local_1d4);
      local_c = 2;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x2b5:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x2154);
      uVar3 = FUN_00496b60(local_19c);
      local_c = 5;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x32c:
      ExceptionList = &local_14;
      FUN_00409810(param_1,in_ECX + 0x2214);
      ExceptionList = local_14;
      return;
    case 0x33b:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x33c:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x21c8);
      uVar3 = FUN_00496b60(local_228);
      local_c = 10;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x341:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x2084);
      uVar3 = FUN_00496b60(local_f4);
      local_c = 3;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    case 0x353:
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x20f4);
      uVar3 = FUN_00496b60(local_20c);
      local_c = 0xc;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 < 0x7aa) {
    if (param_2 == 0x7a9) {
      iVar4 = in_ECX + 0x30;
LAB_004975f3:
      ExceptionList = &local_14;
      FUN_005e5a20(param_1,iVar4);
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x4a3) {
      if (param_2 == 0x4a2) {
        ExceptionList = &local_14;
        FUN_004012f0(in_ECX + 0x218c);
        uVar3 = FUN_00496b60(local_180);
        local_c = 8;
        FUN_00408ed0(uVar3,0,0xffffffff);
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x43c) {
        ExceptionList = &local_14;
        FUN_004012f0(in_ECX + 0x2068);
        uVar3 = FUN_00496b60(local_1b8);
        local_c = 0xb;
        FUN_00408ed0(uVar3,0,0xffffffff);
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x46c) {
        ExceptionList = &local_14;
        FUN_004012f0(in_ECX + 0x20a0);
        uVar3 = FUN_00496b60(local_1f0);
        local_c = 6;
        FUN_00408ed0(uVar3,0,0xffffffff);
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 == 0x611) {
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x21a8);
      uVar3 = FUN_00496b60(local_148);
      local_c = 9;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x7aa) {
      iVar4 = in_ECX + 0x40;
      goto LAB_004975f3;
    }
    if (param_2 == 0x7ad) {
      ExceptionList = &local_14;
      FUN_009a1de0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x8f9) {
      ExceptionList = &local_14;
      FUN_004012f0(in_ECX + 0x2110);
      uVar3 = FUN_00496b60(local_110);
      local_c = 4;
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
  }
  local_24c = 0xf;
  local_250 = 0;
  local_260[0] = local_260[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("map.cpp",7);
  local_c = 0xd;
  uVar3 = FUN_004015b0(local_260,0x115,0x10004);
  local_c._0_1_ = 0xe;
  FUN_00987d50(uVar3,"Unknown field \'",0xf,0);
  uVar3 = FUN_00418e30(uVar3,param_1 + 0x24,extraout_ECX,"\' in mapfile");
  uVar3 = FUN_00418e30(uVar3);
  FUN_00401280(uVar3);
  local_c = CONCAT31(local_c._1_3_,0xd);
  FUN_00987ac0(appuStack_60);
  appuStack_60[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_60);
  if (local_24c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_260[0]);
}

