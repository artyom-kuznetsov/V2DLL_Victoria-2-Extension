// FUN_004ee990 @ 004ee990 body=[[004ee990, 004eeb1b] [004eeb20, 004eeead]]


/* WARNING: Removing unreachable block (ram,0x004eea58) */

void FUN_004ee990(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  int local_6c [16];
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  if (((DAT_01258734 == 0) || (param_2 == DAT_01258734 + 0x10)) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x8000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x8000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = iVar7;
  if (iVar7 == 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
  }
  if ((*(int *)(iVar8 + 200) != 0) && (uVar5 = *(uint *)(param_1 + 0x48), uVar5 != 0)) {
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
    }
    uVar1 = *(uint *)(*(int *)(iVar7 + 0x118) + *(int *)(*(int *)(param_2 + 0xf0) + 0x28) * 4);
    lVar10 = __alldiv(uVar1 << 0x1f,uVar1 >> 1,uVar5 << 0xf,
                      ((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
    *(longlong *)(param_1 + 0x40) = lVar10;
    if (lVar10 < CONCAT44(DAT_0125d75c,DAT_0125d758)) {
      puVar4 = (undefined4 *)(param_1 + 0x40);
    }
    else {
      puVar4 = &DAT_0125d758;
    }
    *(undefined4 *)(param_1 + 0x40) = *puVar4;
    *(undefined4 *)(param_1 + 0x44) = puVar4[1];
  }
  FUN_004eefa0(param_2,param_1 + 0x20,param_3,param_4);
  iVar7 = *(int *)(param_1 + 8);
  local_6c[9] = 0;
  local_6c[10] = 1;
  local_6c[0xb] = 2;
  local_6c[0] = 0x36;
  local_6c[1] = 0x37;
  local_6c[2] = 0x38;
  local_6c[3] = 0x33;
  local_6c[4] = 0x34;
  local_6c[5] = 0x35;
  local_6c[6] = 0x39;
  local_6c[7] = 0x3a;
  local_6c[8] = 0x3b;
  if (iVar7 == 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x188);
  }
  local_2c = CONCAT44(local_2c._4_4_,*(undefined4 *)(iVar7 + 0x58));
  local_c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x5c) * 4);
  local_8 = *(int *)(local_c + 0xbcc);
  param_1 = 0;
  do {
    local_1c = 0;
    if (*(int *)(local_c + 0x20) == 0) {
      lVar10 = 0;
    }
    else {
      iVar7 = *(int *)(param_2 + 0x138);
      uVar5 = *(uint *)(*(int *)(local_c + 0xa60) + local_6c[iVar7 * 3 + param_1] * 8);
      lVar10 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
      iVar7 = local_6c[param_1 + 9] + 0x1c + iVar7 * 4;
      lVar10 = lVar10 + CONCAT44(*(undefined4 *)(local_8 + 4 + iVar7 * 8),
                                 *(undefined4 *)(local_8 + iVar7 * 8));
    }
    switch(local_6c[param_1 + *(int *)(param_2 + 0x138) * 3]) {
    case 0x33:
      uVar5 = **(uint **)(*(int *)(iVar3 + 8) + 0x26c);
      break;
    case 0x34:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 8) + 0x26c) + 4);
      break;
    case 0x35:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 8) + 0x26c) + 8);
      break;
    case 0x36:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x1f8);
      break;
    case 0x37:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x200);
      lVar11 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
      local_24 = lVar11;
      FUN_004de500(param_2);
      lVar11 = __alldiv(local_10 << 0x1e,((int)local_10 >> 0x1f) << 0x1e | local_10 >> 2,0x1f40000,0
                       );
      lVar11 = lVar11 + local_24;
      goto LAB_004eec9f;
    case 0x38:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x208);
      break;
    case 0x39:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x1c8);
      break;
    case 0x3a:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x1d0);
      break;
    case 0x3b:
      uVar5 = *(uint *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x9c) + 0x1d8);
      break;
    default:
      goto switchD_004eeba5_default;
    }
    lVar11 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
LAB_004eec9f:
    lVar10 = lVar11 + lVar10;
