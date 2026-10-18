// FUN_00a63190 @ 00a63190 body=[[00a63190, 00a631aa] [00a631b0, 00a63242]]


/* WARNING: Removing unreachable block (ram,0x00a631e3) */

int * FUN_00a63190(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  
  piVar5 = *(int **)(in_ECX + 0x54);
  piVar6 = (int *)*piVar5;
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *(int *)(in_ECX + 0x1c);
      iVar4 = *piVar6;
      piVar6 = (int *)piVar6[2];
      uVar2 = *(uint *)(iVar4 + 0x18);
      uVar3 = uVar2;
      if (*(uint *)(iVar1 + 0xcc) <= uVar2) {
        uVar3 = *(uint *)(iVar1 + 0xcc);
      }
      iVar4 = FUN_00414bd0(uVar3);
      if (((iVar4 != 0) || (uVar2 < *(uint *)(iVar1 + 0xcc))) || (uVar2 != *(uint *)(iVar1 + 0xcc)))
      {
        FUN_00408ed0(iVar1 + 0xbc,0,0xffffffff);
      }
    } while (piVar6 != (int *)0x0);
    piVar5 = *(int **)(in_ECX + 0x54);
  }
  return piVar5;
}

