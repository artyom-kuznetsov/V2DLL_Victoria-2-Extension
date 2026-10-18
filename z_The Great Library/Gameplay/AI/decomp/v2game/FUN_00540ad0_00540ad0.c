// FUN_00540ad0 @ 00540ad0 body=[[00540ad0, 00540bcc] [00540bd0, 00540c15]]


int FUN_00540ad0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  uint local_8;
  
  *param_2 = 0;
  piVar6 = *(int **)(in_EAX + 0x149c);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = *piVar6;
    piVar6 = (int *)piVar6[2];
    iVar3 = 0;
    piVar5 = (int *)(iVar1 + 0x98);
    do {
      if (*piVar5 == *(int *)(in_EAX + 0x20)) {
        if (0 < *(int *)(iVar1 + 0x9c + iVar3 * 0x1c)) {
          bVar8 = *(int *)(iVar1 + 0x98) != 0;
          local_8 = (uint)bVar8;
          if (*(int *)(iVar1 + 0xb4) != 0) {
            local_8 = bVar8 + 1;
          }
          if (*(int *)(iVar1 + 0xd0) != 0) {
            local_8 = local_8 + 1;
          }
          if (*(int *)(iVar1 + 0xec) != 0) {
            local_8 = local_8 + 1;
          }
          if (local_8 < 2) {
            return 0;
          }
          iVar3 = 0;
          if (local_8 == 0) {
            return 0;
          }
          iVar2 = *(int *)(param_1 + 4);
          iVar7 = iVar1 + 0x94;
          while ((*(int *)(iVar7 + 4) != iVar2 || (iVar4 = FUN_004cb1d0(), iVar4 < 1))) {
            iVar3 = iVar3 + 1;
            iVar7 = iVar7 + 0x1c;
            if ((int)local_8 <= iVar3) {
              return 0;
            }
          }
          piVar6 = *(int **)(iVar1 + 8);
          if (piVar6 != (int *)0x0) {
            do {
              piVar5 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4) + 0xec);
              piVar6 = (int *)piVar6[2];
              while (piVar5 != (int *)0x0) {
                iVar3 = *piVar5;
                piVar5 = (int *)piVar5[2];
                if (*(int *)(iVar3 + 0xcc) == iVar2) {
                  *param_2 = 1;
                  return iVar1;
                }
              }
            } while (piVar6 != (int *)0x0);
            return iVar1;
          }
          return iVar1;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 7;
    } while (iVar3 < 4);
    if (piVar6 == (int *)0x0) {
      return 0;
    }
  } while( true );
}

