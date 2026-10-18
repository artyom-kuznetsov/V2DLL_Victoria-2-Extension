// FUN_00991ae0 @ 00991ae0 body=[[00991ae0, 00991b2c] [00991b30, 00991c2f] [00991c36, 00991c51] [00991c58, 00991c7a] [00991c7e, 00991dad] [00991db1, 00991ddd] [00991de1, 00991dfd] [00991e01, 00991e18] [00991e1c, 00991e45] [00991e49, 00991e65] [00991e69, 00991e80] [00991e84, 00991e94]]


void FUN_00991ae0(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *in_ECX;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f80b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar4 = (char *)PHYSFS_getRealDir();
  if (pcVar4 != (char *)0x0) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
    local_8 = 0;
    FUN_00448740(&DAT_00dedc68,1);
    pcVar4 = in_ECX;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00448740(in_ECX,(int)pcVar4 - (int)(in_ECX + 1));
    FUN_00989720(local_6c,&DAT_00dedc68);
    FUN_00989510(&local_24,0x2f);
    local_8._0_1_ = 1;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_1,(int)pcVar4 - (int)(param_1 + 1));
    local_8._0_1_ = 2;
    FUN_00989510(&local_34,0x2f);
    local_8._0_1_ = 3;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 3;
    iVar7 = ((int)local_30 - (int)local_34) / 0x1c;
    if (((int)local_20 - (int)local_24) / 0x1c < iVar7) {
      if (local_34 != (undefined4 *)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      local_34 = (undefined4 *)0x0;
      local_30 = (undefined4 *)0x0;
      local_2c = 0;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (local_24 != (undefined4 *)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_24);
      }
    }
    else {
      iVar7 = iVar7 + -1;
      if (-1 < iVar7) {
        iVar6 = iVar7 * 0x1c;
        do {
          FUN_00408ed0((undefined1 *)(iVar6 + (int)local_34),0,0xffffffff);
          iVar6 = iVar6 + -0x1c;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      local_8._0_1_ = 4;
      iVar7 = 0;
      if (0 < ((int)local_20 - (int)local_24) / 0x1c) {
        iVar6 = 0;
        do {
          if (iVar7 != 0) {
            FUN_00448740(&DAT_00dedc68,1);
          }
          FUN_00448aa0((undefined1 *)(iVar6 + (int)local_24),0,0xffffffff);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar7 < ((int)local_20 - (int)local_24) / 0x1c);
      }
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (int *)0x0) {
          DAT_00f20c18 = (int *)0x0;
        }
        else {
          *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
        }
      }
      (**(code **)(*DAT_00f20c18 + 0x28))(local_6c,local_88);
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      puVar2 = local_34;
      if (local_34 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar2 == local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34);
          }
          if (0xf < (uint)puVar2[5]) break;
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          *(undefined1 *)puVar2 = 0;
          puVar2 = puVar2 + 7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar2);
      }
      local_34 = (undefined4 *)0x0;
      local_30 = (undefined4 *)0x0;
      local_2c = 0;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      puVar2 = local_24;
      uVar3 = (undefined1)local_8;
      if (local_24 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar2 == local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_24);
          }
          if (0xf < (uint)puVar2[5]) break;
          puVar2[5] = 0xf;
          puVar2[4] = 0;
          *(undefined1 *)puVar2 = 0;
          puVar2 = puVar2 + 7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar2);
      }
    }
    local_8._0_1_ = uVar3;
    if (0xf < local_58) {
      local_1c = 0;
      local_20 = (undefined4 *)0x0;
      local_24 = (undefined4 *)0x0;
      local_2c = 0;
      local_30 = (undefined4 *)0x0;
      local_34 = (undefined4 *)0x0;
      local_3c = 0xf;
      local_40 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

