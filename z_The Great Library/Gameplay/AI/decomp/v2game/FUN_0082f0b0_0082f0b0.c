// FUN_0082f0b0 @ 0082f0b0 body=[[0082f0b0, 0082f292]]


/* WARNING: Removing unreachable block (ram,0x0082f0cf) */
/* WARNING: Removing unreachable block (ram,0x0082f1c9) */

void FUN_0082f0b0(uint *param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int unaff_ESI;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 0x20);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x24);
  lVar6 = *(longlong *)(unaff_ESI + 0x20);
  lVar5 = FUN_00b31c36();
  if (lVar6 < lVar5) {
    *param_1 = param_4;
    param_1[1] = param_5;
    return;
  }
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    local_18._0_4_ = param_4;
    local_18._4_4_ = param_5;
    local_10._0_4_ = param_2;
    local_10._4_4_ = param_3;
    if (((int)param_5 < param_3) || (((int)param_5 <= param_3 && (param_4 <= param_2)))) {
      puVar3 = &local_18;
    }
    else {
      puVar3 = &local_10;
    }
    uVar1 = *(undefined4 *)puVar3;
    local_18._4_4_ = *(undefined4 *)((int)puVar3 + 4);
    lVar6 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),uVar2,*(undefined4 *)(unaff_ESI + 8),
                     *(undefined4 *)(unaff_ESI + 0xc));
    lVar6 = lVar6 >> 0xf;
    lVar5 = lVar6 + CONCAT44(local_18._4_4_,uVar1);
  }
  else {
    lVar6 = __allmul(uVar1,uVar2,*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
    lVar6 = lVar6 >> 0xf;
    lVar5 = lVar6 + CONCAT44(param_3,param_2);
  }
  local_10._0_4_ = *(uint *)(unaff_ESI + 0x10);
  local_10._4_4_ = *(int *)(unaff_ESI + 0x14);
  local_18._0_4_ = param_6;
  local_18._4_4_ = param_7;
  if ((param_7 < local_10._4_4_) ||
     ((param_7 <= local_10._4_4_ && (param_6 <= *(uint *)(unaff_ESI + 0x10))))) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = &local_10;
  }
  local_10 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),
                      *(undefined4 *)puVar3,*(undefined4 *)((int)puVar3 + 4));
  local_10 = local_10 >> 0xf;
  local_18 = lVar5;
  if (lVar5 < local_10) {
    puVar4 = (uint *)&local_18;
  }
  else {
    puVar4 = (uint *)&local_10;
  }
  uVar7 = __alldiv(*puVar4 << 0xf,puVar4[1] << 0xf | *puVar4 >> 0x11,
                   *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  FUN_0082ec40(uVar7);
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    lVar5 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),
                     *(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
    *(longlong *)param_1 = (lVar6 - (lVar5 >> 0xf)) + CONCAT44(param_5,param_4);
    return;
  }
  lVar5 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24),
                   *(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
  *(longlong *)param_1 = ((lVar5 >> 0xf) - lVar6) + CONCAT44(param_5,param_4);
  return;
}

