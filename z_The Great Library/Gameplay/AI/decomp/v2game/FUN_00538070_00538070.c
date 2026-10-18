// FUN_00538070 @ 00538070 body=[[00538070, 00538149]]


/* WARNING: Removing unreachable block (ram,0x005380c9) */
/* WARNING: Removing unreachable block (ram,0x00538126) */

void FUN_00538070(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  longlong *plVar4;
  int unaff_ESI;
  longlong lVar5;
  longlong local_14;
  uint local_c;
  undefined4 local_8;
  
  *(undefined4 *)(unaff_ESI + 0x1440) = param_1;
  *(undefined4 *)(unaff_ESI + 0x1444) = param_2;
  uVar1 = *(uint *)(*(int *)(unaff_ESI + 0xa60) + 0xe8);
  local_14 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  local_c = *(uint *)(unaff_ESI + 0x1440);
  local_8 = *(undefined4 *)(unaff_ESI + 0x1444);
  if (local_14 < *(longlong *)(unaff_ESI + 0x1440)) {
    puVar3 = &local_c;
  }
  else {
    puVar3 = (uint *)&local_14;
  }
  uVar1 = *puVar3;
  *(uint *)(unaff_ESI + 0x1444) = puVar3[1];
  *(uint *)(unaff_ESI + 0x1440) = uVar1;
  uVar1 = *(uint *)(*(int *)(unaff_ESI + 0xa60) + 0xf0);
  lVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  local_14 = lVar5;
  if (*(longlong *)(unaff_ESI + 0x1440) < lVar5) {
    plVar4 = (longlong *)&param_1;
  }
  else {
    plVar4 = &local_14;
  }
  uVar2 = *(undefined4 *)((int)plVar4 + 4);
  *(int *)(unaff_ESI + 0x1440) = (int)*plVar4;
  *(undefined4 *)(unaff_ESI + 0x1444) = uVar2;
  return;
}

