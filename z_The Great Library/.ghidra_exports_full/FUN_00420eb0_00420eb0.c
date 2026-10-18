// FUN_00420eb0 @ 00420eb0 body=[[00420eb0, 004218c8] [004218d0, 00422b91] [00422b97, 00422be7] [00422beb, 00422c01]]


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00420eb0(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *******pppppppbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  LPSTR ******lpsz;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_23c [4];
  undefined4 uStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  LPSTR ******pppppppCStack_22c;
  undefined1 *local_214;
  int local_210;
  undefined1 local_20c;
  uint local_208 [4];
  undefined4 local_1f8;
  uint local_1f4;
  LPSTR ******local_1ec [4];
  DWORD local_1dc;
  uint local_1d8;
  undefined1 *local_1d0;
  int local_1cc;
  float local_1c8;
  int local_1c4;
  byte *******local_1c0 [4];
  undefined4 local_1b0;
  uint local_1ac;
  undefined1 local_1a4 [28];
  undefined1 local_188 [8];
  undefined1 *local_180;
  int local_17c;
  undefined4 local_170;
  undefined1 *local_164;
  float local_15c;
  int local_158;
  undefined1 local_140 [8];
  undefined1 *local_138;
  int local_134;
  int local_12c;
  undefined1 *local_11c;
  float local_114;
  int local_110;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00bb976c;
  local_14 = ExceptionList;
  local_1d0 = (undefined1 *)0x0;
  local_1f4 = 0xf;
  local_1f8 = 0;
  local_208[0] = local_208[0] & 0xffffff00;
  local_c = 0;
  pppppppCStack_22c = (LPSTR ******)*param_2;
  if ((param_2[1] - (int)pppppppCStack_22c) / 0x1c < 1) {
    local_20c = 0;
    pppppppCStack_22c = (LPSTR ******)0x422bac;
    ExceptionList = &local_14;
    FUN_00409350();
    goto LAB_00422bac;
  }
  local_1ac = 0xf;
  local_1b0 = 0;
  local_1c0[0] = (byte *******)((uint)local_1c0[0] & 0xffffff00);
  puStack_230 = (undefined1 *)0x420f3c;
  ExceptionList = &local_14;
  FUN_00408ed0();
  iVar6 = DAT_012588e8;
  local_c._0_1_ = 1;
  iVar5 = *(int *)(DAT_012588e8 + 0xb24);
  pppppppbVar3 = local_1c0[0];
  if (local_1ac < 0x10) {
    pppppppbVar3 = (byte *******)local_1c0;
  }
  pcVar8 = "lines";
  do {
    bVar1 = *(byte *)pppppppbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_00420f84:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00420f89;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)pppppppbVar3 + 1);
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_00420f84;
    pppppppbVar3 = (byte *******)((int)pppppppbVar3 + 2);
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00420f89:
  if (iVar4 == 0) {
    iVar5 = FUN_00475500();
    *(uint *)(iVar5 + 0xe8) = *(uint *)(iVar5 + 0xe8) ^ 0x1000000;
    *(byte *)(iVar5 + 0xe4) = *(byte *)(iVar5 + 0xe8) & 1;
  }
  else {
    pppppppbVar3 = local_1c0[0];
    if (local_1ac < 0x10) {
      pppppppbVar3 = (byte *******)local_1c0;
    }
    pcVar8 = "alwaysupgradecolony";
    do {
      bVar1 = *(byte *)pppppppbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_00420fe4:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00420fe9;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)pppppppbVar3 + 1);
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_00420fe4;
      pppppppbVar3 = (byte *******)((int)pppppppbVar3 + 2);
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00420fe9:
    if (iVar4 == 0) {
      DAT_012586f1 = DAT_012586f1 == '\0';
      if ((bool)DAT_012586f1) {
        pppppppCStack_22c = (LPSTR ******)0x42100f;
        FUN_00409350();
        local_20c = 1;
      }
      else {
        pppppppCStack_22c = (LPSTR ******)0x421025;
        FUN_00409350();
        local_20c = 1;
      }
    }
    else {
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            cVar2 = FUN_0040b360();
            if (cVar2 == '\0') {
              cVar2 = FUN_0040b360();
              if (cVar2 == '\0') {
                cVar2 = FUN_0040b360();
                if (cVar2 == '\0') {
                  cVar2 = FUN_0040b360();
                  if (cVar2 == '\0') {
                    cVar2 = FUN_0040b360();
                    if (cVar2 == '\0') {
                      cVar2 = FUN_0040b360();
                      if (cVar2 == '\0') {
                        cVar2 = FUN_0040b360();
                        if (cVar2 == '\0') {
                          cVar2 = FUN_0040b360();
                          if (cVar2 == '\0') {
                            cVar2 = FUN_0040b360();
                            if (cVar2 == '\0') {
                              cVar2 = FUN_0040b360();
                              if (cVar2 == '\0') {
                                cVar2 = FUN_0040b360();
                                if (cVar2 == '\0') {
                                  cVar2 = FUN_0040b360();
                                  if (cVar2 == '\0') {
                                    cVar2 = FUN_0040b360();
                                    if (cVar2 == '\0') {
                                      cVar2 = FUN_0040b360();
                                      if (cVar2 == '\0') {
                                        cVar2 = FUN_0040b360();
                                        if (cVar2 == '\0') {
                                          cVar2 = FUN_0040b360();
                                          if (cVar2 == '\0') {
                                            cVar2 = FUN_0040b360();
                                            if (cVar2 == '\0') {
                                              cVar2 = FUN_0040b360();
                                              if (cVar2 == '\0') {
                                                cVar2 = FUN_0040b360();
                                                if (cVar2 == '\0') {
                                                  cVar2 = FUN_0040b360();
                                                  if (cVar2 != '\0') {
                                                    local_20c = 1;
                                                    FUN_004012f0();
                                                    DAT_00f092fb = DAT_00f092fb == '\0';
                                                    *(undefined4 *)(iVar5 + 0x74) = 0xffffffff;
                                                    if ((*(int *)(iVar5 + 0x7c) -
                                                         *(int *)(iVar5 + 0x78) & 0xfffffffcU) == 0)
                                                    {
                                                      local_1d0 = (undefined1 *)0xffffffff;
                                                      FUN_004e9b90();
                                                    }
                                                    else {
                                                      **(undefined4 **)(iVar5 + 0x78) = 0xffffffff;
                                                    }
                                                    goto LAB_00422b79;
                                                  }
                                                  cVar2 = FUN_0040b360();
                                                  if (cVar2 == '\0') {
                                                    cVar2 = FUN_0040b360();
                                                    if (cVar2 == '\0') {
                                                      cVar2 = FUN_0040b360();
                                                      if (cVar2 == '\0') {
                                                        cVar2 = FUN_0040b360();
                                                        iVar5 = DAT_01258a74;
                                                        if (cVar2 == '\0') {
                                                          cVar2 = FUN_0040b360();
                                                          if (cVar2 == '\0') {
                                                            cVar2 = FUN_0040b360();
                                                            if (cVar2 == '\0') {
                                                              cVar2 = FUN_0040b360();
                                                              if (cVar2 == '\0') {
                                                                cVar2 = FUN_0040b360();
                                                                if (cVar2 != '\0') {
                                                                  if ((param_2[1] - *param_2) / 0x1c
                                                                      != 2) goto LAB_00422b6a;
                                                                  FUN_00401320();
                                                                  local_c._0_1_ = 0x22;
                                                                  pppppppCStack_22c = DAT_012587e4;
                                                                  puStack_230 = (undefined1 *)
                                                                                0x422b29;
                                                                  FUN_0055c6c0();
                                                                  if (local_210 == 0)
                                                                  goto LAB_00422935;
                                                                  FUN_0051b870();
                                                                  local_20c = 1;
                                                                  FUN_004012f0();
                                                                  FUN_00408ad0();
                                                                }
                                                              }
                                                              else {
                                                                if ((param_2[1] - *param_2) / 0x1c
                                                                    != 5) {
LAB_00422b6a:
                                                                  local_20c = 0;
                                                                  goto LAB_00422b74;
                                                                }
                                                                FUN_00401320();
                                                                local_c._0_1_ = 0x1f;
                                                                pppppppCStack_22c = DAT_012587e4;
                                                                puStack_230 = (undefined1 *)0x42292d
                                                                ;
                                                                FUN_0055c6c0();
                                                                if (local_210 == 0) {
LAB_00422935:
                                                                  FUN_004012f0();
                                                                  FUN_0041a520();
                                                                  FUN_00408ad0();
                                                                  FUN_00408ad0();
                                                                  FUN_00a322f0();
                                                                  ExceptionList = local_14;
                                                                  return param_1;
                                                                }
                                                                iVar5 = FUN_00989070();
                                                                local_1c8 = (float)iVar5 / 255.0;
                                                                iVar5 = FUN_00989070();
                                                                local_1d0 = (undefined1 *)
                                                                            ((float)iVar5 / 255.0);
                                                                FUN_00989070();
                                                                FUN_009b6ce0();
                                                                FUN_004fb660();
                                                                (**(code **)(**(int **)(DAT_012588e8
                                                                                       + 0xb24) +
                                                                            0x38))();
                                                                FUN_007fca30();
                                                                (**(code **)(**(int **)(DAT_012588e8
                                                                                       + 0xb24) +
                                                                            0x38))();
                                                                FUN_00645d70();
                                                                local_20c = 1;
                                                                FUN_0055dd40();
                                                                local_c._0_1_ = 0x20;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)FUN_00988fa0();
                                                                local_c._0_1_ = 0x21;
                                                                puStack_230 = (undefined1 *)0x422a99
                                                                ;
                                                                FUN_00408ed0();
                                                                FUN_00408ad0();
                                                                FUN_00408ad0();
                                                                FUN_00408ad0();
                                                              }
                                                            }
                                                            else {
                                                              FUN_00475500();
                                                              if ((param_2[1] - *param_2) / 0x1c ==
                                                                  1) {
                                                                local_20c = 1;
                                                                FUN_009885d0();
                                                                local_c._0_1_ = 0x1d;
                                                                puStack_230 = (undefined1 *)0x422439
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00408ed0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x42246e
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x4224a3
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x4224d8
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x42250d
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x422542
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x422577
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x4225ab
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x4225e3
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x42261b
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                FUN_00989030();
                                                                puStack_230 = (undefined1 *)0x422653
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_004012f0();
                                                                puStack_230 = (undefined1 *)0x422670
                                                                ;
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)local_1ec;
                                                                FUN_00448aa0();
                                                                FUN_00408ad0();
                                                              }
                                                              else {
                                                                FUN_00401320();
                                                                local_c._0_1_ = 0x1e;
                                                                lpsz = local_1ec[0];
                                                                if (local_1d8 < 0x10) {
                                                                  lpsz = (LPSTR ******)local_1ec;
                                                                }
                                                                pppppppCStack_22c =
                                                                     (LPSTR ******)0x4226ad;
                                                                CharUpperBuffA((LPSTR)lpsz,local_1dc
                                                                              );
                                                                cVar2 = FUN_0040b360();
                                                                if (cVar2 == '\0') {
                                                                  cVar2 = FUN_0040b360();
                                                                  if (cVar2 == '\0') {
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           8;
                                                                      *(byte *)(iVar5 + 0xe4) =
                                                                           *(byte *)(iVar5 + 0xe8) &
                                                                           1;
                                                                      local_20c = 1;
                                                                      FUN_00408ad0();
                                                                      goto LAB_00422b79;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x10;
                                                                      goto LAB_0042289f;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x20;
                                                                      *(byte *)(iVar5 + 0xe4) =
                                                                           *(byte *)(iVar5 + 0xe8) &
                                                                           1;
                                                                      local_20c = 1;
                                                                      FUN_00408ad0();
                                                                      goto LAB_00422b79;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x40;
                                                                      goto LAB_0042289f;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x80;
                                                                      *(byte *)(iVar5 + 0xe4) =
                                                                           *(byte *)(iVar5 + 0xe8) &
                                                                           1;
                                                                      local_20c = 1;
                                                                      FUN_00408ad0();
                                                                      goto LAB_00422b79;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x100;
                                                                      goto LAB_0042289f;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x200;
                                                                      *(byte *)(iVar5 + 0xe4) =
                                                                           *(byte *)(iVar5 + 0xe8) &
                                                                           1;
                                                                      local_20c = 1;
                                                                      FUN_00408ad0();
                                                                      goto LAB_00422b79;
                                                                    }
                                                                    cVar2 = FUN_0040b360();
                                                                    if (cVar2 != '\0') {
                                                                      iVar5 = FUN_00475500();
                                                                      *(uint *)(iVar5 + 0xe8) =
                                                                           *(uint *)(iVar5 + 0xe8) ^
                                                                           0x400;
                                                                      goto LAB_0042289f;
                                                                    }
                                                                  }
                                                                  else {
                                                                    iVar5 = FUN_00475500();
                                                                    *(uint *)(iVar5 + 0xe8) =
                                                                         *(uint *)(iVar5 + 0xe8) ^ 2
                                                                    ;
LAB_0042289f:
                                                                    *(byte *)(iVar5 + 0xe4) =
                                                                         *(byte *)(iVar5 + 0xe8) & 1
                                                                    ;
                                                                  }
                                                                  local_20c = 1;
                                                                  FUN_00408ad0();
                                                                }
                                                                else {
                                                                  iVar5 = FUN_00475500();
                                                                  *(uint *)(iVar5 + 0xe8) =
                                                                       *(uint *)(iVar5 + 0xe8) ^ 1;
                                                                  *(byte *)(iVar5 + 0xe4) =
                                                                       *(byte *)(iVar5 + 0xe8) & 1;
                                                                  local_20c = 1;
                                                                  FUN_00408ad0();
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else {
                                                            if ((param_2[1] - *param_2) / 0x1c < 2)
                                                            goto LAB_00422b6a;
                                                            iVar5 = FUN_00989070();
                                                            local_1d0 = (undefined1 *)(float)iVar5;
                                                            iVar5 = (**(code **)(**(int **)(
                                                  DAT_012588e8 + 0xb24) + 0x70))();
                                                  if (0.0 < (float)local_1d0) {
                                                    *(undefined1 **)(iVar5 + 0x35c) = local_1d0;
                                                  }
                                                  local_20c = 1;
                                                  FUN_00988c70();
                                                  local_c._0_1_ = 0x1b;
                                                  pppppppCStack_22c = (LPSTR ******)FUN_00988fa0();
                                                  local_c._0_1_ = 0x1c;
                                                  puStack_230 = (undefined1 *)0x4223ae;
                                                  FUN_00408ed0();
                                                  FUN_00408ad0();
                                                  FUN_00408ad0();
                                                  }
                                                  }
                                                  else if (DAT_01258a74 != 0) {
                                                    DAT_013f080c = DAT_013f080c == '\0';
                                                    local_20c = 1;
                                                    *(char *)(DAT_01258a74 + 0x6bc44) = DAT_013f080c
                                                    ;
                                                    pppppppCStack_22c =
                                                         *(LPSTR *******)(iVar5 + 100);
                                                    if ((bool)DAT_013f080c) {
                                                      puStack_230 = (undefined1 *)0x4222bb;
                                                      (*(code *)(*pppppppCStack_22c)[0x39])();
                                                    }
                                                    else {
                                                      puStack_230 = (undefined1 *)0x4222cc;
                                                      (*(code *)(*pppppppCStack_22c)[0x39])();
                                                    }
                                                    goto LAB_00422b74;
                                                  }
                                                  goto LAB_00422b79;
                                                  }
                                                  DAT_012589a7 = DAT_012589a7 == '\0';
                                                  local_20c = 1;
                                                  }
                                                  else if (*(int *)(*(int *)(iVar6 + 0xcf8) + 8) !=
                                                           0) {
                                                    FUN_00428d40();
                                                  }
                                                  }
                                                  else {
                                                    FUN_0042b470();
                                                  }
                                                }
                                                else {
                                                  FUN_009bd5b0();
                                                  FUN_009885d0();
                                                  local_c._0_1_ = 0x17;
                                                  FUN_0099d3d0(DAT_01258a74,auStack_23c);
                                                  local_c._0_1_ = 0x18;
                                                  uVar7 = FUN_004015b0(local_1a4,0x846,0x302);
                                                  local_c._0_1_ = 0x1a;
                                                  FUN_004238b0(uVar7);
                                                  local_c._0_1_ = 0x17;
                                                  FUN_00401650();
                                                  local_c._0_1_ = 1;
                                                  FUN_00408ad0();
                                                  local_20c = 1;
                                                }
                                                goto LAB_00422b74;
                                              }
                                              if ((param_2[1] - *param_2) / 0x1c < 2) {
                                                iVar5 = FUN_00475500();
                                                *(uint *)(iVar5 + 0xe8) =
                                                     *(uint *)(iVar5 + 0xe8) ^ 0x8000000;
                                                *(byte *)(iVar5 + 0xe4) =
                                                     *(byte *)(iVar5 + 0xe8) & 1;
                                              }
                                              else {
                                                FUN_00401320();
                                                cVar2 = FUN_0040b360();
                                                if (cVar2 == '\0') {
                                                  cVar2 = FUN_0040b360();
                                                  if (cVar2 == '\0') {
                                                    cVar2 = FUN_0040b360();
                                                    if (cVar2 == '\0') {
                                                      cVar2 = FUN_0040b360();
                                                      if (cVar2 == '\0') goto LAB_004217cc;
                                                      DAT_012588e7 = DAT_012588e7 == '\0';
                                                      DAT_0125899c = DAT_0125899c == '\0';
                                                      DAT_0125899d = DAT_0125899d == '\0';
                                                      FUN_00408ad0();
                                                    }
                                                    else {
                                                      DAT_0125899d = DAT_0125899d == '\0';
                                                      FUN_00408ad0();
                                                    }
                                                  }
                                                  else {
                                                    DAT_0125899c = DAT_0125899c == '\0';
                                                    FUN_00408ad0();
                                                  }
                                                }
                                                else {
                                                  DAT_012588e7 = DAT_012588e7 == '\0';
                                                  FUN_00408ad0();
                                                }
                                              }
                                            }
                                            else if ((param_2[1] - *param_2) / 0x1c < 6) {
                                              FUN_004012f0();
                                              local_20c = 0;
                                            }
                                            else {
                                              iVar6 = FUN_0090cc40();
                                              iVar5 = FUN_0090da40();
                                              if (iVar5 == 0) {
                                                iVar5 = **(int **)(iVar6 + 0xc);
                                              }
                                              if (iVar5 != 0) {
                                                pppppppCStack_22c = DAT_012587e4;
                                                puStack_230 = (undefined1 *)0x421e07;
                                                FUN_0055c6c0();
                                                pppppppCStack_22c = DAT_012587e4;
                                                puStack_230 = (undefined1 *)0x421e24;
                                                FUN_0055c6c0();
                                                pppppppCStack_22c = DAT_012587e4;
                                                puStack_230 = (undefined1 *)0x421e44;
                                                FUN_0055c6c0();
                                                FUN_008a8650();
                                                FUN_008a8650();
                                                local_138 = local_214;
                                                local_180 = local_1d0;
                                                local_134 = local_210;
                                                local_164 = local_140;
                                                local_17c = local_1cc;
                                                local_170 = FUN_00989070();
                                                if (local_1c4 != 0) {
                                                  local_15c = local_1c8;
                                                  local_158 = local_1c4;
                                                  *(float *)(local_164 + 0x2c) = local_1c8;
                                                  *(int *)(local_164 + 0x30) = local_1c4;
                                                }
                                                pppppppCStack_22c = (LPSTR ******)0x0;
                                                puStack_230 = local_188;
                                                puStack_234 = local_1a4;
                                                uStack_238 = 0x421f00;
                                                pppppppCStack_22c =
                                                     (LPSTR ******)
                                                     (**(code **)(*(int *)(iVar5 + 0xa0) + 0x2c))();
                                                local_c._0_1_ = 0x16;
                                                goto LAB_00421bc9;
                                              }
                                            }
                                          }
                                          else if ((param_2[1] - *param_2) / 0x1c < 5) {
                                            FUN_004012f0();
                                            local_20c = 0;
                                          }
                                          else {
                                            iVar6 = FUN_0090cc40();
                                            iVar5 = FUN_0090da40();
                                            if (iVar5 == 0) {
                                              iVar5 = **(int **)(iVar6 + 0xc);
                                            }
                                            if (iVar5 != 0) {
                                              pppppppCStack_22c = DAT_012587e4;
                                              puStack_230 = (undefined1 *)0x421c84;
                                              FUN_0055c6c0();
                                              pppppppCStack_22c = DAT_012587e4;
                                              puStack_230 = (undefined1 *)0x421ca1;
                                              FUN_0055c6c0();
                                              pppppppCStack_22c = DAT_012587e4;
                                              puStack_230 = (undefined1 *)0x421cbf;
                                              FUN_0055c6c0();
                                              FUN_008a8650();
                                              FUN_008a8650();
                                              local_138 = local_214;
                                              local_134 = local_210;
                                              local_180 = local_1d0;
                                              local_17c = local_1cc;
                                              local_15c = local_1c8;
                                              local_114 = local_1c8;
                                              pppppppCStack_22c = (LPSTR ******)0x0;
                                              local_164 = local_140;
                                              local_158 = local_1c4;
                                              local_110 = local_1c4;
                                              puStack_230 = local_188;
                                              puStack_234 = local_1a4;
                                              uStack_238 = 0x421d60;
                                              pppppppCStack_22c =
                                                   (LPSTR ******)
                                                   (**(code **)(*(int *)(iVar5 + 0xd8) + 0x2c))();
                                              local_c._0_1_ = 0x15;
                                              goto LAB_00421bc9;
                                            }
                                          }
                                        }
                                        else if ((param_2[1] - *param_2) / 0x1c < 4) {
                                          FUN_004012f0();
                                          local_20c = 0;
                                        }
                                        else {
                                          iVar6 = FUN_0090cc40();
                                          iVar5 = FUN_0090da40();
                                          if (iVar5 == 0) {
                                            iVar5 = **(int **)(iVar6 + 0xc);
                                          }
                                          if (iVar5 != 0) {
                                            pppppppCStack_22c = DAT_012587e4;
                                            puStack_230 = (undefined1 *)0x421b2c;
                                            FUN_0055c6c0();
                                            pppppppCStack_22c = DAT_012587e4;
                                            puStack_230 = (undefined1 *)0x421b4a;
                                            FUN_0055c6c0();
                                            FUN_008a8650();
                                            FUN_008a8650();
                                            local_180 = local_214;
                                            local_17c = local_210;
                                            local_138 = local_1d0;
                                            pppppppCStack_22c = (LPSTR ******)0x0;
                                            local_11c = local_188;
                                            local_134 = local_1cc;
                                            puStack_230 = local_140;
                                            puStack_234 = local_1a4;
                                            uStack_238 = 0x421bc1;
                                            pppppppCStack_22c =
                                                 (LPSTR ******)
                                                 (**(code **)(*(int *)(iVar5 + 0x4c) + 0x2c))();
                                            local_c._0_1_ = 0x14;
LAB_00421bc9:
                                            puStack_230 = (undefined1 *)0x421bd7;
                                            FUN_00408ed0();
                                            FUN_00408ad0();
                                            local_20c = 1;
                                          }
                                        }
                                      }
                                      else if (1 < (param_2[1] - *param_2) / 0x1c) {
                                        FUN_00989070();
                                        pppppppCStack_22c = (LPSTR ******)0x421832;
                                        iVar5 = FUN_009c16d0();
                                        if (iVar5 == 0) goto LAB_00421a94;
                                        local_1d8 = 0xf;
                                        local_1dc = 0;
                                        local_1ec[0] = (LPSTR ******)
                                                       ((uint)local_1ec[0] & 0xffffff00);
                                        local_c._0_1_ = 0xb;
                                        FUN_008a8800();
                                        local_1c8 = 0.0;
                                        if (DAT_0131bb34 == 0) {
                                          iVar6 = FUN_00aae9af();
                                          local_c._0_1_ = 0xc;
                                          if (iVar6 != 0) {
                                            FUN_0041a160();
                                          }
                                          local_c._0_1_ = 0xb;
                                          FUN_00423700();
                                        }
                                        local_1d0 = (undefined1 *)
                                                    (*(int *)(DAT_0131bb34 + 0x10) -
                                                     *(int *)(DAT_0131bb34 + 0xc) >> 2);
                                        if (0 < (int)local_1d0) {
                                          iVar4 = 0;
                                          iVar6 = DAT_0131bb34;
                                          do {
                                            cVar2 = FUN_008af4b0();
                                            if (cVar2 != '\0') {
                                              local_12c = iVar5;
                                              if (iVar6 == 0) {
                                                iVar6 = FUN_00aae9af();
                                                local_c._0_1_ = 0xd;
                                                if (iVar6 != 0) {
                                                  FUN_0041a160();
                                                }
                                                local_c._0_1_ = 0xb;
                                                FUN_00423700();
                                                iVar6 = DAT_0131bb34;
                                              }
                                              if (*(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >>
                                                  2 < (int)local_1c8) {
                                                FUN_0096bb70();
                                              }
                                              pppppppCStack_22c = (LPSTR ******)0x421958;
                                              pppppppCStack_22c = (LPSTR ******)FUN_0096d650();
                                              local_c._0_1_ = 0xe;
                                              puStack_230 = (undefined1 *)0x42196e;
                                              FUN_00448aa0();
                                              pppppppCStack_22c = (LPSTR ******)0x42197e;
                                              FUN_00448740();
                                              local_c._0_1_ = 0xb;
                                              FUN_00408ad0();
                                              pppppppCStack_22c =
                                                   (LPSTR ******)
                                                   (*(int *)(*(int *)(iVar5 + 0x68) + 0xd8) + iVar4)
                                              ;
                                              puStack_230 = (undefined1 *)0x4219b0;
                                              pppppppCStack_22c = (LPSTR ******)FUN_008aed50();
                                              local_c._0_1_ = 0xf;
                                              puStack_230 = (undefined1 *)0x4219c6;
                                              FUN_00448aa0();
                                              local_c._0_1_ = 0xb;
                                              FUN_00408ad0();
                                              pppppppCStack_22c = (LPSTR ******)0x4219e7;
                                              FUN_00448740();
                                              iVar6 = DAT_0131bb34;
                                            }
                                            local_1c8 = (float)((int)local_1c8 + 1);
                                            iVar4 = iVar4 + 0x30;
                                          } while ((int)local_1c8 < (int)local_1d0);
                                        }
                                        FUN_009885d0();
                                        local_c._0_1_ = 0x10;
                                        FUN_00401320();
                                        local_c._0_1_ = 0x11;
                                        uVar7 = FUN_004015b0(local_1a4,0x7c5,0x10002);
                                        local_c._0_1_ = 0x13;
                                        uVar7 = FUN_004238b0(uVar7);
                                        FUN_00401280(uVar7);
                                        local_c._0_1_ = 0x10;
                                        FUN_00401650();
                                        local_c._0_1_ = 0xb;
                                        goto LAB_004217af;
                                      }
                                    }
                                    else if (1 < (param_2[1] - *param_2) / 0x1c) {
                                      FUN_00989070();
                                      local_1d0 = &stack0xfffffdd8;
                                      pppppppCStack_22c = (LPSTR ******)0x421555;
                                      iVar5 = FUN_009c16d0();
                                      if (iVar5 == 0) {
LAB_00421a94:
                                        FUN_004012f0();
                                        local_20c = 0;
                                      }
                                      else {
                                        local_1d8 = 0xf;
                                        local_1dc = 0;
                                        local_1ec[0] = (LPSTR ******)
                                                       ((uint)local_1ec[0] & 0xffffff00);
                                        local_c._0_1_ = 2;
                                        FUN_008a8800();
                                        local_1c8 = 0.0;
                                        if (DAT_0131bb34 == 0) {
                                          local_1d0 = (undefined1 *)FUN_00aae9af();
                                          local_c._0_1_ = 3;
                                          if (local_1d0 != (undefined1 *)0x0) {
                                            FUN_0041a160();
                                          }
                                          local_c._0_1_ = 2;
                                          FUN_00423700();
                                        }
                                        local_1d0 = (undefined1 *)
                                                    (*(int *)(DAT_0131bb34 + 0x10) -
                                                     *(int *)(DAT_0131bb34 + 0xc) >> 2);
                                        if (0 < (int)local_1d0) {
                                          iVar4 = 0;
                                          iVar6 = DAT_0131bb34;
                                          do {
                                            cVar2 = FUN_008af4b0();
                                            if (cVar2 != '\0') {
                                              local_12c = iVar5;
                                              if (iVar6 == 0) {
                                                iVar6 = FUN_00aae9af();
                                                local_c._0_1_ = 4;
                                                if (iVar6 != 0) {
                                                  FUN_0041a160();
                                                }
                                                local_c._0_1_ = 2;
                                                FUN_00423700();
                                                iVar6 = DAT_0131bb34;
                                              }
                                              if (*(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >>
                                                  2 < (int)local_1c8) {
                                                FUN_0096bb70();
                                              }
                                              pppppppCStack_22c = (LPSTR ******)0x421678;
                                              pppppppCStack_22c = (LPSTR ******)FUN_0096d650();
                                              local_c._0_1_ = 5;
                                              puStack_230 = (undefined1 *)0x42168e;
                                              FUN_00448aa0();
                                              pppppppCStack_22c = (LPSTR ******)0x42169e;
                                              FUN_00448740();
                                              local_c._0_1_ = 2;
                                              FUN_00408ad0();
                                              pppppppCStack_22c =
                                                   (LPSTR ******)
                                                   (*(int *)(*(int *)(iVar5 + 0x68) + 200) + iVar4);
                                              puStack_230 = (undefined1 *)0x4216d0;
                                              pppppppCStack_22c = (LPSTR ******)FUN_008aed50();
                                              local_c._0_1_ = 6;
                                              puStack_230 = (undefined1 *)0x4216e6;
                                              FUN_00448aa0();
                                              local_c._0_1_ = 2;
                                              FUN_00408ad0();
                                              pppppppCStack_22c = (LPSTR ******)0x421707;
                                              FUN_00448740();
                                              iVar6 = DAT_0131bb34;
                                            }
                                            local_1c8 = (float)((int)local_1c8 + 1);
                                            iVar4 = iVar4 + 0x30;
                                          } while ((int)local_1c8 < (int)local_1d0);
                                        }
                                        FUN_009885d0();
                                        local_c._0_1_ = 7;
                                        FUN_00401320();
                                        local_c._0_1_ = 8;
                                        uVar7 = FUN_004015b0(local_1a4,0x7a7,0x10002);
                                        local_c._0_1_ = 10;
                                        uVar7 = FUN_004238b0(uVar7);
                                        FUN_00401280(uVar7);
                                        local_c._0_1_ = 7;
                                        FUN_00401650();
                                        local_c._0_1_ = 2;
LAB_004217af:
                                        FUN_00408ad0();
                                        FUN_004012f0();
                                        local_20c = 1;
LAB_004217cc:
                                        FUN_00408ad0();
                                      }
                                    }
                                  }
                                  else {
                                    local_20c = 1;
                                    FUN_004012f0();
                                    DAT_00f07da6 = DAT_00f07da6 == '\0';
                                  }
                                }
                                else {
                                  local_20c = 1;
                                  FUN_004012f0();
                                  DAT_00f09544 = DAT_00f09544 == '\0';
                                }
                              }
                              else {
                                iVar5 = FUN_00475500();
                                *(uint *)(iVar5 + 0xe8) = *(uint *)(iVar5 + 0xe8) ^ 0x20000000;
                                *(byte *)(iVar5 + 0xe4) = *(byte *)(iVar5 + 0xe8) & 1;
                              }
                            }
                            else {
                              iVar5 = FUN_00475500();
                              *(uint *)(iVar5 + 0xe8) = *(uint *)(iVar5 + 0xe8) ^ 0x4000000;
                              *(byte *)(iVar5 + 0xe4) = *(byte *)(iVar5 + 0xe8) & 1;
                            }
                            goto LAB_00422b79;
                          }
                          iVar5 = FUN_00475500();
                          *(uint *)(iVar5 + 0xe8) = *(uint *)(iVar5 + 0xe8) ^ 0x800000;
                          *(byte *)(iVar5 + 0xe4) = *(byte *)(iVar5 + 0xe8) & 1;
                          local_20c = 1;
                        }
                        else {
                          iVar5 = FUN_00475500();
                          *(uint *)(iVar5 + 0xe8) = *(uint *)(iVar5 + 0xe8) ^ 0x2000000;
                          *(byte *)(iVar5 + 0xe4) = *(byte *)(iVar5 + 0xe8) & 1;
                          local_20c = 1;
                        }
LAB_00422b74:
                        FUN_004012f0();
                      }
                      else {
                        DAT_012586d7 = DAT_012586d7 == '\0';
                        if ((bool)DAT_012586d7) {
                          FUN_004012f0();
                          local_20c = 1;
                        }
                        else {
                          FUN_004012f0();
                          local_20c = 1;
                        }
                      }
                    }
                    else {
                      DAT_00f09545 = DAT_00f09545 == '\0';
                      if ((bool)DAT_00f09545) {
                        FUN_004012f0();
                        local_20c = 1;
                      }
                      else {
                        FUN_004012f0();
                        local_20c = 1;
                      }
                    }
                  }
                  else {
                    DAT_012587e0 = DAT_012587e0 == '\0';
                    if ((bool)DAT_012587e0) {
                      FUN_004012f0();
                      local_20c = 1;
                    }
                    else {
                      FUN_004012f0();
                      local_20c = 1;
                    }
                  }
                }
                else {
                  DAT_0125873e = DAT_0125873e == '\0';
                  if ((bool)DAT_0125873e) {
                    FUN_004012f0();
                    local_20c = 1;
                  }
                  else {
                    FUN_004012f0();
                    local_20c = 1;
                  }
                }
              }
              else {
                DAT_0125899e = DAT_0125899e == '\0';
                if ((bool)DAT_0125899e) {
                  FUN_004012f0();
                  local_20c = 1;
                }
                else {
                  FUN_004012f0();
                  local_20c = 1;
                }
              }
            }
            else {
              DAT_0125873c = DAT_0125873c == '\0';
              if ((bool)DAT_0125873c) {
                FUN_004012f0();
                local_20c = 1;
              }
              else {
                FUN_004012f0();
                local_20c = 1;
              }
            }
          }
          else {
            DAT_012586d8 = DAT_012586d8 == '\0';
            if ((bool)DAT_012586d8) {
              FUN_004012f0();
              local_20c = 1;
            }
            else {
              FUN_004012f0();
              local_20c = 1;
            }
          }
        }
        else {
          DAT_01258a08 = 1 - DAT_01258a08;
        }
      }
      else if ((param_2[1] - *param_2) / 0x1c < 2) {
        _DAT_012595d4 = (undefined1 *)0x2d2d2d;
        DAT_012595d8 = 0;
      }
      else {
        pppppppCStack_22c = DAT_012587e4;
        puStack_230 = (undefined1 *)0x421081;
        FUN_0055c6c0();
        if ((local_210 != 0) &&
           (0 < (int)((int)DAT_012587e4[1][local_210][0x277] -
                      (int)DAT_012587e4[1][local_210][0x276] & 0xfffffffcU))) {
          _DAT_012595d4 = local_214;
          DAT_012595d8 = local_210;
        }
      }
    }
  }
LAB_00422b79:
  local_c = (uint)local_c._1_3_ << 8;
  if (0xf < local_1ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00422bac:
  *param_1 = local_20c;
  pppppppCStack_22c = (LPSTR ******)local_208;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  puStack_230 = (undefined1 *)0x422bd7;
  FUN_00408ed0();
  if (local_1f4 < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

