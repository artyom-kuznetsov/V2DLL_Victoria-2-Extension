// FUN_00501e10 @ 00501e10 body=[[00501e10, 00501ec7] [00501ed1, 00501fb8] [00501fc2, 0050208d]]


void FUN_00501e10(char param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int unaff_ESI;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  int local_c;
  int *local_8;
  
  uVar3 = FUN_009b7950(0x1e,0);
  FUN_008a8650(uVar3);
  local_54 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_50 = *(undefined4 *)(unaff_ESI + 0x20);
  piVar5 = *(int **)(unaff_ESI + 0x518);
  while (piVar5 != (int *)0x0) {
    local_8 = (int *)piVar5[2];
    iVar1 = *piVar5;
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x54) + 0x18))(local_5c);
    piVar5 = local_8;
    if (cVar2 != '\0') {
      for (piVar5 = *(int **)(unaff_ESI + 0x518); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        if (*piVar5 == iVar1) {
          if (piVar5 != (int *)0x0) {
            if (*(char *)(unaff_ESI + 0x524) == '\0') {
              iVar1 = piVar5[1];
              iVar6 = piVar5[2];
              if (iVar1 != 0) {
                *(int *)(iVar1 + 8) = iVar6;
              }
              if (iVar6 != 0) {
                *(int *)(iVar6 + 4) = iVar1;
              }
              if (piVar5 == *(int **)(unaff_ESI + 0x518)) {
                *(int *)(unaff_ESI + 0x518) = iVar6;
              }
              if (piVar5 == *(int **)(unaff_ESI + 0x51c)) {
                *(int *)(unaff_ESI + 0x51c) = iVar1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar5);
            }
            *(undefined1 *)(piVar5 + 3) = 1;
          }
          break;
        }
      }
      iVar6 = *(int *)(unaff_ESI + 0x50c);
      piVar4 = (int *)FUN_00aae9af(0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar1;
        piVar4[1] = iVar6;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar1 = *(int *)(unaff_ESI + 0x510);
      *(int **)(unaff_ESI + 0x50c) = piVar4;
      *(int *)(unaff_ESI + 0x510) = iVar1 + 1;
      piVar5 = local_8;
      if (iVar1 == 0) {
        *(int **)(unaff_ESI + 0x508) = piVar4;
      }
      else {
        *(int **)(iVar6 + 8) = piVar4;
      }
    }
  }
  piVar5 = *(int **)(unaff_ESI + 0x508);
  do {
    while( true ) {
      if (piVar5 == (int *)0x0) {
        return;
      }
      local_8 = (int *)piVar5[2];
      iVar1 = *piVar5;
      cVar2 = (**(code **)(*(int *)(iVar1 + 0x54) + 0x18))(local_5c);
      if (cVar2 == '\0') break;
      piVar5 = local_8;
      if (param_1 == '\0') {
        piVar5 = (int *)FUN_009b7ac0(0x20);
        FUN_00401000(0x47c35040);
        iVar6 = FUN_00b31c00();
        iVar6 = __alldiv((longlong)*piVar5 * (longlong)iVar6,1000,0);
        (**(code **)(*(int *)(iVar1 + 0x400) + 0x18))(&local_c,local_5c);
        piVar5 = local_8;
        if (iVar6 < local_c) {
          FUN_00502090();
          piVar5 = local_8;
        }
      }
    }
    for (piVar5 = *(int **)(unaff_ESI + 0x508); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
      if (*piVar5 == iVar1) {
        if (piVar5 != (int *)0x0) {
          if (*(char *)(unaff_ESI + 0x514) == '\0') {
            iVar1 = piVar5[1];
            iVar6 = piVar5[2];
            if (iVar1 != 0) {
              *(int *)(iVar1 + 8) = iVar6;
            }
            if (iVar6 != 0) {
              *(int *)(iVar6 + 4) = iVar1;
            }
            if (piVar5 == *(int **)(unaff_ESI + 0x508)) {
              *(int *)(unaff_ESI + 0x508) = iVar6;
            }
            if (piVar5 == *(int **)(unaff_ESI + 0x50c)) {
              *(int *)(unaff_ESI + 0x50c) = iVar1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar5);
          }
          *(undefined1 *)(piVar5 + 3) = 1;
        }
        break;
      }
    }
    iVar6 = *(int *)(unaff_ESI + 0x51c);
    piVar4 = (int *)FUN_00aae9af(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar1;
      piVar4[1] = iVar6;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar1 = *(int *)(unaff_ESI + 0x520);
    *(int **)(unaff_ESI + 0x51c) = piVar4;
    *(int *)(unaff_ESI + 0x520) = iVar1 + 1;
    piVar5 = local_8;
    if (iVar1 == 0) {
      *(int **)(unaff_ESI + 0x518) = piVar4;
    }
    else {
      *(int **)(iVar6 + 8) = piVar4;
    }
  } while( true );
}

