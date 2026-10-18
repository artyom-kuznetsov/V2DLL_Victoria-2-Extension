// FUN_007f2f70 @ 007f2f70 body=[[007f2f70, 007f3026] [007f302a, 007f30a9] [007f30b0, 007f34ed] [007f34f0, 007f355a] [007f3564, 007f3585] [007f3589, 007f35b3] [007f35b7, 007f35c9]]


void FUN_007f2f70(uint *param_1)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined **local_110 [18];
  undefined4 local_c8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90 [6];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_20;
  uint *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = (int)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59157;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8 = 0;
  FUN_004015b0(local_4c,0x617,3);
  local_8._0_1_ = 1;
  uVar3 = FUN_00987d20();
  FUN_00401280(uVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00987ac0(local_110);
  local_110[0] = std::ios_base::vftable;
  FUN_00aad52d(local_110);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00436780();
  local_8 = 2;
  FUN_004367c0();
  local_8._0_1_ = 3;
  if (*(int *)(DAT_012586e0 + 0x5c) == 1) {
    FUN_00408ed0(local_ac,0,0xffffffff);
  }
  FUN_004a0d60(*(undefined4 *)(iVar2 + 0x40),&local_30);
  local_8._0_1_ = 4;
  puVar11 = (uint *)local_30;
  while (puVar11 != (uint *)0x0) {
    local_18 = *puVar11;
    local_1c = (uint *)puVar11[2];
    iVar4 = *(int *)(local_18 + 0x6c);
    iVar6 = *(int *)(local_18 + 0x70) - iVar4 >> 5;
    puVar11 = local_1c;
    if ((iVar6 != 0) && (local_20 = (int *)0x0, 0 < iVar6)) {
      param_1 = (uint *)0x0;
      do {
        iVar8 = (int)param_1;
        iVar6 = *(int *)(iVar2 + 0xf8);
        iVar4 = FUN_0045c080(iVar6,(int)param_1 + iVar4);
        if (iVar4 == iVar6) {
          iVar4 = *(int *)(iVar2 + 0xf8);
          iVar6 = *(int *)(iVar2 + 0xf4);
          piVar5 = (int *)FUN_00a45090(*(int *)(local_18 + 0x6c) + iVar8);
          *piVar5 = (iVar4 - iVar6) / 0x1c;
          FUN_00a840b0();
          *(int *)(iVar2 + 0xec) = *(int *)(iVar2 + 0xec) + 1;
          iVar8 = (int)param_1;
        }
        iVar4 = *(int *)(local_18 + 0x6c);
        local_20 = (int *)((int)local_20 + 1);
        param_1 = (uint *)(iVar8 + 0x20);
        puVar11 = local_1c;
      } while ((int)local_20 < *(int *)(local_18 + 0x70) - iVar4 >> 5);
    }
  }
  uVar9 = *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c);
  uVar7 = -(uint)((int)((ulonglong)uVar9 * 0x3c0 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x3c0);
  param_1 = (uint *)FUN_00aad56b(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  local_8._0_1_ = 5;
  if (param_1 == (uint *)0x0) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = param_1 + 1;
    *param_1 = uVar9;
    _eh_vector_constructor_iterator_(puVar11,0x3c0,uVar9,FUN_007ebc90,FUN_007ebf50);
  }
  local_8._0_1_ = 4;
  *(uint **)(iVar2 + 0x19c) = puVar11;
  param_1 = (uint *)0x0;
  if (0 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c)) {
    local_18 = 0;
    do {
      local_54 = DAT_00f092fc;
      local_68 = DAT_00f092fc;
      local_90[5] = DAT_00f092fc;
      local_90[0] = DAT_00f092fc;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      local_6c = 0;
      local_70 = 0;
      local_74 = 0;
      local_78 = 0;
      local_90[4] = 0;
      local_90[3] = 0;
      local_90[2] = 0;
      local_90[1] = 0;
      D3DXMatrixTranslation
                (local_90,(float)(*(int *)(iVar2 + 0x194) * ((int)param_1 % *(int *)(iVar2 + 0x18c))
                                 + *(int *)(iVar2 + 0x194) / 2),0,
                 (float)(*(int *)(iVar2 + 0x198) * ((int)param_1 / *(int *)(iVar2 + 0x18c)) +
                        *(int *)(iVar2 + 0x198) / 2));
      puVar10 = local_90;
      puVar12 = (undefined4 *)(local_18 + 0x13c + *(int *)(iVar2 + 0x19c));
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)(local_18 + 0x388 + *(int *)(iVar2 + 0x19c)) = 0;
      *(undefined1 *)(local_18 + 0x2cc + *(int *)(iVar2 + 0x19c)) = 1;
      *(undefined1 *)(local_18 + 0x2f0 + *(int *)(iVar2 + 0x19c)) = 1;
      *(undefined1 *)(local_18 + 0x338 + *(int *)(iVar2 + 0x19c)) = 1;
      *(undefined1 *)(local_18 + 0x314 + *(int *)(iVar2 + 0x19c)) = 1;
      *(undefined1 *)(local_18 + *(int *)(iVar2 + 0x19c) + 0x284) = 1;
      *(undefined1 *)(local_18 + *(int *)(iVar2 + 0x19c) + 0x260) = 1;
      *(undefined1 *)(local_18 + *(int *)(iVar2 + 0x19c) + 0x2a8) = 1;
      param_1 = (uint *)((int)param_1 + 1);
      local_18 = local_18 + 0x3c0;
    } while ((int)param_1 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c));
  }
  uVar9 = *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c);
  uVar7 = -(uint)((int)((ulonglong)uVar9 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar9 * 0x10);
  param_1 = (uint *)FUN_00aad56b(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  local_8._0_1_ = 6;
  if (param_1 == (uint *)0x0) {
    local_1c = (uint *)0x0;
  }
  else {
    puVar11 = param_1 + 1;
    *param_1 = uVar9;
    _eh_vector_constructor_iterator_(puVar11,0x10,uVar9,FUN_00413490,FUN_00aa8540);
    local_1c = puVar11;
  }
  puVar11 = local_1c;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_007f6eb0(iVar2,local_1c);
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c)) {
    param_1 = (uint *)0x0;
    do {
      if ((puVar11[1] - *puVar11 & 0xfffffffc) != 0) {
        FUN_009beeb0(puVar11);
      }
      param_1 = (uint *)((int)param_1 + 0x3c0);
      iVar4 = iVar4 + 1;
      puVar11 = puVar11 + 4;
    } while (iVar4 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c));
  }
  _Src = *(void **)(iVar2 + 0x30);
  uVar7 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2;
  uVar9 = (int)_Src - *(int *)(iVar2 + 0x2c) >> 2;
  param_1 = (uint *)0x0;
  if (uVar9 < uVar7) {
    FUN_0043cb20(iVar2 + 0x2c,_Src,&param_1);
  }
  else if ((uVar7 < uVar9) && (_Dst = (void *)(*(int *)(iVar2 + 0x2c) + uVar7 * 4), _Dst != _Src)) {
    param_1 = (uint *)0x0;
    FID_conflict__memcpy(_Dst,_Src,0);
    *(int *)(iVar2 + 0x30) = (int)param_1 + (int)_Dst;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c)) {
    param_1 = (uint *)0x0;
    do {
      local_20 = (int *)(*(int *)(iVar2 + 0x19c) + (int)param_1);
      iVar8 = 0;
      iVar6 = local_20[1] - *local_20 >> 2;
      if (0 < iVar6) {
        do {
          iVar1 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(int *)(*(int *)(iVar2 + 0x2c) +
                  *(int *)(*(int *)(*(int *)(*local_20 + iVar1) + 8) + 0xb4) * 4) = iVar4;
        } while (iVar8 < iVar6);
      }
      param_1 = (uint *)((int)param_1 + 0x3c0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 400) * *(int *)(iVar2 + 0x18c));
  }
  if (local_1c != (uint *)0x0) {
    puVar11 = local_1c + -1;
    _eh_vector_destructor_iterator_(local_1c,0x10,local_1c[-1],FUN_00aa8540);
    FUN_00aaea59(puVar11);
  }
  if (local_30 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  local_30 = (int *)0x0;
  local_2c = 0;
  local_28 = 0;
  if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac[0]);
  }
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  if (local_b4 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_c8);
}

