// FUN_007f5a00 @ 007f5a00 body=[[007f5a00, 007f5b03] [007f5b07, 007f5b7b] [007f5b7f, 007f5bb9] [007f5bbd, 007f5d4d] [007f5d51, 007f5d64] [007f5d68, 007f5d88] [007f5d8c, 007f5da3] [007f5da7, 007f5e5b] [007f5e5f, 007f5e72] [007f5e76, 007f5e96] [007f5e9a, 007f5eb1] [007f5eb5, 007f5fdf] [007f5fe3, 007f6003] [007f6007, 007f601e] [007f6022, 007f6057] [007f6060, 007f6208] [007f620c, 007f6252] [007f62b9, 007f62cf] [007f62d3, 007f62e7]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

uint FUN_007f5a00(int param_1)

{
  void *_Dst;
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  char *******pppppppcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iStack_13b68;
  undefined4 uStack_13b64;
  int iStack_13b3c;
  int aiStack_13b30 [19997];
  char local_2bc [384];
  undefined **local_13c;
  undefined **local_f4 [10];
  uint local_cc;
  int local_c4;
  char local_bc;
  int *local_b8;
  int *local_b4;
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  char *******local_8c [4];
  undefined4 local_7c;
  uint local_78;
  int local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  int *local_38;
  void *local_34;
  char *******local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ab20;
  local_10 = ExceptionList;
  uStack_14 = 0x7f5a22;
  ExceptionList = &local_10;
  local_34 = _malloc(0x1000000);
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = (char *******)((uint)local_8c[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 1;
  FUN_00436780();
  local_8._0_1_ = 2;
  FUN_004367c0();
  local_8._0_1_ = 3;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (*(int *)(DAT_012586e0 + 0x5c) == 1) {
    FUN_00408ed0();
LAB_007f5ac8:
    FUN_00988f20();
    local_8._0_1_ = 4;
    FUN_00408ed0();
    local_8._0_1_ = 3;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00408ed0();
  }
  else {
    if (*(int *)(DAT_012586e0 + 0x5c) != 2) goto LAB_007f5ac8;
    local_8._0_1_ = uVar1;
    FUN_00436de0();
    local_8._0_1_ = 6;
    FUN_00408ed0();
    local_8._0_1_ = 3;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00436de0();
    local_8._0_1_ = 7;
    FUN_00408ed0();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_78 < 0x10) {
    pppppppcVar4 = (char *******)local_8c;
LAB_007f5bd1:
    if (*(char *)pppppppcVar4 == '\0') goto LAB_007f5be7;
    iVar3 = PHYSFS_exists();
    uStack_14 = CONCAT13(1,(undefined3)uStack_14);
    if (iVar3 == 0) goto LAB_007f5be7;
  }
  else {
    pppppppcVar4 = local_8c[0];
    if (local_8c[0] != (char *******)0x0) goto LAB_007f5bd1;
LAB_007f5be7:
    uStack_14 = uStack_14 & 0xffffff;
  }
  if (local_1c < 0x10) {
    pppppppcVar4 = (char *******)local_30;
LAB_007f5bf7:
    if ((*(char *)pppppppcVar4 == '\0') || (iVar3 = PHYSFS_exists(), iVar3 == 0)) goto LAB_007f5c1a;
    bVar2 = true;
  }
  else {
    pppppppcVar4 = local_30[0];
    if (local_30[0] != (char *******)0x0) goto LAB_007f5bf7;
LAB_007f5c1a:
    bVar2 = false;
  }
  if (((uStack_14._3_1_ == '\0') || (!bVar2)) ||
     (*(char *)(*(int *)(param_1 + 0x40) + 0x28) != '\0')) {
    FUN_007f6390();
    if (local_78 < 0x10) {
      pppppppcVar4 = (char *******)local_8c;
LAB_007f5c4e:
      if (*(char *)pppppppcVar4 == '\0') goto LAB_007f5c64;
      iVar3 = PHYSFS_exists();
      uStack_14 = CONCAT13(1,(undefined3)uStack_14);
      if (iVar3 == 0) goto LAB_007f5c64;
    }
    else {
      pppppppcVar4 = local_8c[0];
      if (local_8c[0] != (char *******)0x0) goto LAB_007f5c4e;
LAB_007f5c64:
      uStack_14 = uStack_14 & 0xffffff;
    }
    if (local_1c < 0x10) {
      pppppppcVar4 = (char *******)local_30;
LAB_007f5c74:
      if ((*(char *)pppppppcVar4 == '\0') || (iVar3 = PHYSFS_exists(), iVar3 == 0))
      goto LAB_007f5c97;
      bVar2 = true;
    }
    else {
      pppppppcVar4 = local_30[0];
      if (local_30[0] != (char *******)0x0) goto LAB_007f5c74;
LAB_007f5c97:
      bVar2 = false;
    }
    if (uStack_14._3_1_ == '\0') {
      local_5c = 0xf;
      local_60 = 0;
      local_70 = (uint)local_70._1_3_ << 8;
      FUN_00409350();
      local_8._0_1_ = 8;
      FUN_004015b0();
      local_8._0_1_ = 9;
      FUN_00987d20();
      FUN_00418e30();
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_00987ac0();
      local_13c = std::ios_base::vftable;
      uVar5 = FUN_00aad52d();
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto joined_r0x007f5ec2;
    }
    if (!bVar2) {
      local_5c = 0xf;
      local_60 = 0;
      local_70 = (uint)local_70._1_3_ << 8;
      FUN_00409350();
      local_8._0_1_ = 10;
      FUN_004015b0();
      local_8._0_1_ = 0xb;
      FUN_00987d20();
      FUN_00418e30();
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,10);
      FUN_00987ac0();
      local_13c = std::ios_base::vftable;
      uVar5 = FUN_00aad52d();
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto joined_r0x007f5ec2;
    }
  }
  local_38 = &iStack_13b68;
  iStack_13b68._0_1_ = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_f4,local_30,0);
  local_8._0_1_ = 0xc;
  if (local_c4 != 0) {
    PHYSFS_fileLength();
  }
  FUN_00992f20();
  local_8._0_1_ = 3;
  FUN_00992d60();
  local_b4 = aiStack_13b30;
  local_ac = FUN_00aad56b();
  local_38 = &iStack_13b68;
  iStack_13b68._0_1_ = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_f4,local_8c,0);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (local_bc == '\0') {
    if (0 < iStack_13b3c) {
      local_b0 = iStack_13b3c;
      do {
        iVar3 = *local_b4;
        local_b4 = local_b4 + 2;
        FUN_00992f20();
        FUN_0080b160();
        _sprintf(local_2bc,"%squad_texture_%d.dds");
        if ((local_2bc[0] == '\0') || (iVar6 = PHYSFS_exists(), iVar6 == 0)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x19c) + 4 + iVar3 * 0x3c0) -
                  *(int *)(*(int *)(param_1 + 0x19c) + iVar3 * 0x3c0) >> 2;
          if (0 < iVar3) {
            local_b8 = (int *)FUN_00aad56b();
            local_8._0_1_ = 0xe;
            if (local_b8 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *local_b8 = iVar3;
              local_38 = local_b8 + 1;
              uStack_13b64 = 0x7f6164;
              _eh_vector_constructor_iterator_
                        (local_38,0x6c,iVar3,(_func_void_void_ptr *)&LAB_007ec3c0,FUN_007f62f0);
              piVar7 = local_38;
            }
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_007f2d40();
            FUN_00803bc0();
            if (piVar7 != (int *)0x0) {
              _eh_vector_destructor_iterator_(piVar7,0x6c,piVar7[-1],FUN_007f62f0);
              FUN_00aaea59();
            }
          }
        }
        else {
          FUN_007f2f00();
          FUN_00803cc0();
        }
        local_b0 = local_b0 + -1;
      } while (local_b0 != 0);
    }
    local_f4[0] = &PTR_FUN_00e37dc0;
    if (local_c4 != 0) {
      PHYSFS_close();
      local_c4 = 0;
    }
    local_f4[0] = &PTR_FUN_00e3b540;
    if (local_cc < 0x10) {
      FUN_00aaea59();
      _Dst = *(void **)(param_1 + 0x190c);
      if (_Dst != *(void **)(param_1 + 0x1910)) {
        FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x1910),0);
        *(void **)(param_1 + 0x1910) = _Dst;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uVar5 = FUN_00992d60();
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x007f5ec2:
  if (local_78 < 0x10) {
    ExceptionList = local_10;
    return uVar5 & 0xffffff00;
  }
  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
  local_1c = 0xf;
  local_20 = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_94 = 0xf;
  local_98 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

