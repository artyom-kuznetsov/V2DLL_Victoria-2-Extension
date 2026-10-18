// FUN_0081e040 @ 0081e040 body=[[0081e040, 0081e157] [0081e160, 0081e270]]


void FUN_0081e040(char param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  iVar7 = *(int *)(DAT_012587e4 + 4);
  if (((*(char *)(*(int *)(iVar7 + *(int *)(in_ECX + 0x34) * 4) + 0x67c) == '\0') &&
      (*(int *)(*(int *)(iVar7 + *(int *)(*(int *)(in_ECX + 0x38) + 0x38) * 4) + 0x4ac) < 1)) &&
     (iVar1 = *(int *)(DAT_012588e8 + 0xb10), iVar5 = *(int *)(DAT_012588e8 + 0xb0c),
     ExceptionList = &local_10, FUN_00424810(*(int *)(*(int *)(DAT_012586dc + 0x60) + 0x9c) / 1000),
     iVar1 <= iVar5)) {
    piVar4 = *(int **)(*(int *)(iVar7 + *(int *)(in_ECX + 0x34) * 4) + 0x7b4);
    iVar7 = 999999;
    local_18 = 0;
    local_14 = 999999;
    if (piVar4 != (int *)0x0) {
      do {
        piVar2 = (int *)piVar4[2];
        piVar4 = (int *)*piVar4;
        cVar3 = FUN_005cc3e0();
        if ((cVar3 == '\0') && (piVar4[0x1d] == 0)) {
          cVar3 = (**(code **)(*piVar4 + 0x38))();
          if (param_1 == '\0') {
            if (cVar3 != '\0') {
              piVar4 = (int *)piVar4[0xe];
              while (piVar4 != (int *)0x0) {
                iVar1 = *piVar4;
                iVar7 = *(int *)(iVar1 + 0x38);
                piVar4 = (int *)piVar4[2];
                iVar5 = (*(int *)(iVar7 + 0x22c) +
                        *(int *)(iVar7 + 0x228) + *(int *)(iVar7 + 0x230) + *(int *)(iVar7 + 0x234))
                        / 1000;
                iVar7 = local_14;
                if (iVar5 < local_14) {
                  iVar7 = iVar5;
                  local_18 = iVar1;
                  local_14 = iVar5;
                }
              }
            }
          }
          else if (cVar3 == '\0') {
            piVar4 = (int *)piVar4[0xe];
            while (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              iVar5 = *(int *)(iVar1 + 0x38);
              piVar4 = (int *)piVar4[2];
              local_14 = iVar7;
              if (*(char *)(iVar5 + 0x3c) == '\0') {
                iVar5 = __alldiv((longlong)*(int *)(iVar5 + 0x248) *
                                 (longlong)*(int *)(iVar5 + 0x244),1000,0);
                iVar5 = iVar5 / 1000;
                if (iVar5 < iVar7) {
                  iVar7 = iVar5;
                  local_18 = iVar1;
                  local_14 = iVar5;
                }
              }
            }
          }
        }
        piVar4 = piVar2;
      } while (piVar2 != (int *)0x0);
      if (local_18 != 0) {
        iVar7 = FUN_00aae9af(100);
        local_8 = 0;
        if (iVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_005e1000(iVar7,local_18);
        }
        local_8 = 0xffffffff;
        iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar6);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

