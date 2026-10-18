// FUN_0043fea0 @ 0043fea0 body=[[0043fea0, 0043fff9] [00440000, 00440051] [00440055, 00440066]]


void FUN_0043fea0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  int *piStack_34;
  int local_30;
  int local_2c;
  int **local_28;
  int **local_24;
  int **local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  iVar4 = *(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94) >> 2;
  if (0 < iVar4) {
    local_28 = (int **)0x0;
    local_24 = (int **)0x0;
    local_20 = (int **)0x0;
    local_c = 0;
    ExceptionList = &local_14;
    local_2c = in_ECX;
    FUN_004bf300(iVar4);
    local_30 = 0;
    ppiVar5 = local_24;
    if (0 < iVar4) {
      do {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x94) + local_30 * 4);
        cVar3 = (**(code **)(*piVar1 + 8))();
        if ((cVar3 != '\0') &&
           ((((char)piVar1[0x32] != 'R' || (*(char *)((int)piVar1 + 0xc9) != 'E')) ||
            (*(char *)((int)piVar1 + 0xca) != 'B')))) {
          piStack_34 = piVar1;
          if ((&piStack_34 < ppiVar5) && (local_28 <= &piStack_34)) {
            iVar6 = (int)&piStack_34 - (int)local_28;
            if (ppiVar5 == local_20) {
              FUN_00a513f0();
              ppiVar5 = local_24;
            }
            if (ppiVar5 != (int **)0x0) {
              *ppiVar5 = local_28[iVar6 >> 2];
            }
          }
          else {
            if (ppiVar5 == local_20) {
              FUN_00a513f0();
              ppiVar5 = local_24;
            }
            if (ppiVar5 != (int **)0x0) {
              *ppiVar5 = piVar1;
            }
          }
          ppiVar5 = ppiVar5 + 1;
          local_24 = ppiVar5;
        }
        local_30 = local_30 + 1;
        in_ECX = local_2c;
      } while (local_30 < iVar4);
    }
    iVar4 = (int)ppiVar5 - (int)local_28 >> 2;
    if (0 < iVar4) {
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      cVar3 = (**(code **)(*(int *)piVar1[7] + 0x28))();
      if (cVar3 == '\0') {
        (**(code **)(*piVar1 + 0xa4))(0);
      }
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          piVar2 = local_28[iVar6];
          if ((char)piVar2[1] == '\0') {
            cVar3 = (**(code **)(*piVar1 + 0x94))(piVar2);
            if (cVar3 != '\0') {
              (**(code **)(*piVar1 + 0x88))(local_28[iVar6]);
            }
          }
          else {
            (**(code **)(*piVar1 + 0xa0))(piVar2,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
    }
    if (local_28 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
  }
  ExceptionList = local_14;
  return;
}

