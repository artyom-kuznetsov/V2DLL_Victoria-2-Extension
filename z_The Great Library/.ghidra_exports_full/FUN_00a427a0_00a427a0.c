// FUN_00a427a0 @ 00a427a0 body=[[00a427a0, 00a428aa] [00a428ae, 00a428cd]]


void FUN_00a427a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41128;
  local_10 = ExceptionList;
  local_14 = (int *)(param_1 + 100);
  local_18 = 4;
  ExceptionList = &local_10;
  do {
    local_8 = 0xffffffff;
    if (-1 < *local_14) {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar1 = *local_14 * 0x2c + iVar2;
      piVar6 = (int *)(iVar1 + 0x2c);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        iVar3 = *(int *)(iVar1 + 0x28);
        iVar4 = *(int *)(iVar1 + 0x24);
        *(int *)(iVar2 + 0x6b6d8) = *(int *)(iVar2 + 0x6b6d8) + -1;
        *(int *)(iVar2 + 0x6b6dc) = *(int *)(iVar2 + 0x6b6dc) + iVar3 * iVar4 * -4;
        piVar6 = *(int **)(iVar1 + 4);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        *(undefined4 *)(iVar1 + 4) = 0;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_00408ed0(iVar1 + 8,0,0xffffffff);
        local_8 = 0;
        FUN_00409350(&DAT_00ded94d,0);
        local_1c = FUN_00462500(local_40);
        if (local_1c == *(int *)(iVar2 + 0x6b6c8)) {
LAB_00a42877:
          local_20 = *(int *)(iVar2 + 0x6b6c8);
          piVar6 = &local_20;
        }
        else {
          cVar5 = FUN_0098ab20();
          if (cVar5 != '\0') goto LAB_00a42877;
          piVar6 = &local_1c;
        }
        if (*piVar6 != *(int *)(iVar2 + 0x6b6c8)) {
          FUN_00462830(iVar2 + 0x6b6c4,local_24,*piVar6);
        }
        local_8 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
      }
    }
    local_14 = local_14 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

