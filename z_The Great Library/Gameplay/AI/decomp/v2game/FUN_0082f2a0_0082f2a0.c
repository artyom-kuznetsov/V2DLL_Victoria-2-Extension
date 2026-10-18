// FUN_0082f2a0 @ 0082f2a0 body=[[0082f2a0, 0082f428]]


/* WARNING: Removing unreachable block (ram,0x0082f2bf) */
/* WARNING: Removing unreachable block (ram,0x0082f397) */

void FUN_0082f2a0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int unaff_ESI;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_18;
  uint local_10 [3];
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x20);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x24);
  lVar8 = *(longlong *)(unaff_ESI + 0x20);
  lVar7 = FUN_00b31c36();
  if (lVar8 < lVar7) {
    *param_1 = param_4;
    param_1[1] = param_5;
    return;
  }
  if (*(char *)(unaff_ESI + 0x28) != '\0') {
    local_18._0_4_ = param_4;
    local_18._4_4_ = param_5;
    local_10[1] = param_3;
    local_10[0] = param_2;
    if (((int)param_5 < (int)param_3) || (((int)param_5 <= (int)param_3 && (param_4 <= param_2)))) {
      puVar5 = (uint *)&local_18;
    }
    else {
      puVar5 = local_10;
    }
    param_2 = *puVar5;
    param_3 = puVar5[1];
  }
  lVar8 = __allmul(uVar1,uVar2,*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
  lVar8 = lVar8 >> 0xf;
  iVar6 = (int)((ulonglong)lVar8 >> 0x20);
  local_18._0_4_ = (uint)lVar8 - param_2;
  uVar3 = (uint)((uint)lVar8 < param_2);
  iVar4 = iVar6 - param_3;
  local_18._4_4_ = iVar4 - uVar3;
  local_10[0] = 0;
  local_10[1] = 0;
  if (((int)local_18._4_4_ < 0) ||
     ((local_18._4_4_ == 0 || SBORROW4(iVar6,param_3) != SBORROW4(iVar4,uVar3) &&
      ((uint)local_18 == 0)))) {
    puVar5 = local_10;
  }
  else {
    puVar5 = (uint *)&local_18;
  }
  local_10[1] = param_7;
  local_10[0] = param_6;
  local_18 = __alldiv(*puVar5 << 0xf,puVar5[1] << 0xf | *puVar5 >> 0x11,
                      *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  if (CONCAT44(param_7,param_6) < local_18) {
    puVar5 = (uint *)&local_18;
  }
  else {
    puVar5 = local_10;
  }
  FUN_0082ec40(*puVar5,puVar5[1]);
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    lVar7 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),
                     *(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
    *(longlong *)param_1 = (lVar8 - (lVar7 >> 0xf)) + CONCAT44(param_5,param_4);
    return;
  }
  lVar7 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),
                   *(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
  *(longlong *)param_1 = ((lVar7 >> 0xf) - lVar8) + CONCAT44(param_5,param_4);
  return;
}

