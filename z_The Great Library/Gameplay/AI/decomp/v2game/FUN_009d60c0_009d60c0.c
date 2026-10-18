// FUN_009d60c0 @ 009d60c0 body=[[009d60c0, 009d6283] [009d6287, 009d62a9]]


short FUN_009d60c0(short param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  void *_Src;
  uint uVar5;
  void *_Dst;
  int in_ECX;
  uint uVar6;
  
  if ((*(byte *)(in_ECX + 0x40) & 8) != 0) {
    uVar6 = **(uint **)(in_ECX + 0x24);
    if ((uVar6 != 0) && (uVar5 = *(uint *)(in_ECX + 0x3c), uVar6 < uVar5)) {
      iVar2 = **(int **)(in_ECX + 0x34);
      **(uint **)(in_ECX + 0x24) = uVar5;
      **(int **)(in_ECX + 0x34) = (int)((uVar6 + iVar2 * 2) - uVar5) >> 1;
    }
  }
  if (param_1 == -1) {
    return 0;
  }
  uVar6 = **(uint **)(in_ECX + 0x24);
  if ((uVar6 != 0) && (piVar3 = *(int **)(in_ECX + 0x34), uVar6 < uVar6 + *piVar3 * 2)) {
    *piVar3 = *piVar3 + -1;
    psVar4 = (short *)**(int **)(in_ECX + 0x24);
    **(int **)(in_ECX + 0x24) = (int)(psVar4 + 1);
    *psVar4 = param_1;
    return param_1;
  }
  if ((*(byte *)(in_ECX + 0x40) & 2) != 0) {
    return -1;
  }
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (int)((**(int **)(in_ECX + 0x34) * 2 - **(int **)(in_ECX + 0x10)) + uVar6) >> 1;
  }
  uVar5 = uVar6 >> 1;
  if (uVar5 < 0x20) {
    uVar5 = 0x20;
  }
  else if (uVar5 == 0) {
    return -1;
  }
  do {
    if (uVar6 <= 0x7fffffff - uVar5) break;
    uVar5 = uVar5 >> 1;
  } while (uVar5 != 0);
  if (uVar5 == 0) {
    return -1;
  }
  _Dst = (void *)FUN_0098a700();
  _Src = (void *)**(undefined4 **)(in_ECX + 0x10);
  if ((uVar6 == 0) || (FID_conflict__memcpy(_Dst,_Src,uVar6 * 2), uVar6 == 0)) {
    *(void **)(in_ECX + 0x3c) = _Dst;
    **(undefined4 **)(in_ECX + 0x14) = _Dst;
    **(undefined4 **)(in_ECX + 0x24) = _Dst;
    **(int **)(in_ECX + 0x34) = (int)((uVar5 + uVar6) * 2) >> 1;
    if ((*(byte *)(in_ECX + 0x40) & 4) == 0) {
      **(undefined4 **)(in_ECX + 0x10) = _Dst;
      **(undefined4 **)(in_ECX + 0x20) = _Dst;
      **(undefined4 **)(in_ECX + 0x30) = 1;
      goto LAB_009d6278;
    }
  }
  else {
    *(void **)(in_ECX + 0x3c) = (void *)((int)_Dst + (*(int *)(in_ECX + 0x3c) - (int)_Src >> 1) * 2)
    ;
    iVar2 = **(int **)(in_ECX + 0x24);
    **(int **)(in_ECX + 0x14) = (int)((int)_Dst + (**(int **)(in_ECX + 0x14) - (int)_Src >> 1) * 2);
    pvVar1 = (void *)((int)_Dst + (iVar2 - (int)_Src >> 1) * 2);
    **(int **)(in_ECX + 0x24) = (int)pvVar1;
    **(int **)(in_ECX + 0x34) = (int)(((uVar5 + uVar6) * 2 - (int)pvVar1) + (int)_Dst) >> 1;
    if ((*(byte *)(in_ECX + 0x40) & 4) == 0) {
      iVar2 = **(int **)(in_ECX + 0x24);
      pvVar1 = (void *)((int)_Dst + (**(int **)(in_ECX + 0x20) - (int)_Src >> 1) * 2);
      **(undefined4 **)(in_ECX + 0x10) = _Dst;
      **(int **)(in_ECX + 0x20) = (int)pvVar1;
      **(int **)(in_ECX + 0x30) = (iVar2 - (int)pvVar1) + 2 >> 1;
      goto LAB_009d6278;
    }
  }
  **(undefined4 **)(in_ECX + 0x10) = _Dst;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(int **)(in_ECX + 0x30) = (int)_Dst >> 1;
LAB_009d6278:
  if ((*(byte *)(in_ECX + 0x40) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(_Src);
  }
  *(uint *)(in_ECX + 0x40) = *(uint *)(in_ECX + 0x40) | 1;
  **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) + -1;
  psVar4 = (short *)**(int **)(in_ECX + 0x24);
  **(int **)(in_ECX + 0x24) = (int)(psVar4 + 1);
  *psVar4 = param_1;
  return param_1;
}

