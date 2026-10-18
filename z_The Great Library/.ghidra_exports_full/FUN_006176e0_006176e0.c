// FUN_006176e0 @ 006176e0 body=[[006176e0, 0061776f] [00617773, 006177dd] [006177e1, 0061782f] [00617833, 006178f7] [006178fb, 0061790a]]


void FUN_006176e0(int param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  code *pcVar7;
  int unaff_EDI;
  char local_6c [4];
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8caf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00617910(unaff_EDI);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 0;
  pcVar2 = __itoa(param_1,local_6c,10);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_8 = 1;
  piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 4) + 0x6c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_14 = (int *)(DAT_012588e8 + 0xbe0);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("country_selected",0x10);
  local_8 = 2;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x44))(local_4c);
  (**(code **)(*piVar4 + 0x108))();
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("country_selected",0x10);
  local_8 = 3;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x44))(local_4c);
  (**(code **)(*piVar3 + 0x34))();
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  iVar5 = (**(code **)(**(int **)(unaff_EDI + 0x6c) + 0x20))();
  piVar3 = *(int **)(unaff_EDI + 0x6c);
  if (iVar5 != 0x8c2) {
    iVar5 = (**(code **)(*piVar3 + 0x20))();
    piVar3 = *(int **)(unaff_EDI + 0x6c);
    if (iVar5 != 0x8c4) {
      iVar5 = (**(code **)(*piVar3 + 0x20))();
      piVar3 = *(int **)(unaff_EDI + 0x6c);
      if (iVar5 != 0x8d4) {
        iVar5 = (**(code **)(*piVar3 + 0x20))();
        if (iVar5 != 0x8b1) goto LAB_00617891;
        piVar3 = *(int **)(unaff_EDI + 0x6c);
      }
    }
  }
  iVar5 = *(int *)(*local_14 + param_1 * 4);
  piVar3[10] = *(int *)(iVar5 + 0x1c);
  piVar3[0xb] = *(int *)(iVar5 + 0x20);
LAB_00617891:
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("AgreeButton",0xb);
  local_8 = 4;
  cVar1 = FUN_00911760(0);
  piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 4) + 0x34))(local_68);
  if (cVar1 == '\0') {
    pcVar7 = *(code **)(*piVar3 + 0xbc);
  }
  else {
    pcVar7 = *(code **)(*piVar3 + 0xb8);
  }
  (*pcVar7)();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return;
}

