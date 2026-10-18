// FUN_005cf2e0 @ 005cf2e0  (requested 005CF2E0, first bytes: 55 8B EC 83 E4 F8 83 EC)


undefined4 FUN_005cf2e0(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_EDI;
  int *local_18 [2];
  int iStack_10;
  
  if ((*(int *)(in_EAX + 0x110) == 0) ||
     (iVar1 = *(int *)(*(int *)(in_EAX + 0x110) + 0x10),
     (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
    puVar4 = (undefined4 *)(in_EAX + 0x130);
  }
  else {
    puVar4 = *(undefined4 **)(iVar1 + 0x34);
  }
  local_18[0] = (int *)*puVar4;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4);
  if (((unaff_EDI[0x31] != *(int *)(iVar1 + 0x20)) &&
      (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + unaff_EDI[0x31] * 4) + 0x34) != 0 ||
        ((((char)unaff_EDI[0x30] == 'R' && (*(char *)((int)unaff_EDI + 0xc1) == 'E')) &&
         (*(char *)((int)unaff_EDI + 0xc2) == 'B')))) ||
       (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
        (*(char *)(iVar1 + 0x1e) == 'B')))))) &&
     (piVar5 = (int *)(**(code **)(*unaff_EDI + 0x44))(local_18), *piVar5 < 1000)) {
    return 0;
  }
  piVar5 = *(int **)(in_EAX + 0xec);
  local_18[0] = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar5;
      piVar5 = (int *)piVar5[2];
      cVar3 = (**(code **)(*piVar2 + 0x3c))();
      if (cVar3 == '\0') {
        iStack_10 = piVar2[0x30];
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x31] * 4);
        if (((unaff_EDI[0x31] != *(int *)(iVar1 + 0x20)) &&
            ((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + unaff_EDI[0x31] * 4) + 0x34) != 0 ||
             (((((char)unaff_EDI[0x30] == 'R' && (*(char *)((int)unaff_EDI + 0xc1) == 'E')) &&
               (*(char *)((int)unaff_EDI + 0xc2) == 'B')) ||
              (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
               (*(char *)(iVar1 + 0x1e) == 'B')))))))) && ((char)piVar2[0x41] == '\0')) {
          local_18[0] = (int *)((int)local_18[0] + piVar2[0x10]);
        }
      }
    } while (piVar5 != (int *)0x0);
    if (0 < (int)local_18[0]) {
      return 0;
    }
  }
  return 1;
}

