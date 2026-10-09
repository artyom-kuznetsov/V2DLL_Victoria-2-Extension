// FUN_00595db0 @ 00595db0

int * FUN_00595db0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int unaff_EDI;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62633;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = (**(code **)(**(int **)(unaff_EDI + 0x1c) + 0x24))();
  if (iVar3 == 2) {
    piVar5 = *(int **)(unaff_EDI + 0x20);
    while (piVar5 != (int *)0x0) {
      local_14 = (int *)piVar5[2];
      if (*piVar5 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(*piVar5 + 0x38);
      }
      piVar1 = (int *)*puVar4;
      while (piVar5 = local_14, piVar1 != (int *)0x0) {
        piVar5 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
        cVar2 = (**(code **)(*piVar5 + 0x24))();
        if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar5 + 0x2c))(), cVar2 == '\0')) {
          local_18 = piVar5[0xf] - piVar5[0x1b];
        }
        else {
          local_18 = piVar5[0xf] - piVar5[0x1b];
        }
        if (local_18 < 0) {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x58) + *(int *)(piVar5[0xe] + 0x24) * 4);
          *piVar5 = *piVar5 + 1000;
          *(int *)(unaff_EDI + 0x54) = *(int *)(unaff_EDI + 0x54) + 1000;
        }
      }
    }
    FUN_005dc330(unaff_EDI + 0x20,&local_18);
  }
  local_18 = *(int *)(unaff_EDI + 0x5c) - *(int *)(unaff_EDI + 0x58) >> 2;
  *param_1 = 0;
  local_14 = (int *)0x0;
  if (0 < local_18) {
    do {
      iVar3 = 0;
      if (DAT_0125fdd8 == 0) {
        local_1c = FUN_00aae9af(0x1c);
        local_8 = 0;
        if (local_1c != 0) {
          iVar3 = FUN_008b0060();
        }
        iVar6 = DAT_0125fdd8;
        local_8 = 1;
        local_1c = 0;
        if ((iVar3 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
          FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar6);
        }
        local_8 = 0xffffffff;
        DAT_0125fdd8 = iVar3;
      }
      iVar6 = (int)local_14 * 4;
      piVar5 = (int *)FUN_005dc3c0(unaff_EDI + 0x20,local_20,
                                   *(undefined4 *)(iVar6 + *(int *)(DAT_0125fdd8 + 0xc)));
      iVar3 = *piVar5;
      piVar5 = (int *)(*(int *)(unaff_EDI + 0x58) + iVar6);
      *piVar5 = *piVar5 + iVar3;
      iVar6 = **(int **)(unaff_EDI + 0x1c);
      *param_1 = *param_1 + iVar3;
      iVar6 = (**(code **)(iVar6 + 0x24))();
      if (iVar6 != 2) {
        *(int *)(unaff_EDI + 0x54) = *(int *)(unaff_EDI + 0x54) + iVar3;
      }
      local_14 = (int *)((int)local_14 + 1);
    } while ((int)local_14 < local_18);
  }
  ExceptionList = local_10;
  return param_1;
}


