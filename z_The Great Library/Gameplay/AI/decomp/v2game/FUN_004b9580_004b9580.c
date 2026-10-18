// FUN_004b9580 @ 004b9580 body=[[004b9580, 004b963d] [004b9640, 004b9697] [004b969b, 004b9764]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_004b9580(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5fd8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_01258728 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    DAT_01258728 = (undefined4 *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (undefined4 *)0x0) {
      DAT_01258728 = (undefined4 *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  FUN_004c10d0(param_2);
  param_2 = 0;
  if (DAT_0131bb34 == 0) {
    iVar2 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar3);
  }
  iVar2 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  if (0 < iVar2) {
    local_14 = 0;
    do {
      if (DAT_0131bb34 == 0) {
        iVar4 = FUN_00aae9af(0x188);
        local_8 = 1;
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0041a160();
        }
        iVar8 = DAT_0131bb34;
        local_8 = 2;
        if ((iVar4 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar8);
        }
        local_8 = 0xffffffff;
        DAT_0131bb34 = iVar4;
      }
      if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < param_2) {
        piVar5 = (int *)FUN_0096bb70();
      }
      else {
        piVar5 = *(int **)(*(int *)(DAT_0131bb34 + 0xc) + param_2 * 4);
      }
      cVar1 = (**(code **)(*piVar5 + 0x18))();
      if ((cVar1 != '\0') && (piVar6 = (int *)FUN_004b8c80(piVar5,param_1), piVar6 != piVar5)) {
        piVar7 = (int *)(*(int *)(param_1 + 0x194) + local_14);
        iVar4 = piVar7[2];
        piVar5 = (int *)&stack0xffffffd4;
        for (iVar8 = *piVar7; iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x27c)) {
          *piVar5 = iVar8;
          piVar5 = piVar5 + 1;
        }
        iVar8 = 0;
        if (0 < iVar4) {
          do {
            FUN_00955d90(piVar6);
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
        }
      }
      local_14 = local_14 + 0x10;
      param_2 = param_2 + 1;
    } while (param_2 < iVar2);
  }
  ExceptionList = local_10;
  return;
}

