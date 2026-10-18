// FUN_00617450 @ 00617450 body=[[00617450, 00617536] [0061753a, 006175a6] [006175aa, 006175fd] [00617601, 006176c6] [006176ca, 006176dc]]


void FUN_00617450(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char local_70 [4];
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8cb38;
  local_10 = ExceptionList;
  local_14 = (int *)(DAT_012588e8 + 0xbe0);
  iVar9 = 0;
  iVar10 = *(int *)(DAT_012588e8 + 0xbe4) - *local_14 >> 2;
  ExceptionList = &local_10;
  if (0 < iVar10) {
    while( true ) {
      local_18 = *(int *)(*(int *)(*local_14 + iVar9 * 4) + 0x20);
      iVar2 = (**(code **)(*param_1 + 0x80))();
      if (local_18 == iVar2) break;
      iVar9 = iVar9 + 1;
      if (iVar10 <= iVar9) {
        ExceptionList = local_10;
        return;
      }
    }
    FUN_00617910(in_ECX);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8 = 0;
    pcVar3 = __itoa(iVar9,local_70,10);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    local_8 = 1;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_34);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    piVar8 = (int *)(DAT_012588e8 + 0xbe0);
    local_3c = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("country_selected",0x10);
    local_8 = 2;
    piVar5 = (int *)(**(code **)(*piVar4 + 0x44))(local_50);
    (**(code **)(*piVar5 + 0x108))();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("country_selected",0x10);
    local_8 = 3;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x44))(local_50);
    (**(code **)(*piVar4 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    iVar10 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
    if ((((iVar10 == 0x8c2) ||
         (iVar10 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))(), iVar10 == 0x8c4)) ||
        (iVar10 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))(), iVar10 == 0x8d4)) ||
       (iVar10 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))(), iVar10 == 0x8b1)) {
      iVar9 = *(int *)(*piVar8 + iVar9 * 4);
      iVar10 = *(int *)(in_ECX + 0x6c);
      *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(iVar9 + 0x1c);
      *(undefined4 *)(iVar10 + 0x2c) = *(undefined4 *)(iVar9 + 0x20);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("AgreeButton",0xb);
    local_8 = 4;
    cVar1 = FUN_00911760(0);
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x34))(local_6c);
    if (cVar1 == '\0') {
      pcVar6 = *(code **)(*piVar4 + 0xbc);
    }
    else {
      pcVar6 = *(code **)(*piVar4 + 0xb8);
    }
    (*pcVar6)();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

