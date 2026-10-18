// FUN_00513a90 @ 00513a90 body=[[00513a90, 00513c74]]


void FUN_00513a90(int param_1,char param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba739b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(unaff_ESI + 0xbd0) = param_1;
  if (param_4 == '\0') {
    if (param_3 != 0) {
      for (piVar5 = *(int **)(param_1 + 0x10); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        if (*piVar5 == *(int *)(param_3 + 0x54)) {
          FUN_00408ed0(*(int *)(param_3 + 0x54) + 0xc,0,0xffffffff);
          iVar4 = FUN_0053ee50(unaff_ESI);
          if (iVar4 == 0) {
            FUN_0051c040();
          }
          else {
            *(int *)(unaff_ESI + 0x84c) = iVar4;
          }
          goto LAB_00513b8c;
        }
      }
    }
    if ((((*(int **)(unaff_ESI + 0x84c) != (int *)0x0) &&
         (cVar3 = (**(code **)(**(int **)(unaff_ESI + 0x84c) + 0x20))(), cVar3 != '\0')) &&
        (cVar3 = FUN_00971160(), cVar3 == '\0')) &&
       (piVar5 = *(int **)(unaff_ESI + 0x83c), piVar5 != (int *)0x0)) {
      do {
        iVar4 = *piVar5;
        piVar5 = (int *)piVar5[2];
        for (piVar1 = *(int **)(*(int *)(unaff_ESI + 0xbd0) + 0x10); piVar1 != (int *)0x0;
            piVar1 = (int *)piVar1[2]) {
          if (*piVar1 == *(int *)(iVar4 + 0x54)) {
            *(int *)(unaff_ESI + 0x84c) = iVar4;
            goto LAB_00513b8c;
          }
        }
      } while (piVar5 != (int *)0x0);
    }
LAB_00513b8c:
    FUN_0050ea30();
    FUN_0051c890();
    FUN_0053d820();
    if (param_2 != '\0') {
      iVar4 = FUN_00aae9af();
      local_8 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005e91f0();
      }
      iVar2 = DAT_012588e8;
      local_8 = 0xffffffff;
      *(int *)(iVar4 + 0x10) = param_1;
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 0xb0c);
      (**(code **)(*(int *)(unaff_ESI + 0x9b4) + 0x18))();
      FUN_0085ccb0();
    }
    if ((5 < (int)((double)((*(int *)(unaff_ESI + 0x664) + -43800000) / 0x18) / 365.0)) &&
       (*(char *)(*(int *)(unaff_ESI + 0xbd0) + 0x5c) == '\0')) {
      *(undefined4 *)(unaff_ESI + 0x664) = DAT_01259abc;
    }
    if (DAT_01267970 != DAT_01267974) {
      *(undefined1 *)(DAT_01267970 + *(int *)(unaff_ESI + 0x20)) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}

