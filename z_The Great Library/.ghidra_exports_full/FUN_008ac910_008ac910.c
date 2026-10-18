// FUN_008ac910 @ 008ac910 body=[[008ac910, 008aca22] [008aca26, 008aca4a] [008aca4e, 008aca6f] [008aca73, 008aca93] [008acaaa, 008acabc] [008acac0, 008acb8b] [008acb8f, 008acbb3] [008acbb7, 008acbd8] [008acbdc, 008acbfc] [008acc13, 008acd13] [008acd2a, 008adbd3]]


undefined1 * FUN_008ac910(undefined1 *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *in_ECX;
  char *pcVar8;
  undefined4 *in_EDX;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  uint in_stack_00000020;
  int in_stack_00000028;
  undefined1 local_90 [28];
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b90ab1;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0;
  local_8 = 0;
  pbVar4 = param_3;
  if (in_stack_00000020 < 0x10) {
    pbVar4 = (byte *)&param_3;
  }
  pcVar8 = "THISCOUNTRY";
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_008ac974:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_008ac979;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_008ac974;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_008ac979:
  if (iVar5 == 0) {
    if (*(int *)(*(int *)(param_2 + 0x24) + 0xc) == 0) {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00ded94d,0);
      puVar7 = local_3c;
      local_8 = 3;
      uVar9 = 4;
    }
    else {
      ExceptionList = &local_10;
      uVar6 = FUN_0055dd40();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_14 = 1;
      puVar7 = (uint *)FUN_00475e40(local_58,uVar6);
      local_8 = 2;
      uVar9 = 3;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_14 = uVar9;
    FUN_00408ed0(puVar7,0,0xffffffff);
    if ((uVar9 & 4) != 0) {
      uVar9 = uVar9 & 0xfffffffb;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    if ((uVar9 & 2) != 0) {
      uVar9 = uVar9 & 0xfffffffd;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
    }
    if ((uVar9 & 1) != 0) {
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
    }
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  pbVar4 = param_3;
  if (in_stack_00000020 < 0x10) {
    pbVar4 = (byte *)&param_3;
  }
  pcVar8 = "FROMCOUNTRY";
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_008acae0:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_008acae5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_008acae0;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_008acae5:
  if (iVar5 == 0) {
    if (*(int *)(param_2 + 0x30) == 0) {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00ded94d,0);
      puVar7 = local_3c;
      local_8 = 6;
      uVar9 = 0x40;
    }
    else {
      ExceptionList = &local_10;
      uVar6 = FUN_0055dd40();
      local_8 = CONCAT31(local_8._1_3_,4);
      local_14 = 0x10;
      puVar7 = (uint *)FUN_00475e40(local_74,uVar6);
      local_8 = 5;
      uVar9 = 0x30;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_14 = uVar9;
    FUN_00408ed0(puVar7,0,0xffffffff);
    if ((uVar9 & 0x40) != 0) {
      uVar9 = uVar9 & 0xffffffbf;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar9 = uVar9 & 0xffffffdf;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
    }
    if ((uVar9 & 0x10) != 0) {
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
    }
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  pbVar4 = param_3;
  if (in_stack_00000020 < 0x10) {
    pbVar4 = (byte *)&param_3;
  }
  pcVar8 = "FROMCOUNTRY_ADJ";
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_008acc44:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_008acc49;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_008acc44;
    pbVar4 = pbVar4 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_008acc49:
  if (iVar5 == 0) {
    if (*(int *)(param_2 + 0x30) == 0) {
      ExceptionList = &local_10;
      uVar6 = FUN_009885d0();
      local_8 = 9;
      uVar9 = 0x200;
    }
    else {
      ExceptionList = &local_10;
      uVar6 = FUN_0055dd70();
      local_8 = CONCAT31(local_8._1_3_,7);
      local_14 = 0x80;
      uVar6 = FUN_00475e40(local_58,uVar6);
      local_8 = 8;
      uVar9 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_14 = uVar9;
    FUN_00408ed0(uVar6,0,0xffffffff);
    if ((uVar9 & 0x200) != 0) {
      uVar9 = uVar9 & 0xfffffdff;
      FUN_00408ad0();
    }
    if ((uVar9 & 0x100) != 0) {
      uVar9 = uVar9 & 0xfffffeff;
      FUN_00408ad0();
    }
    if ((char)uVar9 != '\0') {
      FUN_00408ad0();
    }
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = &local_10;
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    cVar3 = FUN_0040b360();
    if ((cVar3 == '\0') && (cVar3 = FUN_0040b360(), cVar3 == '\0')) {
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        iVar5 = *(int *)(param_2 + 0x34);
        if (iVar5 < 1) {
          iVar5 = *(int *)(*(int *)(param_2 + 0x24) + 0x10);
        }
        (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4) + 0x1c))(param_1);
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if ((cVar3 != '\0') || (cVar3 = FUN_0040b360(), cVar3 != '\0')) {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0xd;
          uVar9 = 0x1000;
        }
        else {
          local_20 = *in_EDX;
          uVar6 = FUN_004f97a0();
          local_8 = CONCAT31(local_8._1_3_,0xb);
          local_14 = 0x400;
          FUN_00475e40(local_74,uVar6);
          local_8 = 0xc;
          uVar9 = 0xc00;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x1000) != 0) {
          uVar9 = uVar9 & 0xffffefff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x800) != 0) {
          uVar9 = uVar9 & 0xfffff7ff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x400) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0x10;
          uVar9 = 0x8000;
        }
        else {
          local_20 = *in_EDX;
          uVar6 = FUN_00974c50(*(undefined4 *)
                                (*(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4) + 0xe64));
          local_8 = CONCAT31(local_8._1_3_,0xe);
          local_14 = 0x2000;
          FUN_00475e40(local_58,uVar6);
          local_8 = 0xf;
          uVar9 = 0x6000;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x8000) != 0) {
          uVar9 = uVar9 & 0xffff7fff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x4000) != 0) {
          uVar9 = uVar9 & 0xffffbfff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x2000) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0x13;
          uVar9 = 0x40000;
        }
        else {
          local_20 = *in_EDX;
          uVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4) +
                                         0xbd0) + 0x24))(local_3c,0,0);
          local_8 = CONCAT31(local_8._1_3_,0x11);
          local_14 = 0x10000;
          FUN_00475e40(local_58,uVar6);
          local_8 = 0x12;
          uVar9 = 0x30000;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x40000) != 0) {
          uVar9 = uVar9 & 0xfffbffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x20000) != 0) {
          uVar9 = uVar9 & 0xfffdffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x10000) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0x16;
          uVar9 = 0x200000;
        }
        else {
          uVar6 = FUN_0055dd70();
          local_8 = CONCAT31(local_8._1_3_,0x14);
          local_14 = 0x80000;
          FUN_00475e40(local_58,uVar6);
          local_8 = 0x15;
          uVar9 = 0x180000;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x200000) != 0) {
          uVar9 = uVar9 & 0xffdfffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x100000) != 0) {
          uVar9 = uVar9 & 0xffefffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x80000) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0x18;
          uVar9 = 0x800000;
        }
        else {
          iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4) + 0xe64) +
                          0x50);
          local_20 = *(undefined4 *)(iVar5 + 0x1c);
          local_1c = *(uint *)(iVar5 + 0x20);
          FUN_0055dd70();
          local_8 = CONCAT31(local_8._1_3_,0x17);
          uVar9 = 0x400000;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x800000) != 0) {
          uVar9 = uVar9 & 0xff7fffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x400000) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        if (in_EDX[1] == 0) {
          FUN_009885d0();
          local_8 = 0x1b;
          uVar9 = 0x4000000;
        }
        else {
          local_20 = *in_EDX;
          uVar6 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                         *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                          in_EDX[1] * 4) + 0xbe4) * 4) + 0x1c))
                            (local_3c);
          local_8 = CONCAT31(local_8._1_3_,0x19);
          local_14 = 0x1000000;
          FUN_00475e40(local_58,uVar6);
          local_8 = 0x1a;
          uVar9 = 0x3000000;
        }
        local_14 = uVar9;
        FUN_00401320();
        if ((uVar9 & 0x4000000) != 0) {
          uVar9 = uVar9 & 0xfbffffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x2000000) != 0) {
          uVar9 = uVar9 & 0xfdffffff;
          FUN_00408ad0();
        }
        if ((uVar9 & 0x1000000) != 0) {
          FUN_00408ad0();
        }
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  FUN_00424a50();
                  FUN_009888f0(param_1);
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  FUN_0043b700(DAT_012588e8 + 0xb0c,param_1);
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if (in_ECX == (int *)0x0) {
                    FUN_009885d0();
                    local_8 = 0x1d;
                    uVar9 = 0x10000000;
                  }
                  else {
                    (**(code **)(*in_ECX + 0x1c))(local_58);
                    local_8 = CONCAT31(local_8._1_3_,0x1c);
                    uVar9 = 0x8000000;
                  }
                  local_14 = uVar9;
                  FUN_00401320();
                  if ((uVar9 & 0x10000000) != 0) {
                    uVar9 = uVar9 & 0xefffffff;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x8000000) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if (in_ECX == (int *)0x0) {
                    FUN_009885d0();
                    local_8 = 0x20;
                    uVar9 = 0x80000000;
                  }
                  else {
                    uVar6 = FUN_009692c0();
                    uVar6 = FUN_00974c50(uVar6);
                    local_8 = CONCAT31(local_8._1_3_,0x1e);
                    local_14 = 0x20000000;
                    FUN_00475e40(local_58,uVar6);
                    local_8 = 0x1f;
                    uVar9 = 0x60000000;
                  }
                  local_14 = uVar9;
                  FUN_00401320();
                  uVar10 = uVar9 | 8;
                  if ((int)uVar10 < 0) {
                    uVar10 = uVar9 & 0x7fffffff;
                    FUN_00408ad0();
                  }
                  if ((uVar10 & 0x40000000) != 0) {
                    uVar10 = uVar10 & 0xbfffffff;
                    FUN_00408ad0();
                  }
                  if ((uVar10 & 0x20000000) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if (in_ECX == (int *)0x0) {
                    FUN_009885d0();
                    local_8 = 0x23;
                    uVar9 = 4;
                  }
                  else {
                    uVar6 = FUN_00969210(in_ECX + 0x6a);
                    uVar6 = FUN_00567250(uVar6);
                    local_8 = CONCAT31(local_8._1_3_,0x21);
                    local_1c = 1;
                    FUN_00475e40(local_58,uVar6);
                    local_8 = 0x22;
                    uVar9 = 3;
                  }
                  local_1c = uVar9;
                  FUN_00401320();
                  if ((uVar9 & 4) != 0) {
                    uVar9 = uVar9 & 0xfffffffb;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 2) != 0) {
                    uVar9 = uVar9 & 0xfffffffd;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 1) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if ((in_ECX == (int *)0x0) || (in_ECX[0x59] < 1)) {
                    FUN_009885d0();
                    local_8 = 0x26;
                    uVar9 = 0x20;
                  }
                  else {
                    uVar6 = (**(code **)(**(int **)in_ECX[0x57] + 0x18))(local_3c);
                    local_8 = CONCAT31(local_8._1_3_,0x24);
                    local_1c = 8;
                    FUN_00475e40(local_58,uVar6);
                    local_8 = 0x25;
                    uVar9 = 0x18;
                  }
                  local_1c = uVar9;
                  FUN_00401320();
                  if ((uVar9 & 0x20) != 0) {
                    uVar9 = uVar9 & 0xffffffdf;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x10) != 0) {
                    uVar9 = uVar9 & 0xffffffef;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 8) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if ((in_ECX == (int *)0x0) || ((int *)in_ECX[0x5b] == (int *)0x0)) {
                    if (in_EDX[1] == 0) {
                      FUN_009885d0();
                      local_8 = 0x29;
                      uVar9 = 0x100;
                    }
                    else {
                      local_18 = *in_EDX;
                      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                             *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                              in_EDX[1] * 4) + 0xbe4) * 4) + 0x1c))
                                (local_3c);
                      local_8 = 0x28;
                      uVar9 = 0x80;
                    }
                    local_1c = uVar9;
                    FUN_00401320();
                    local_8 = 0x2a;
                    uVar9 = uVar9 | 0x200;
                  }
                  else {
                    (**(code **)(*(int *)in_ECX[0x5b] + 0x18))(local_90);
                    local_8 = CONCAT31(local_8._1_3_,0x27);
                    uVar9 = 0x40;
                  }
                  local_1c = uVar9;
                  FUN_00401320();
                  if ((uVar9 & 0x200) != 0) {
                    uVar9 = uVar9 & 0xfffffdff;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x100) != 0) {
                    uVar9 = uVar9 & 0xfffffeff;
                    FUN_00408ad0();
                  }
                  if ((char)uVar9 < '\0') {
                    uVar9 = uVar9 & 0xffffff7f;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x40) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  if (*(int *)(in_stack_00000028 + 4) == 0) {
                    if (in_ECX == (int *)0x0) {
                      FUN_009885d0();
                      local_8 = 0x2d;
                      uVar9 = 0x1000;
                    }
                    else {
                      FUN_0055dd40();
                      local_8 = 0x2c;
                      uVar9 = 0x800;
                    }
                    local_1c = uVar9;
                    FUN_00401320();
                    local_8 = 0x2e;
                    uVar9 = uVar9 | 0x2000;
                  }
                  else {
                    FUN_0055dd40();
                    local_8 = CONCAT31(local_8._1_3_,0x2b);
                    uVar9 = 0x400;
                  }
                  local_1c = uVar9;
                  FUN_00401320();
                  if ((uVar9 & 0x2000) != 0) {
                    uVar9 = uVar9 & 0xffffdfff;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x1000) != 0) {
                    uVar9 = uVar9 & 0xffffefff;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x800) != 0) {
                    uVar9 = uVar9 & 0xfffff7ff;
                    FUN_00408ad0();
                  }
                  if ((uVar9 & 0x400) != 0) {
                    FUN_00408ad0();
                  }
                  goto LAB_008adbb9;
                }
              }
              else if ((in_EDX[1] != 0) &&
                      (local_20 = *in_EDX,
                      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4) + 0x156c) != 0))
              {
                local_20 = *in_EDX;
                FUN_0055dd70();
                goto LAB_008adbb9;
              }
            }
            else if ((in_EDX[1] != 0) &&
                    (local_20 = *in_EDX,
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4) + 0x156c) != 0)) {
              local_20 = *in_EDX;
              FUN_0055dd40();
              goto LAB_008adbb9;
            }
          }
          else if (in_EDX[1] != 0) {
            iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4);
            local_20 = *(undefined4 *)(iVar5 + 0x1428);
            if (*(int *)(iVar5 + 0x142c) != 0) {
              iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(iVar5 + 0x142c) * 4) + 0xe64) + 0x50);
              local_20 = *(undefined4 *)(iVar5 + 0x1c);
              local_1c = *(uint *)(iVar5 + 0x20);
              FUN_0055dd70();
              goto LAB_008adbb9;
            }
          }
        }
        else if (in_EDX[1] != 0) {
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4);
          local_20 = *(undefined4 *)(iVar5 + 0x1428);
          local_1c = *(uint *)(iVar5 + 0x142c);
          if (local_1c != 0) {
            FUN_0055dd70();
            goto LAB_008adbb9;
          }
        }
      }
      else if (in_EDX[1] != 0) {
        iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_EDX[1] * 4);
        local_20 = *(undefined4 *)(iVar5 + 0x1428);
        local_1c = *(uint *)(iVar5 + 0x142c);
        goto LAB_008acd70;
      }
    }
    else {
      if (in_ECX == (int *)0x0) {
        piVar11 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4)
                           + 0x188);
      }
      else {
        piVar11 = (int *)in_ECX[0x62];
      }
      if ((piVar11 != (int *)0x0) && (cVar3 = (**(code **)(*piVar11 + 0x24))(), cVar3 != '\0')) {
        uVar6 = (**(code **)(*piVar11 + 0x20))(local_90);
        local_8 = CONCAT31(local_8._1_3_,10);
        FUN_00475e40(param_1,uVar6);
        FUN_00408ad0();
        goto LAB_008adbb9;
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x30) == 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = *(int *)(param_2 + 0x30);
    }
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4) + 0xe64) + 0x50);
    local_20 = *(undefined4 *)(iVar5 + 0x1c);
    local_1c = *(uint *)(iVar5 + 0x20);