switchD_004eeba5_default:
    if ((DAT_01258734 == 0) || (param_2 == DAT_01258734 + 0x10)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*(int *)(local_8 +
                                (local_6c[param_1 + 9] + 0x17 + *(int *)(param_2 + 0x138) * 4) *
                                0x10) + *(int *)(*(int *)(param_2 + 0x80) + 8) * 4);
      if (*(char *)(param_2 + 0x13c) == '\0') {
        if (*(char *)(param_2 + 0x13d) != '\0') {
          uVar5 = uVar5 + *(int *)(local_8 + 0x274);
        }
      }
      else {
        uVar5 = uVar5 + *(int *)(local_8 + 0x270);
      }
    }
    lVar11 = __alldiv(uVar5 << 0x1e,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2,0x1f40000,0);
    uVar5 = (uint)(lVar10 + lVar11);
    local_1c._4_4_ = (int)((ulonglong)(lVar10 + lVar11) >> 0x20);
    if (*(int *)(param_2 + 0x104) == local_6c[param_1 + 9]) {
      puVar6 = (uint *)FUN_004eeee0(iVar3,param_3,param_4);
      bVar9 = CARRY4(uVar5,*puVar6);
      uVar5 = uVar5 + *puVar6;
      local_1c._4_4_ = local_1c._4_4_ + puVar6[1] + (uint)bVar9;
    }
    lVar10 = __allmul(uVar5 + 0x8000,local_1c._4_4_ + (uint)(0xffff7fff < uVar5),
                      *(undefined4 *)(iVar3 + 0x20 + local_6c[param_1 + 9] * 8),
                      *(undefined4 *)(iVar3 + 0x24 + local_6c[param_1 + 9] * 8));
    iVar7 = local_6c[param_1 + 9];
    *(int *)(iVar3 + 0x20 + iVar7 * 8) = (int)(lVar10 >> 0xf);
    *(int *)(iVar3 + 0x24 + iVar7 * 8) = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
    if (iVar7 == 2) {
      iVar7 = *(int *)(iVar3 + 0xc);
      if (iVar7 == 0) {
        iVar7 = *(int *)(iVar3 + 8);
        if ((*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x48) & 0xfffffffcU) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = **(int **)(iVar7 + 0x48);
        }
        iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar7 * 4);
      }
      FUN_004dca10(param_2,&local_14,iVar7,0);
      lVar10 = __alldiv(local_14 << 0x1e,((int)local_14 >> 0x1f) << 0x1e | local_14 >> 2,0x1f40000,0
                       );
      lVar10 = __allmul(lVar10 + 0x8000,*(undefined4 *)(iVar3 + 0x30),*(undefined4 *)(iVar3 + 0x34))
      ;
      *(longlong *)(iVar3 + 0x30) = lVar10 >> 0xf;
      puVar6 = (uint *)FUN_004ef3f0();
      iVar8 = *(uint *)(local_c + 0x14d0) - *puVar6;
      iVar7 = (*(int *)(local_c + 0x14d4) - puVar6[1]) -
              (uint)(*(uint *)(local_c + 0x14d0) < *puVar6);
      if ((iVar7 < 1) && (iVar7 < 0)) {
        local_2c = 0;
        local_2c._4_4_ = 0;
        local_2c._0_4_ = 0;
        iVar7 = local_2c._4_4_;
        iVar8 = (int)local_2c;
      }
      iVar2 = local_6c[param_1 + 9];
      lVar10 = __allmul(*(undefined4 *)(iVar3 + 0x20 + iVar2 * 8),
                        *(undefined4 *)(iVar3 + 0x24 + iVar2 * 8),iVar8,iVar7);
      *(int *)(iVar3 + 0x20 + iVar2 * 8) = (int)(lVar10 >> 0xf);
      *(int *)(iVar3 + 0x24 + iVar2 * 8) = (int)((ulonglong)(lVar10 >> 0xf) >> 0x20);
    }
    iVar7 = local_6c[param_1 + 9];
    iVar8 = *(int *)(iVar3 + 0x24 + iVar7 * 8);
    if ((iVar8 < 1) && (iVar8 < 0)) {
      *(undefined4 *)(iVar3 + 0x20 + iVar7 * 8) = 0;
      *(undefined4 *)(iVar3 + 0x24 + iVar7 * 8) = 0;
    }
    param_1 = param_1 + 1;
    if (2 < param_1) {
      return;
    }
  } while( true );
}

