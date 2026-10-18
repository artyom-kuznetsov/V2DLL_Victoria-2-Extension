// FUN_0086c050 @ 0086c050 body=[[0086c050, 0086c1cd] [0086c1d1, 0086c1f1]]


int FUN_0086c050(int param_1)

{
  int *piVar1;
  void *_Src;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  if ((*(byte *)(in_ECX + 0x40) & 8) != 0) {
    uVar6 = **(uint **)(in_ECX + 0x24);
    if ((uVar6 != 0) && (uVar3 = *(uint *)(in_ECX + 0x3c), uVar6 < uVar3)) {
      iVar4 = **(int **)(in_ECX + 0x34);
      **(uint **)(in_ECX + 0x24) = uVar3;
      **(int **)(in_ECX + 0x34) = (iVar4 + uVar6) - uVar3;
    }
  }
  if (param_1 == -1) {
    return 0;
  }
  uVar6 = **(uint **)(in_ECX + 0x24);
  if ((uVar6 != 0) && (piVar1 = *(int **)(in_ECX + 0x34), uVar6 < *piVar1 + uVar6)) {
    *piVar1 = *piVar1 + -1;
    goto LAB_0086c1dd;
  }
  if ((*(byte *)(in_ECX + 0x40) & 2) != 0) {
    return -1;
  }
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(int **)(in_ECX + 0x34) - **(int **)(in_ECX + 0x10)) + uVar6;
  }
  uVar3 = uVar6 >> 1;
  if (uVar3 < 0x20) {
    uVar3 = 0x20;
  }
  else if (uVar3 == 0) {
    return -1;
  }
  do {
    if (uVar6 <= 0x7fffffff - uVar3) break;
    uVar3 = uVar3 >> 1;
  } while (uVar3 != 0);
  if (uVar3 == 0) {
    return -1;
  }
  iVar4 = uVar3 + uVar6;
  _Dst = (void *)FUN_00408fd0(iVar4);
  _Src = (void *)**(undefined4 **)(in_ECX + 0x10);
  if ((uVar6 == 0) || (FID_conflict__memcpy(_Dst,_Src,uVar6), uVar6 == 0)) {
    *(void **)(in_ECX + 0x3c) = _Dst;
    **(undefined4 **)(in_ECX + 0x14) = _Dst;
    **(undefined4 **)(in_ECX + 0x24) = _Dst;
    **(int **)(in_ECX + 0x34) = iVar4;
    if ((*(byte *)(in_ECX + 0x40) & 4) != 0) goto LAB_0086c18d;
    **(undefined4 **)(in_ECX + 0x10) = _Dst;
    **(undefined4 **)(in_ECX + 0x20) = _Dst;
    **(undefined4 **)(in_ECX + 0x30) = 1;
  }
  else {
    *(int *)(in_ECX + 0x3c) = (int)_Dst + (*(int *)(in_ECX + 0x3c) - (int)_Src);
    iVar5 = **(int **)(in_ECX + 0x24);
    **(int **)(in_ECX + 0x14) = (int)_Dst + (**(int **)(in_ECX + 0x14) - (int)_Src);
    iVar5 = (iVar5 - (int)_Src) + (int)_Dst;
    **(int **)(in_ECX + 0x24) = iVar5;
    **(int **)(in_ECX + 0x34) = (int)_Dst + (iVar4 - iVar5);
    if ((*(byte *)(in_ECX + 0x40) & 4) == 0) {
      iVar4 = **(int **)(in_ECX + 0x24);
      iVar5 = (**(int **)(in_ECX + 0x20) - (int)_Src) + (int)_Dst;
      **(undefined4 **)(in_ECX + 0x10) = _Dst;
      **(int **)(in_ECX + 0x20) = iVar5;
      **(int **)(in_ECX + 0x30) = (iVar4 - iVar5) + 1;
    }
    else {
LAB_0086c18d:
      **(undefined4 **)(in_ECX + 0x10) = _Dst;
      **(undefined4 **)(in_ECX + 0x20) = 0;
      **(undefined4 **)(in_ECX + 0x30) = _Dst;
    }
  }
  if ((*(byte *)(in_ECX + 0x40) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(_Src);
  }
  *(uint *)(in_ECX + 0x40) = *(uint *)(in_ECX + 0x40) | 1;
  **(int **)(in_ECX + 0x34) = **(int **)(in_ECX + 0x34) + -1;
LAB_0086c1dd:
  puVar2 = (undefined1 *)**(int **)(in_ECX + 0x24);
  **(int **)(in_ECX + 0x24) = (int)(puVar2 + 1);
  *puVar2 = (char)param_1;
  return param_1;
}