LAB_008acd70:
    if (local_1c != 0) {
      FUN_0055dd40();
      goto LAB_008adbb9;
    }
  }
  iVar2 = DAT_012588e8;
  iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar5 != 0) {
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      FUN_0055dd40();
      goto LAB_008adbb9;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      FUN_0055dd70();
      goto LAB_008adbb9;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      FUN_0055dd40();
      goto LAB_008adbb9;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      FUN_0055dd70();
      goto LAB_008adbb9;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00425a40();
        FUN_0055dd40();
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00425a40();
        FUN_0055dd70();
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00425ac0();
        FUN_0055dd40();
        goto LAB_008adbb9;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 != '\0') {
        FUN_00425ac0();
        FUN_0055dd70();
        goto LAB_008adbb9;
      }
    }
    else {
      piVar11 = *(int **)(*(int *)(*(int *)(iVar2 + 0xacc) + *(int *)(iVar5 + 8) * 4) + 0x188);
      if ((piVar11 != (int *)0x0) && (cVar3 = (**(code **)(*piVar11 + 0x24))(), cVar3 != '\0')) {
        (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar5 + 8) * 4) +
                               0x188) + 0x20))(param_1);
        goto LAB_008adbb9;
      }
      if (*(int *)(iVar5 + 0x28) != 0) {
        FUN_0055dd40();
        goto LAB_008adbb9;
      }
    }
  }
  FUN_009885d0();
LAB_008adbb9:
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_1;
}

