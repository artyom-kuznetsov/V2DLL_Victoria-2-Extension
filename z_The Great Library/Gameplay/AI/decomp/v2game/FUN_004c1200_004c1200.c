// FUN_004c1200 @ 004c1200 body=[[004c1200, 004c1370]]


/* WARNING: Removing unreachable block (ram,0x004c1269) */

void FUN_004c1200(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  *(uint *)(param_1 + 0x80) = param_2;
  *(uint *)(param_1 + 0x84) = param_3;
  if (((int)param_3 < 0) || (((int)param_3 < 1 && (param_2 == 0)))) {
    return;
  }
  FUN_004ef1b0();
  local_10 = param_2;
  local_c = param_3;
  lVar10 = __allmul(local_20,local_1c,param_4,param_5);
  lVar10 = lVar10 >> 0xf;
  local_18 = (uint)lVar10;
  local_14 = (int)((ulonglong)lVar10 >> 0x20);
  if (lVar10 < CONCAT44(param_3,param_2)) {
    puVar3 = &local_18;
  }
  else {
    puVar3 = &local_10;
  }
  uVar6 = *puVar3;
  uVar1 = puVar3[1];
  local_14 = param_3;
  lVar10 = __allmul(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),param_2,param_3)
  ;
  uVar4 = (uint)(lVar10 >> 0xf);
  local_c = param_1 + 0x10;
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 == 0) {
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0x188);
  }
  uVar8 = param_2;
  if (*(int *)(*(int *)(iVar9 + 0x118) + *(int *)(*(int *)(*(int *)(param_1 + 8) + 0xf0) + 0x28) * 4
              ) != 0) {
    uVar7 = param_2 - uVar4;
    uVar4 = (param_3 - (int)((ulonglong)(lVar10 >> 0xf) >> 0x20)) - (uint)(param_2 < uVar4);
    uVar8 = uVar6;
    local_14 = uVar1;
    if (((int)uVar1 <= (int)uVar4) && (((int)uVar1 < (int)uVar4 || (uVar6 < uVar7)))) {
      uVar8 = uVar7;
      local_14 = uVar4;
    }
  }
  uVar6 = param_2 - uVar8;
  iVar9 = (param_3 - local_14) - (uint)(param_2 < uVar8);
  if ((-1 < iVar9) &&
     ((iVar9 != 0 &&
       SBORROW4(param_3,local_14) == SBORROW4(param_3 - local_14,(uint)(param_2 < uVar8)) ||
      (uVar6 != 0)))) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x188);
    }
    cVar2 = FUN_004cfe20(iVar5,uVar6,iVar9);
    if (cVar2 == '\0') {
      FUN_004ef240(local_c,uVar6 + uVar8,iVar9 + local_14 + (uint)CARRY4(uVar6,uVar8));
      return;
    }
  }
  FUN_004ef240(local_c,uVar8,local_14);
  return;
}

