// FUN_0085f3a0 @ 0085f3a0 body=[[0085f3a0, 0085f5bb]]


void FUN_0085f3a0(int param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  int iStack_1c;
  uint local_18;
  int iStack_14;
  int *local_10;
  int local_c;
  
  iVar3 = param_1;
  local_18 = 0;
  iStack_14 = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  FUN_0057afc0(param_1 + 0x114);
  FUN_008601b0(param_1 + 0x104);
  iVar6 = *(int *)(param_1 + 0xc) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4);
  iVar4 = 1;
  iVar9 = *(int *)(iVar6 + 0x4c) - *(int *)(iVar6 + 0x48) >> 3;
  local_20 = 0;
  iStack_1c = 0;
  if (1 < iVar9) {
    if (1 < iVar9 + -1) {
      uVar7 = iVar9 - 3U >> 1;
      puVar5 = (uint *)(*(int *)(iVar6 + 0x48) + 8);
      iVar8 = uVar7 + 1;
      iVar4 = uVar7 + 2 + iVar8;
      do {
        bVar10 = CARRY4(local_18,*puVar5);
        local_18 = local_18 + *puVar5;
        iStack_14 = iStack_14 + puVar5[1] + (uint)bVar10;
        bVar10 = CARRY4((uint)local_28,puVar5[2]);
        local_28._0_4_ = (uint)local_28 + puVar5[2];
        local_28._4_4_ = local_28._4_4_ + puVar5[3] + (uint)bVar10;
        puVar5 = puVar5 + 4;
        iVar8 = iVar8 + -1;
        local_c = iVar4;
      } while (iVar8 != 0);
    }
    if (iVar4 < iVar9) {
      local_20 = *(uint *)(*(int *)(iVar6 + 0x48) + iVar4 * 8);
      iStack_1c = *(int *)(*(int *)(iVar6 + 0x48) + 4 + iVar4 * 8);
    }
    bVar10 = CARRY4(local_20,local_18 + (uint)local_28);
    local_20 = local_20 + local_18 + (uint)local_28;
    iStack_1c = iStack_1c + iStack_14 + local_28._4_4_ + (uint)CARRY4(local_18,(uint)local_28) +
                (uint)bVar10;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0xc) * 4) + 0xe64) + 0x50)
  ;
  local_30 = *(undefined4 *)(iVar4 + 0x1c);
  local_2c = *(int *)(iVar4 + 0x20);
  iVar4 = *(int *)(DAT_012587e4[1] + local_2c * 4);
  if (0 < (int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU)) {
    local_30 = 0x2d2d2d;
    local_2c = 0;
  }
  local_c = CONCAT31(local_c._1_3_,local_2c != 0);
  param_1 = 0;
  _local_18 = CONCAT44(*DAT_012587e4,local_18);
  if (0 < *DAT_012587e4) {
    local_10 = DAT_012587e4 + 1;
    do {
      iVar4 = *(int *)(*local_10 + param_1 * 4);
      iVar6 = *(int *)(iVar4 + 0x20);
      puVar1 = (undefined8 *)(iVar4 + 0x1c);
      uVar2 = *(undefined4 *)puVar1;
      local_28 = *puVar1;
      if ((((iVar6 != 0) &&
           (((((char)uVar2 != 'R' || ((char)((uint)uVar2 >> 8) != 'E')) ||
             ((char)((uint)uVar2 >> 0x10) != 'B')) &&
            ((iVar6 != *(int *)(iVar3 + 0xc) &&
             (iVar4 = *(int *)(DAT_012587e4[1] + iVar6 * 4),
             0 < (int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU))))))) &&
          (*(char *)(iVar4 + 0x31) == '\0')) &&
         ((*(int *)(iVar4 + 0x142c) != *(int *)(iVar3 + 0xc) &&
          (iVar4 = FUN_0085ee00(iVar3,&local_28,local_c,&local_30,1,local_20,iStack_1c), 0 < iVar4))
         )) {
        FUN_0085c010(iVar3,uVar2,iVar6);
      }
      param_1 = param_1 + 1;
    } while (param_1 < iStack_14);
  }
  return;
}

