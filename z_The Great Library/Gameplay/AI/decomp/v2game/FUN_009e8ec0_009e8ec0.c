// FUN_009e8ec0 @ 009e8ec0 body=[[009e8ec0, 009e9078] [009e907c, 009e90a0] [009e90a4, 009e91c3] [009e91c7, 009e91ea] [009e91ee, 009e9208] [009e920c, 009e9226] [009e922a, 009e92dd] [009e92e1, 009e9302] [009e9306, 009e9325] [009e9329, 009e933f] [009e9343, 009e9356] [009e935a, 009e9379] [009e937d, 009e93c9] [009e93cd, 009e9526] [009e952a, 009e960c] [009e9610, 009e962a] [009e962e, 009e9645] [009e9649, 009e965d]]


undefined4 FUN_009e8ec0(LPCSTR param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  int iVar6;
  size_t _Size;
  void *_Memory;
  LPCSTR lpMultiByteStr;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  uint in_stack_00000018;
  uint local_624;
  WCHAR local_5fc [572];
  undefined **local_184;
  undefined1 local_13c [52];
  char *local_108;
  undefined **local_100 [10];
  uint local_d8;
  int local_d0;
  char *local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  byte ****local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined8 local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  byte ****local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5d972;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = (int *)0x0;
  ExceptionList = &local_10;
  FUN_00989720();
  local_8c = CONCAT44(&local_624,(undefined4)local_8c);
  local_624 = local_624 & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_100,&param_1,0);
  local_8._0_1_ = 1;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = (byte ****)((uint)local_68[0] & 0xffffff00);
  pcVar3 = local_cc;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 2;
  pcVar3 = (char *)PHYSFS_getWriteDir();
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = (byte ****)((uint)local_a8[0] & 0xffffff00);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 3;
  if (DAT_01258a68 == (undefined4 *)0x0) {
    iVar7 = -1;
  }
  else {
    pppppbVar4 = (byte *****)local_68[0];
    if (local_54 < 0x10) {
      pppppbVar4 = local_68;
    }
    pbVar8 = (byte *)*DAT_01258a68;
    do {
      bVar2 = *(byte *)pppppbVar4;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_009e8fe6:
        iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_009e8ff2;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)pppppbVar4 + 1);
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_009e8fe6;
      pppppbVar4 = (byte *****)((int)pppppbVar4 + 2);
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
  }
LAB_009e8ff2:
  pppppbVar4 = (byte *****)local_a8[0];
  if (local_94 < 0x10) {
    pppppbVar4 = local_a8;
  }
  pppppbVar5 = (byte *****)local_68[0];
  if (local_54 < 0x10) {
    pppppbVar5 = local_68;
  }
  do {
    bVar2 = *(byte *)pppppbVar5;
    bVar9 = bVar2 < *(byte *)pppppbVar4;
    if (bVar2 != *(byte *)pppppbVar4) {
LAB_009e9032:
      iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_009e9037;
    }
    if (bVar2 == 0) break;
    bVar2 = *(byte *)((int)pppppbVar5 + 1);
    bVar9 = bVar2 < *(byte *)((int)pppppbVar4 + 1);
    if (bVar2 != *(byte *)((int)pppppbVar4 + 1)) goto LAB_009e9032;
    pppppbVar5 = (byte *****)((int)pppppbVar5 + 2);
    pppppbVar4 = (byte *****)((int)pppppbVar4 + 2);
  } while (bVar2 != 0);
  iVar6 = 0;
LAB_009e9037:
  if ((iVar7 == 0) || (iVar6 == 0)) {
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    do {
      cVar1 = *local_cc;
      local_cc = local_cc + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00408ed0();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if ((local_d0 == 0) || (_Size = PHYSFS_fileLength(), _Size == 0)) {
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = (byte ****)((uint)local_a8[0] & 0xffffff00);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = (byte ****)((uint)local_68[0] & 0xffffff00);
      FUN_00992d60();
      goto joined_r0x009e90bb;
    }
    _Memory = _malloc(_Size);
    FUN_00992f20();
    local_8c = CONCAT44(&local_624,(undefined4)local_8c);
    local_624 = local_624 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_13c,&param_1,1);
    local_8._0_1_ = 8;
    FUN_00993720();
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 9;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    do {
      cVar1 = *local_108;
      local_108 = local_108 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_00408ed0();
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4 = local_c4 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _free(_Memory);
    FUN_00992d60();
  }
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = (byte ****)((uint)local_a8[0] & 0xffffff00);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = local_8 & 0xffffff00;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = (byte ****)((uint)local_68[0] & 0xffffff00);
  local_100[0] = &PTR_FUN_00e37dc0;
  if (local_d0 != 0) {
    PHYSFS_close();
    local_d0 = 0;
  }
  local_100[0] = &PTR_FUN_00e3b540;
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  lpMultiByteStr = param_1;
  if (in_stack_00000018 < 0x10) {
    lpMultiByteStr = (LPCSTR)&param_1;
  }
  local_624 = 0x9e93f3;
  MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,local_5fc,0x200);
  iVar7 = (**(code **)((int)*ppv_00f20c58 + 0x38))();
  if (((-1 < iVar7) && (iVar7 = (**(code **)(*DAT_00f20c48 + 0x2c))(), -1 < iVar7)) &&
     (iVar7 = (**(code **)(*DAT_00f20c4c + 0x24))(), -1 < iVar7)) {
    iVar7 = (**(code **)((int)*ppv_00f20c58 + 0x10))();
    if (-1 < iVar7) {
      (**(code **)(*DAT_00f20c54 + 8))();
      DAT_00f20c54 = (int *)0x0;
    }
    iVar7 = (**(code **)((int)*ppv_00f20c58 + 0x30))();
    DAT_00f20c54 = DAT_00f20c48;
    DAT_00f20c48 = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))();
    local_14 = (int *)0x0;
  }
  if (DAT_00f20c48 != (int *)0x0) {
    (**(code **)(*DAT_00f20c48 + 8))();
    DAT_00f20c48 = (int *)0x0;
  }
  if (-1 < iVar7) {
    local_8c = 0;
    iVar7 = (**(code **)(*DAT_00f20c40 + 0x38))();
  }
  FUN_00408ed0();
  if (-1 < iVar7) {
    (**(code **)(*DAT_00f20c4c + 0x1c))();
    DAT_00f20c3c = 0;
    if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return 1;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  FUN_009e99c0();
  local_8._0_1_ = 0xe;
  FUN_004015b0();
  local_8._0_1_ = 0xf;
  FUN_00987d20();
  FUN_00418e30();
  FUN_00418e30();
  FUN_00418e30();
  FUN_00401280();
  local_8._0_1_ = 0xe;
  FUN_00987ac0();
  local_184 = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  DAT_00f20c3c = 3;
joined_r0x009e90bb:
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return 0;
}

