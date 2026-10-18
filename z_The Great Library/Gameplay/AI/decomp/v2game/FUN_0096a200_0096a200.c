// FUN_0096a200 @ 0096a200 body=[[0096a200, 0096a2bb]]


uint * FUN_0096a200(uint *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_8;
  
  iVar4 = 0;
  uVar5 = 0;
  local_8 = 0;
  if (0 < DAT_01258a20) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + iVar4 * 4);
      if (0 < iVar1) {
        iVar2 = *(int *)(*(int *)(DAT_012587e8 + 0xc) + iVar4 * 4);
        uVar5 = uVar5 + iVar1;
        for (piVar3 = *(int **)(in_EAX + 0xe54); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
          if (*piVar3 == iVar2) goto LAB_0096a25a;
        }
        if (iVar2 != *(int *)(in_EAX + 0xe64)) {
          local_8 = local_8 + iVar1;
        }
      }
LAB_0096a25a:
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_01258a20);
    if (uVar5 != 0) {
      *param_1 = local_8 << 0xf;
      param_1[1] = ((int)local_8 >> 0x1f) << 0xf | local_8 >> 0x11;
      uVar6 = __alldiv(*param_1 << 0xf,param_1[1] << 0xf | *param_1 >> 0x11,uVar5 << 0xf,
                       ((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11);
      *(undefined8 *)param_1 = uVar6;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

