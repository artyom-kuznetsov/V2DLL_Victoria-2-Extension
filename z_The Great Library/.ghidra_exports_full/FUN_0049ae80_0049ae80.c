// FUN_0049ae80 @ 0049ae80 body=[[0049ae80, 0049af5d] [0049af61, 0049b03f] [0049b043, 0049b0cd]]


undefined4 FUN_0049ae80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_1a4 [12];
  undefined4 uStack_198;
  uint *local_194;
  char *local_190;
  undefined ***pppuStack_18c;
  undefined **local_100 [19];
  undefined1 local_b4 [92];
  undefined1 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  char local_19 [5];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5b4c1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe78;
  local_8 = 0;
  if (DAT_00f0af24 < 0x10) {
    pppuStack_18c = (undefined ***)&DAT_00f0af10;
  }
  else {
    pppuStack_18c = (undefined ***)DAT_00f0af10;
    if (DAT_00f0af10 == (char *)0x0) {
      return 0;
    }
  }
  if (*(char *)pppuStack_18c != '\0') {
    local_190 = (char *)0x49aed5;
    ExceptionList = &local_10;
    iVar2 = PHYSFS_exists();
    if (iVar2 != 0) {
      local_190 = DAT_00f0af10;
      if (DAT_00f0af24 < 0x10) {
        local_190 = (char *)&DAT_00f0af10;
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      pppuStack_18c = (undefined ***)local_190;
      do {
        cVar1 = *(char *)pppuStack_18c;
        pppuStack_18c = (undefined ***)((int)pppuStack_18c + 1);
      } while (cVar1 != '\0');
      pppuStack_18c = (undefined ***)((int)pppuStack_18c - (int)(local_190 + 1));
      local_194 = (uint *)0x49af19;
      FUN_00409350();
      local_58 = local_1a4;
      local_8._0_1_ = 1;
      local_190 = (char *)0xf;
      local_194 = (uint *)0x0;
      local_1a4[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_b4,local_38,0);
      local_8._0_1_ = 3;
      if (0xf < local_24) {
        pppuStack_18c = (undefined ***)local_38[0];
                    /* WARNING: Subroutine does not return */
        local_190 = &UNK_0049af5e;
        FUN_00aae91b();
      }
      pppuStack_18c = (undefined ***)0x1;
      local_190 = local_19;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      local_19[0] = '\0';
      local_194 = (uint *)0x49af7e;
      FUN_00992f20();
      if (local_19[0] == '\x03') {
        iVar2 = *(int *)(param_1 + 0x2ab0);
        local_190 = *(char **)(param_1 + 0x2ab4);
        iVar2 = ((iVar2 + -1) * iVar2) / 2 + iVar2;
        pppuStack_18c = (undefined ***)(iVar2 * 2);
        local_194 = (uint *)0x49b09b;
        FUN_00992f20();
        local_190 = *(char **)(param_1 + 0x2ab8);
        local_194 = (uint *)0x49b0ae;
        pppuStack_18c = (undefined ***)iVar2;
        FUN_00992f20();
        pppuStack_18c = (undefined ***)0x49b0b9;
        FUN_00992d60();
        ExceptionList = local_10;
        return 1;
      }
      pppuStack_18c = (undefined ***)0x7;
      local_190 = "map.cpp";
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      local_194 = (uint *)0x49afa0;
      FUN_00409350();
      pppuStack_18c = (undefined ***)0x10004;
      local_194 = local_54;
      local_190 = (char *)0x356;
      local_8._0_1_ = 4;
      uStack_198 = 0x49afbe;
      FUN_004015b0();
      local_8._0_1_ = 5;
      pppuStack_18c = (undefined ***)0x49afd1;
      local_190 = (char *)FUN_00987d20();
      pppuStack_18c = (undefined ***)DAT_00f0af10;
      if (DAT_00f0af24 < 0x10) {
        pppuStack_18c = (undefined ***)&DAT_00f0af10;
      }
      local_194 = (uint *)0x49aff0;
      local_190 = (char *)FUN_00418e30();
      pppuStack_18c = (undefined ***)0xdfc4f0;
      local_194 = (uint *)0x49affe;
      pppuStack_18c = (undefined ***)FUN_00418e30();
      local_190 = (char *)0x49b007;
      FUN_00401280();
      pppuStack_18c = local_100;
      local_8 = CONCAT31(local_8._1_3_,4);
      local_190 = (char *)0x49b019;
      FUN_00987ac0();
      pppuStack_18c = local_100;
      local_100[0] = std::ios_base::vftable;
      local_190 = (char *)0x49b02f;
      FUN_00aad52d();
      if (0xf < local_40) {
        pppuStack_18c = (undefined ***)local_54[0];
                    /* WARNING: Subroutine does not return */
        local_190 = &UNK_0049b040;
        FUN_00aae91b();
      }
      pppuStack_18c = (undefined ***)0x49b04e;
      FUN_00992d60();
    }
  }
  ExceptionList = local_10;
  return 0;
}

