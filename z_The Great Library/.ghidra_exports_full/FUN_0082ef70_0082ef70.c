// FUN_0082ef70 @ 0082ef70 body=[[0082ef70, 0082f0a6]]


/* WARNING: Removing unreachable block (ram,0x0082ef8f) */

void FUN_0082ef70(longlong *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_ESI;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_28;
  uint local_24;
  uint local_18;
  int local_14;
  uint local_10;
  undefined8 *local_c;
  
  uVar1 = *(uint *)(unaff_ESI + 0x20);
  iVar2 = *(int *)(unaff_ESI + 0x24);
  lVar7 = *(longlong *)(unaff_ESI + 0x20);
  local_24 = 0x82ef89;
  lVar6 = FUN_00b31c36();
  if (lVar7 < lVar6) {
    *(undefined4 *)param_1 = param_4;
    *(undefined4 *)((int)param_1 + 4) = param_5;
    return;
  }
  local_10 = param_2;
  local_18 = uVar1;
  local_14 = iVar2;
  local_c = (undefined8 *)param_3;
  if ((iVar2 < param_3) || ((iVar2 <= param_3 && (uVar1 <= param_2)))) {
    puVar5 = &local_18;
  }
  else {
    puVar5 = &local_10;
  }
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  local_28 = uVar1;
  local_24 = iVar2;
  lVar7 = __allmul(*(undefined4 *)(unaff_ESI + 8),*(undefined4 *)(unaff_ESI + 0xc));
  local_c = (undefined8 *)&local_28;
  local_28 = uVar3;
  local_24 = uVar4;
  uVar8 = __alldiv(uVar3 << 0xf,uVar4 << 0xf | uVar3 >> 0x11,*(undefined4 *)(unaff_ESI + 0x20),
                   *(undefined4 *)(unaff_ESI + 0x24));
  *local_c = uVar8;
  FUN_0082ec40();
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    local_24 = *(undefined4 *)(unaff_ESI + 0xc);
    local_28 = *(uint *)(unaff_ESI + 8);
    lVar6 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
    *param_1 = ((lVar7 >> 0xf) - (lVar6 >> 0xf)) + CONCAT44(param_5,param_4);
    return;
  }
  local_24 = *(undefined4 *)(unaff_ESI + 0xc);
  local_28 = *(uint *)(unaff_ESI + 8);
  lVar6 = __allmul(*(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  *param_1 = ((lVar6 >> 0xf) - (lVar7 >> 0xf)) + CONCAT44(param_5,param_4);
  return;
}

