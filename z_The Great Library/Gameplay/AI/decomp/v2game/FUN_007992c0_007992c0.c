// FUN_007992c0 @ 007992c0 body=[[007992c0, 00799323] [00799327, 007993aa]]


void FUN_007992c0(short param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  int unaff_EDI;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  sVar4 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("only_unit_from_selection_button",0x1f);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (*(char *)((int)piVar2 + 0x4f) != '\0') {
    if (*(undefined4 **)(unaff_EDI + 0x31c) != (undefined4 *)0x0) {
      for (piVar1 = (int *)**(undefined4 **)(unaff_EDI + 0x31c); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[2]) {
        if (*piVar1 == unaff_EDI) {
          sVar4 = 0xc;
          break;
        }
      }
    }
    iVar3 = (**(code **)(*piVar2 + 0x3c))(local_14);
    _param_1 = CONCAT22(*(undefined2 *)(iVar3 + 2),*(short *)(unaff_EDI + 0x318) + sVar4 + param_1);
    (**(code **)(*piVar2 + 200))(_param_1);
  }
  ExceptionList = local_10;
  return;
}

