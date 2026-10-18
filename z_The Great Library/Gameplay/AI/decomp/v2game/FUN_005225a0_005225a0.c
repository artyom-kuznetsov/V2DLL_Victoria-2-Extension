// FUN_005225a0 @ 005225a0 body=[[005225a0, 00522726] [00522730, 0052281d]]


longlong * FUN_005225a0(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(DAT_012586dc + 0x10);
  uVar4 = *(uint *)(iVar1 + 0x28);
  iVar2 = *(int *)(*(int *)(in_EAX + 0xa60) + 0x3c0);
  uVar3 = iVar2 + 1000;
  uVar6 = __alldiv(iVar2 * 0x40000000,
                   (((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2,
                   0x1f40000,0);
  uVar7 = __alldiv(uVar4 << 0x1e,
                   (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2,
                   0x1f40000,0);
  lVar8 = __allmul(uVar7,uVar6);
  if ((*(int *)(DAT_012588e8 + 0xb0c) <
       *(int *)(in_EAX + 0xe9c) + (*(int *)(iVar1 + 8) / 1000) * 0x2238) &&
     (*(int *)(in_EAX + 0x20) != param_3)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return param_1;
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
    iVar2 = *(int *)(*(int *)(iVar1 + 0xa60) + 0x3c0);
    uVar4 = iVar2 + 1000;
    uVar6 = __alldiv(iVar2 * 0x40000000,
                     (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2,
                     0x1f40000,0);
    iVar1 = *(int *)(iVar1 + 0xe88);
    lVar9 = __allmul(*(uint *)(iVar1 + 0x10) - *(uint *)(iVar1 + 0x18),
                     (*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x1c)) -
                     (uint)(*(uint *)(iVar1 + 0x10) < *(uint *)(iVar1 + 0x18)),uVar6);
    lVar9 = lVar9 >> 0xf;
    lVar8 = __allmul(*(undefined4 *)(in_EAX + 0x1560),*(undefined4 *)(in_EAX + 0x1564),lVar8 >> 0xf)
    ;
    if (param_3 == *(int *)(in_EAX + 0x20)) {
      *param_1 = lVar9;
      return param_1;
    }
    piVar5 = *(int **)(in_EAX + 0xe8c);
    while ((*(int **)(in_EAX + 0xe8c) <= piVar5 && (piVar5 < *(int **)(in_EAX + 0xe90)))) {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      if (*(int *)(iVar1 + 0xc) == param_3) {
        FUN_0048bfc0((lVar8 >> 0xf) - *(longlong *)(iVar1 + 0x18),lVar9);
        return param_1;
      }
    }
    FUN_0048bfc0(lVar9,lVar8 >> 0xf);
    return param_1;
  }
  uVar4 = *(uint *)(iVar1 + 0x10);
  lVar8 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
  piVar5 = *(int **)(in_EAX + 0xe8c);
  do {
    if ((piVar5 < *(int **)(in_EAX + 0xe8c)) || (*(int **)(in_EAX + 0xe90) <= piVar5))
    goto LAB_0052280d;
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
  } while (*(int *)(iVar1 + 0xc) != 0);
  lVar8 = CONCAT44(((int)((ulonglong)lVar8 >> 0x20) - *(int *)(iVar1 + 0x1c)) -
                   (uint)((uint)lVar8 < *(uint *)(iVar1 + 0x18)),
                   (uint)lVar8 - *(uint *)(iVar1 + 0x18));
LAB_0052280d:
  *param_1 = lVar8;
  return param_1;
}

