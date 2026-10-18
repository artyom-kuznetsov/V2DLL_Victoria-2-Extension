// FUN_00443140 @ 00443140 body=[[00443140, 004431a6] [004431aa, 004431f0] [004431f4, 0044323a] [0044323e, 00443313] [00443317, 00443360]]


undefined4 FUN_00443140(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("mobilization_progress_bar",0x19);
  local_8 = 0;
  uVar2 = (**(code **)(**(int **)(unaff_EDI + 0x10) + 0x44))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("units_left",10);
  local_8 = 1;
  uVar2 = (**(code **)(**(int **)(unaff_EDI + 0x10) + 0x3c))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x38) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("mobilization_panel_bg",0x15);
  local_8 = 2;
  uVar2 = (**(code **)(**(int **)(unaff_EDI + 0x10) + 0x44))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_EDI + 0x34) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (((*(int *)(unaff_EDI + 0x30) != 0) && (*(int *)(unaff_EDI + 0x38) != 0)) &&
     (*(int *)(unaff_EDI + 0x34) != 0)) {
    piVar1 = *(int **)(*(int *)(unaff_EDI + 0x30) + 0x94);
    FUN_00401000(0x47c35040);
    iVar3 = FUN_00b31c00();
    iVar3 = __alldiv((longlong)iVar3 * (longlong)*(int *)(unaff_EDI + 0x3c),1000,0);
    FUN_00401000(0x43fa4001);
    iVar4 = FUN_00b31c00();
    (**(code **)(*piVar1 + 0x5c))((iVar4 + iVar3) / 1000);
    uVar2 = FUN_009888f0(local_48);
    local_8 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00a5ecc0();
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    (**(code **)(**(int **)(unaff_EDI + 0x34) + 0x48))
              ((*(char *)(unaff_EDI + 0x44) == '\0') + '\x01');
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

