// FUN_009bdb20 @ 009bdb20 body=[[009bdb20, 009bdbb9] [009bdbc0, 009bdc93] [009bdc97, 009bdcb5] [009bdcb9, 009bdccf] [009bdcd3, 009bdced] [009bdcf3, 009bde1e] [009bde22, 009bde4c] [009bde50, 009bde75] [009bde79, 009bde98] [009bde9c, 009bdeb2] [009bdeb6, 009bdecc] [009bded0, 009bdeed] [009bdef1, 009bdf2a] [009bdf2e, 009bdf3e]]


undefined1 * FUN_009bdb20(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_1e4 [100];
  char local_180 [32];
  undefined1 local_160 [4];
  char *local_15c;
  char *local_150;
  int local_14c;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b49e53;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_70 = 1;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  local_8 = 1;
  uStack_7 = 0;
  iVar6 = 0;
  iVar2 = lua_getstack(param_2,0,local_1e4);
  while (iVar2 != 0) {
    iVar6 = iVar6 + 1;
    iVar2 = lua_getstack(param_2,iVar6,local_1e4);
  }
  if (0 < iVar6) {
    local_14 = iVar6 + -1;
    local_18 = iVar6;
    do {
      lua_getstack(param_2,local_14,local_160);
      lua_getinfo(param_2,"nSluf",local_160);
      if (local_15c == (char *)0x0) {
        FUN_00448aa0(local_a8,0,0xffffffff);
      }
      else {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfcafc,3);
        local_8 = 2;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        pcVar3 = local_15c;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(local_15c,(int)pcVar3 - (int)(local_15c + 1));
        local_8 = 3;
        FUN_00988f20(local_34);
        local_8 = 4;
        uVar4 = FUN_00988f20(local_50);
        local_8 = 5;
        FUN_00448aa0(uVar4,0,0xffffffff);
        if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_8c[0]);
        }
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_8 = 1;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 6;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350(&DAT_00e004e4,1);
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_8 = 8;
      pcVar5 = __itoa(local_14c,local_180,10);
      pcVar3 = pcVar5;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar5,(int)pcVar3 - (int)(pcVar5 + 1));
      local_8 = 9;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      pcVar3 = local_150;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(local_150,(int)pcVar3 - (int)(local_150 + 1));
      local_8 = 10;
      FUN_00988f20(local_50);
      local_8 = 0xb;
      FUN_00988f20(local_6c);
      local_8 = 0xc;
      uVar4 = FUN_00988f20(local_8c);
      local_8 = 0xd;
      FUN_00448aa0(uVar4,0,0xffffffff);
      if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_e0);
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0 = local_e0 & 0xffffff00;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc);
      }
      local_e8 = 0xf;
      local_ec = 0;
      local_fc = local_fc & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4);
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_8 = 1;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c[0]);
      }
      FUN_00448740(&DAT_00e37c08,1);
      local_14 = local_14 + -1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

