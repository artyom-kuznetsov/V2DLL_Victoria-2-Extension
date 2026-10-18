// FUN_008e8ab0 @ 008e8ab0 body=[[008e8ab0, 008e8c69]]


undefined4 FUN_008e8ab0(int param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  int iStack_28;
  int iStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((*(int *)(param_1 + 0x14) == 0) ||
     (ExceptionList = &pvStack_14, cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))(),
     cVar3 == '\0')) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
        if (DAT_0131bb34 == 0) {
          iVar4 = FUN_00aae9af(0x188);
          uStack_c = 0;
          if (iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_0041a160();
          }
          FUN_00423700(uVar5);
        }
        iStack_28 = 0;
        iVar4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        if (0 < iVar4) {
          piVar7 = *(int **)(iVar6 + 0x194);
          do {
            if (*piVar7 != 0) {
              iVar6 = *piVar7;
              do {
                piVar1 = (int *)(iVar6 + 0x27c);
                if (*(int *)(in_ECX + 0x24) < *(int *)(iVar6 + 0x124)) {
                  ExceptionList = pvStack_14;
                  return 1;
                }
                if ((*(int *)(in_ECX + 0x24) <= *(int *)(iVar6 + 0x124)) &&
                   (*(uint *)(in_ECX + 0x20) <= *(uint *)(iVar6 + 0x120))) {
                  ExceptionList = pvStack_14;
                  return 1;
                }
                iVar6 = *piVar1;
              } while (*piVar1 != 0);
            }
            iStack_28 = iStack_28 + 1;
            piVar7 = piVar7 + 4;
          } while (iStack_28 < iVar4);
        }
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 8);
      FUN_00969f90(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x12e8);
      if ((*(int *)(in_ECX + 0x24) <= iStack_1c) &&
         ((*(int *)(in_ECX + 0x24) < iStack_1c || (*(uint *)(in_ECX + 0x20) <= uVar2)))) {
        ExceptionList = pvStack_14;
        return 1;
      }
    }
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x124);
    if ((*(int *)(in_ECX + 0x24) <= iVar6) &&
       ((*(int *)(in_ECX + 0x24) < iVar6 ||
        (*(uint *)(in_ECX + 0x20) <= *(uint *)(*(int *)(param_1 + 0x14) + 0x120))))) {
      ExceptionList = pvStack_14;
      return 1;
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}

