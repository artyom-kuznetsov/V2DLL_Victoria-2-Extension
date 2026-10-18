// FUN_0089c810 @ 0089c810 body=[[0089c810, 0089c907] [0089c922, 0089cb11]]


void FUN_0089c810(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  uint local_1d8 [4];
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 local_1bc [8];
  undefined1 local_1b4 [148];
  undefined **appuStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58c6c;
  local_14 = ExceptionList;
  if (param_2 == 0x6a) {
    iVar3 = *(int *)(param_1 + 0x228);
    if (iVar3 == 0x38b) {
      *(undefined1 *)(in_ECX + 0x40) = 1;
    }
    else {
      if (iVar3 == 0x3de) {
        *(undefined1 *)(in_ECX + 0x1d) = 1;
        return;
      }
      if (iVar3 == 0x405) {
        *(undefined1 *)(in_ECX + 0x1c) = 1;
        return;
      }
      param_1 = param_1 + 0x22c;
      ExceptionList = &local_14;
      puVar5 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_1bc,param_1);
      *(undefined4 *)(in_ECX + 0x44) = *puVar5;
      iVar3 = puVar5[1];
      *(int *)(in_ECX + 0x48) = iVar3;
      if (iVar3 == 0) {
        iVar3 = FUN_00aaf0c5(param_1);
        iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4);
        if (0 < *(int *)(iVar3 + 0x58)) {
          *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(iVar3 + 0x128);
          *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(iVar3 + 300);
        }
        if (*(int *)(in_ECX + 0x48) == 0) {
          FUN_009885d0();
          local_c = 0;
          FUN_004015b0(local_1b4,0x15ca,0x10004);
          local_c._0_1_ = 1;
          uVar2 = FUN_00987d20(param_1,extraout_ECX,"\' in a casus_belli effect");
          uVar2 = FUN_00418e30(uVar2);
          uVar2 = FUN_00418e30(uVar2);
          FUN_00401280(uVar2);
          local_c = (uint)local_c._1_3_ << 8;
          FUN_00401650();
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
      }
    }
  }
  else {
    if (param_2 == 0xd9) {
      pcVar4 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x3bf) {
      ExceptionList = &local_14;
      iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
      if (iVar3 == 0) {
        FUN_009a1140();
        ExceptionList = local_14;
        return;
      }
    }
    else {
      local_1c4 = 0xf;
      local_1c8 = 0;
      local_1d8[0] = local_1d8[0] & 0xffffff00;
      ExceptionList = &local_14;
      FUN_00409350("effect.cpp",10);
      local_c = 2;
      uVar2 = FUN_004015b0(local_1d8,0x15d2,0x10004);
      local_c._0_1_ = 3;
      FUN_00987d50(uVar2,"Unknown field in a casus_belli effect",0x25,0);
      FUN_00401280(uVar2);
      local_c = CONCAT31(local_c._1_3_,2);
      FUN_00987ac0(appuStack_120);
      appuStack_120[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_120);
      if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1d8[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

