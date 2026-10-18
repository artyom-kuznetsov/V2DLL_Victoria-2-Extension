// FUN_009a4ca0 @ 009a4ca0 body=[[009a4ca0, 009a4d8c] [009a4daa, 009a4db8]]


void FUN_009a4ca0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_EDI;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba304b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0131c974 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x10);
    local_8 = 0;
    local_18 = iVar2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      uVar3 = FUN_00993dd0();
      *(undefined4 *)(iVar2 + 4) = uVar3;
      *(undefined4 *)uVar3 = uVar3;
      *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
      *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x34) = 1;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x35) = 1;
    }
    local_8 = 0xffffffff;
    FUN_009a5820(iVar2);
  }
  iVar2 = DAT_0131c974;
  local_14 = FUN_009a59b0(unaff_EDI);
  if (local_14 != *(int *)(iVar2 + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar4 = &local_14;
      goto LAB_009a4d51;
    }
  }
  local_18 = *(int *)(iVar2 + 4);
  piVar4 = &local_18;
LAB_009a4d51:
  if (*piVar4 != *(int *)(DAT_0131c974 + 4)) {
    piVar4 = *(int **)(*piVar4 + 0x28);
    piVar5 = (int *)*piVar4;
    if (piVar5 != piVar4) {
      do {
        if (piVar5[2] == param_1) break;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != piVar4);
      if (piVar5 != piVar4) {
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

