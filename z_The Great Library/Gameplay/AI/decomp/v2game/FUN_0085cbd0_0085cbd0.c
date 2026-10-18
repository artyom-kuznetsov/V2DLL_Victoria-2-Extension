// FUN_0085cbd0 @ 0085cbd0 body=[[0085cbd0, 0085ccae]]


/* WARNING: Removing unreachable block (ram,0x0085cc9e) */

uint FUN_0085cbd0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  uint local_10;
  int iStack_c;
  
  uVar3 = *(uint *)(in_EAX + 0xc);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4);
  if ((*(char *)(iVar1 + 0x67c) == '\0') &&
     ((int)(*(int *)(iVar1 + 0xe90) - *(int *)(iVar1 + 0xe8c) & 0xfffffffcU) < 1)) {
    piVar4 = *(int **)(iVar1 + 0xea4);
    uVar3 = *(int *)(iVar1 + 0xea8) - (int)piVar4 >> 2;
    iStack_c = 0;
    if (0 < (int)uVar3) {
      local_10 = 0;
      uVar5 = uVar3;
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(*piVar4 + 0x20) * 4) + 0x38);
        uVar3 = 0;
        if (iVar2 != 0) {
          bVar6 = CARRY4(local_10,*(uint *)(iVar2 + 0x28));
          local_10 = local_10 + *(uint *)(iVar2 + 0x28);
          uVar3 = *(uint *)(iVar2 + 0x2c);
          iStack_c = iStack_c + uVar3 + (uint)bVar6;
        }
        piVar4 = piVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if ((-1 < iStack_c) && ((0 < iStack_c || (local_10 != 0)))) {
        lVar7 = __alldiv(*(uint *)(iVar1 + 0xe78) << 0xf,
                         *(int *)(iVar1 + 0xe7c) << 0xf | *(uint *)(iVar1 + 0xe78) >> 0x11,0x28000,0
                        );
        uVar3 = (uint)lVar7;
        if (lVar7 <= CONCAT44(iStack_c,local_10)) goto LAB_0085cbfb;
      }
    }
    return uVar3 & 0xffffff00;
  }
LAB_0085cbfb:
  return CONCAT31((int3)(uVar3 >> 8),1);
}

