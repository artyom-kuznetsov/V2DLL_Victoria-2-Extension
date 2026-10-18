// FUN_005cc200 @ 005cc200 body=[[005cc200, 005cc2d9]]


uint FUN_005cc200(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = *(uint *)(param_1 + 0xd4);
  if ((uVar2 == 0) || (*(uint *)(unaff_ESI + 0x134) != uVar2)) {
    if ((*(char *)(unaff_ESI + 0x130) == 'R') &&
       ((*(char *)(unaff_ESI + 0x131) == 'E' && (*(char *)(unaff_ESI + 0x132) == 'B')))) {
      iVar1 = FUN_0068bb30(unaff_ESI);
      if (iVar1 != 0) {
        iVar1 = FUN_004e18f0(iVar1);
        uVar2 = *(uint *)(iVar1 + 4);
        if (uVar2 == *(uint *)(param_1 + 0xc4)) goto LAB_005cc2d0;
      }
    }
    uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc4) * 4);
    if ((*(int *)(unaff_ESI + 0x134) != *(int *)(uVar2 + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(uVar2 + 0xbe8) + *(int *)(unaff_ESI + 0x134) * 4) + 0x34) != 0
         || (((*(char *)(unaff_ESI + 0x130) == 'R' && (*(char *)(unaff_ESI + 0x131) == 'E')) &&
             (*(char *)(unaff_ESI + 0x132) == 'B')))) ||
        (((*(char *)(uVar2 + 0x1c) == 'R' && (*(char *)(uVar2 + 0x1d) == 'E')) &&
         (*(char *)(uVar2 + 0x1e) == 'B')))))) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_005cc2d0:
  return uVar2 & 0xffffff00;
}

