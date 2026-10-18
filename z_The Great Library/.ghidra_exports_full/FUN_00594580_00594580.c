// FUN_00594580 @ 00594580 body=[[00594580, 00594670]]


/* WARNING: Removing unreachable block (ram,0x005945ba) */
/* WARNING: Removing unreachable block (ram,0x005945c0) */

void FUN_00594580(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uVar5;
  int iVar6;
  
  for (piVar1 = *(int **)(in_ECX + 0x20); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if (*(int *)(in_ECX + 0x34) != *(int *)(in_ECX + 0x38)) {
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x34);
  }
  piVar1 = *(int **)(in_ECX + 0x20);
joined_r0x005945db:
  if (piVar1 == (int *)0x0) {
    return;
  }
  puVar4 = *(undefined4 **)(in_ECX + 0x38);
  puVar3 = *(undefined4 **)(in_ECX + 0x34);
  iVar6 = *piVar1;
  piVar1 = (int *)piVar1[2];
  if (puVar3 != puVar4) goto code_r0x005945f0;
  goto LAB_00594606;
code_r0x005945f0:
  do {
    if (puVar3[1] == *(int *)(iVar6 + 0xc4)) break;
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar4);
  if (puVar3 != puVar4) goto joined_r0x005945db;
LAB_00594606:
  puVar3 = (undefined4 *)(iVar6 + 0xc0);
  if ((puVar3 < puVar4) && (*(undefined4 **)(in_ECX + 0x34) <= puVar3)) {
    iVar6 = (int)puVar3 - (int)*(undefined4 **)(in_ECX + 0x34) >> 3;
    if (puVar4 == *(undefined4 **)(in_ECX + 0x3c)) {
      FUN_00810820();
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x38);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0059465e;
    iVar2 = *(int *)(in_ECX + 0x34);
    *puVar4 = *(undefined4 *)(iVar2 + iVar6 * 8);
    uVar5 = *(undefined4 *)(iVar2 + 4 + iVar6 * 8);
  }
  else {
    if (puVar4 == *(undefined4 **)(in_ECX + 0x3c)) {
      FUN_00810820();
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x38);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0059465e;
    *puVar4 = *puVar3;
    uVar5 = *(undefined4 *)(iVar6 + 0xc4);
  }
  puVar4[1] = uVar5;
LAB_0059465e:
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 8;
  goto joined_r0x005945db;
}

