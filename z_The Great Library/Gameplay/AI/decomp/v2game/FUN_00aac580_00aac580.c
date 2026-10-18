// FUN_00aac580 @ 00aac580 body=[[00aac580, 00aac6eb]]


void FUN_00aac580(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = param_1[1];
  piVar6 = *(int **)(iVar10 + 0x3c);
  piVar9 = (int *)*piVar6;
  if (piVar9 != piVar6) {
    do {
      piVar6 = (int *)FUN_00aaaf60(piVar9 + 3);
      *piVar6 = piVar9[4];
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar6 = (int *)piVar9[2];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x15);
          piVar9 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x15);
            piVar9 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar5 = (int *)piVar9[1];
          piVar6 = piVar9;
          while ((piVar9 = piVar5, cVar1 == '\0' && (piVar6 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar5 = (int *)piVar9[1];
            piVar6 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(iVar10 + 0x3c));
  }
  puVar2 = *(undefined4 **)(in_ECX + 8);
  if ((param_1 < puVar2) && (puVar3 = *(undefined4 **)(in_ECX + 4), puVar3 <= param_1)) {
    iVar10 = (int)param_1 - (int)puVar3 >> 3;
    if (puVar2 == *(undefined4 **)(in_ECX + 0xc)) {
      uVar7 = (int)puVar2 - (int)puVar3 >> 3;
      if (0x1ffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar7 = uVar7 + 1;
      uVar8 = (int)*(undefined4 **)(in_ECX + 0xc) - (int)puVar3 >> 3;
      if (uVar8 < uVar7) {
        if (0x1fffffff - (uVar8 >> 1) < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + (uVar8 >> 1);
        }
        if (uVar8 < uVar7) {
          uVar8 = uVar7;
        }
        FUN_00aabda0(uVar8);
      }
    }
    puVar2 = *(undefined4 **)(in_ECX + 8);
    if (puVar2 != (undefined4 *)0x0) {
      iVar4 = *(int *)(in_ECX + 4);
      *puVar2 = *(undefined4 *)(iVar4 + iVar10 * 8);
      puVar2[1] = *(undefined4 *)(iVar4 + 4 + iVar10 * 8);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 8;
      return;
    }
  }
  else {
    if (puVar2 == *(undefined4 **)(in_ECX + 0xc)) {
      uVar7 = (int)puVar2 - *(int *)(in_ECX + 4) >> 3;
      if (0x1ffffffe < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar7 = uVar7 + 1;
      uVar8 = (int)*(undefined4 **)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 3;
      if (uVar8 < uVar7) {
        if (0x1fffffff - (uVar8 >> 1) < uVar8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 + (uVar8 >> 1);
        }
        if (uVar8 < uVar7) {
          uVar8 = uVar7;
        }
        FUN_00aabda0(uVar8);
      }
    }
    puVar2 = *(undefined4 **)(in_ECX + 8);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
    }
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 8;
  return;
}

