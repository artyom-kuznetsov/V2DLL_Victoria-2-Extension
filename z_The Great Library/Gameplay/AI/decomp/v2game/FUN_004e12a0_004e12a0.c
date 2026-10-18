// FUN_004e12a0 @ 004e12a0 body=[[004e12a0, 004e169d] [004e16b8, 004e18ad]]


void FUN_004e12a0(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *in_ECX;
  char *local_1b0;
  char **local_1ac;
  char *local_19c;
  undefined4 local_198;
  undefined1 *local_194;
  uint local_190 [4];
  undefined4 local_180;
  uint local_17c;
  char local_174 [8];
  char local_16c [8];
  undefined1 local_164 [28];
  undefined1 local_148 [304];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8f49d;
  local_14 = ExceptionList;
  if (param_2 < 0x2c0) {
    if (param_2 == 0x2bf) {
      local_1b0 = param_1 + 0x22c;
      local_17c = 0xf;
      local_180 = 0;
      local_190[0] = local_190[0] & 0xffffff00;
      pcVar7 = local_1b0;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      local_1ac = (char **)((int)pcVar7 - (int)(param_1 + 0x22d));
      ExceptionList = &local_14;
      FUN_00409350();
      local_c = 6;
      local_1ac = (char **)0x4e167c;
      FUN_00971910();
      local_1ac = (char **)local_190;
      local_1b0 = (char *)0x4e1686;
      iVar5 = FUN_009721b0();
      in_ECX[0x10] = iVar5;
      if (local_17c < 0x10) {
        ExceptionList = local_14;
        return;
      }
      local_1ac = (char **)local_190[0];
                    /* WARNING: Subroutine does not return */
      local_1b0 = &UNK_004e169e;
      FUN_00aae91b();
    }
    if (param_2 < 0x286) {
      if (param_2 == 0x285) {
        local_1ac = (char **)(in_ECX + 0x25);
        local_1b0 = param_1;
        ExceptionList = &local_14;
        FUN_00409810();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x1a) {
        local_1ac = (char **)(in_ECX + 0x17);
        local_1b0 = (char *)0x4e14f6;
        ExceptionList = &local_14;
        FUN_004012f0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xd9) {
        local_1ac = (char **)0x4e14ab;
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 3;
        local_1ac = (char **)0x4e14bb;
        FUN_004ebcb0();
        local_1b0 = (char *)0x4e14c3;
        local_1ac = (char **)local_148;
        iVar5 = FUN_005677b0();
        in_ECX[0xc] = iVar5;
        local_1ac = (char **)0x4e14cd;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x1d4) {
        local_1ac = &local_19c;
        local_1b0 = param_1;
        local_19c = (char *)0x0;
        local_198 = 0;
        ExceptionList = &local_14;
        FUN_009a19f0();
        local_194 = (undefined1 *)&local_1b0;
        local_1b0 = local_19c;
        local_1ac = (char **)local_198;
        piVar3 = (int *)FUN_009c16d0();
        if (piVar3 != (int *)0x0) {
          local_1ac = (char **)0x4e1353;
          cVar2 = (**(code **)(*piVar3 + 0x20))();
          if (cVar2 != '\0') {
            iVar5 = in_ECX[0x2a];
            local_1ac = (char **)0x10;
            local_1b0 = (char *)0x4e1368;
            puVar4 = (undefined4 *)FUN_00aae9af();
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = piVar3;
              puVar4[1] = iVar5;
              puVar4[2] = 0;
              *(undefined1 *)(puVar4 + 3) = 0;
            }
            iVar1 = in_ECX[0x2b];
            in_ECX[0x2a] = (int)puVar4;
            in_ECX[0x2b] = iVar1 + 1;
            if (iVar1 == 0) {
              in_ECX[0x29] = (int)puVar4;
              local_1b0 = (char *)0x4e13cc;
              FUN_00965bd0();
              ExceptionList = local_14;
              return;
            }
            *(undefined4 **)(iVar5 + 8) = puVar4;
            local_1b0 = (char *)0x4e13a7;
            FUN_00965bd0();
            ExceptionList = local_14;
            return;
          }
        }
        local_1ac = (char **)0x4e13f1;
        FUN_009885d0();
        local_c = 0;
        local_1b0 = (char *)0x4e1409;
        FUN_0041a080();
        local_1ac = (char **)0x10004;
        local_1b0 = (char *)0x86;
        local_c._0_1_ = 1;
        FUN_004015b0(local_164);
        local_c._0_1_ = 2;
        local_1ac = (char **)0x4e1446;
        local_1ac = (char **)FUN_00987d20();
        local_1b0 = (char *)0x4e144e;
        local_1ac = (char **)FUN_00989050();
        local_1b0 = (char *)0x4e1457;
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,1);
        local_1ac = (char **)0x4e146d;
        FUN_00401650();
        local_1ac = (char **)0x4e1479;
        FUN_00408ad0();
        local_1ac = (char **)0x4e1482;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0x28c) {
        local_1ac = (char **)0x4e15f7;
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 4;
        local_1ac = (char **)0x4e160f;
        iVar5 = FUN_0055f640();
        in_ECX[0x13] = iVar5;
        local_1ac = (char **)0x4e161e;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x292) {
        local_1ac = (char **)0x4e159e;
        ExceptionList = &local_14;
        uVar6 = FUN_009885d0();
        local_c = 5;
        local_1ac = (char **)0x4e15b0;
        FUN_005662c0();
        local_1b0 = (char *)0x4e15b6;
        local_1ac = (char **)uVar6;
        iVar5 = FUN_005677b0();
        if (iVar5 == 0) {
          local_1ac = (char **)0x4e15bf;
          iVar5 = FUN_005676d0();
        }
        in_ECX[0x14] = iVar5;
        local_1ac = (char **)0x4e15cb;
        FUN_00408ad0();
        ExceptionList = local_14;
        return;
      }
      local_194 = (undefined1 *)(param_2 + -0x297);
      if (local_194 == (undefined1 *)0x0) {
        local_1ac = (char **)0x4e1560;
        ExceptionList = &local_14;
        FUN_009a1c10();
        in_ECX[0xd] = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)local_194 * 4);
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 < 0x577) {
    if (param_2 == 0x576) {
      local_1ac = (char **)param_1;
      local_1b0 = (char *)0x4e1790;
      ExceptionList = &local_14;
      (**(code **)(in_ECX[0x33] + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
    if (param_2 == 0x2f0) {
      local_1ac = (char **)(param_1 + 0x22c);
      local_1b0 = local_174;
      ExceptionList = &local_14;
      piVar3 = (int *)FUN_0055c6c0(DAT_012587e4);
      in_ECX[0xe] = *piVar3;
      in_ECX[0xf] = piVar3[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2f3) {
      local_1ac = &local_19c;
      local_1b0 = param_1;
      local_19c = (char *)0x0;
      local_198 = 0;
      ExceptionList = &local_14;
      FUN_009a19f0();
      local_1ac = (char **)0x4e1728;
      FUN_004e2ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x307) {
      local_1ac = (char **)(in_ECX + 0x1e);
      local_1b0 = param_1;
      ExceptionList = &local_14;
      FUN_009a19f0();
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x747) {
      local_1ac = (char **)(param_1 + 0x22c);
      local_1b0 = local_16c;
      ExceptionList = &local_14;
      piVar3 = (int *)FUN_0055c6c0(DAT_012587e4);
      in_ECX[0x11] = *piVar3;
      in_ECX[0x12] = piVar3[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x7b2) {
      local_1ac = (char **)0x4e185b;
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x928) {
      local_1ac = (char **)0x4e1836;
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    }
  }
  if (param_2 == 0xb) {
    local_1ac = (char **)(in_ECX + 2);
    local_1b0 = param_1;
    ExceptionList = &local_14;
    FUN_009a19f0();
    local_1ac = (char **)(in_ECX + 2);
    local_1b0 = (char *)0x4e1811;
    (**(code **)(*in_ECX + 0x18))();
    ExceptionList = pvStack_18;
    return;
  }
  local_1ac = (char **)0x4e17d3;
  ExceptionList = &local_14;
  FUN_009a0f40();
  local_1ac = (char **)(in_ECX + 2);
  local_1b0 = (char *)0x4e17e0;
  (**(code **)(*in_ECX + 0x18))();
  ExceptionList = pvStack_18;
  return;
}

