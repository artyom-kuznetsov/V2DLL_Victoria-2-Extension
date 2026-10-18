// FUN_004bc020 @ 004bc020 body=[[004bc020, 004bc0ec]]


uint FUN_004bc020(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int *piVar4;
  int iVar5;
  int local_c;
  
  piVar4 = *(int **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  piVar1 = (int *)piVar4[0x28e];
  do {
    do {
      piVar3 = piVar1;
      if (piVar3 == (int *)0x0) {
        return (uint)piVar4 & 0xffffff00;
      }
      iVar5 = *piVar3;
      piVar1 = (int *)piVar3[2];
      piVar4 = piVar3;
    } while (((*(char *)(iVar5 + 0x170) != '\0') ||
             (*(int *)(iVar5 + 0x134) != *(int *)(iVar5 + 300))) ||
            (piVar4 = (int *)FUN_00456700(), local_c < 1));
    iVar5 = *(int *)(*(int *)(iVar5 + 0x118) + DAT_01258720 * 4);
    iVar2 = *(int *)(*(int *)(iVar5 + 0x18) + 0xdc);
    if (iVar2 < 1) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar5 = __alldiv((longlong)*(int *)(iVar5 + 0x24) * (longlong)iVar2,1000,0);
      piVar4 = (int *)(iVar5 + 100000);
    }
  } while ((int)piVar4 < local_c);
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

