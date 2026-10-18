// FUN_00653fa0 @ 00653fa0 body=[[00653fa0, 00654107] [0065410b, 0065411d]]


/* WARNING: Removing unreachable block (ram,0x00654102) */

void FUN_00653fa0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int **ppiVar6;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3f598;
  local_10 = ExceptionList;
  ppiVar6 = (int **)0x0;
  if (((*(int *)(*(int *)(param_1 + 0x1e20) + 8) != 0) &&
      (*(char *)(*(int *)(param_1 + 0x1e20) + 0x10) != '\0')) &&
     (ExceptionList = &local_10,
     cVar2 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1c) + 0x28))(),
     cVar2 == '\0')) {
    local_8 = 0;
    piVar1 = (int *)**(undefined4 **)(param_1 + 0x1e20);
    while (piVar1 != (int *)0x0) {
      local_18[0] = *(int **)(*piVar1 + 0x28);
      piVar1 = (int *)piVar1[2];
      if (local_18 < ppiVar6) {
        if (ppiVar6 == (int **)0x0) {
          FUN_00a513f0();
        }
        else {
          *ppiVar6 = *(int **)(((int)local_18 >> 2) * 4);
        }
      }
      else if (ppiVar6 == (int **)0x0) {
        FUN_00a513f0();
      }
      else {
        *ppiVar6 = local_18[0];
      }
      ppiVar6 = ppiVar6 + 1;
    }
    FUN_004cd940();
    iVar5 = 0;
    if (0 < (int)ppiVar6 >> 2) {
      do {
        piVar1 = *(int **)(iVar5 * 4);
        if (((char)piVar1[1] == '\0') && (cVar2 = (**(code **)(*piVar1 + 8))(), cVar2 != '\0')) {
          if (*(int *)(param_1 + 0x1608) != 0) {
            local_18[0] = (int *)**(undefined4 **)(param_1 + 0x1600);
            iVar3 = (**(code **)(*piVar1 + 4))();
            iVar4 = (**(code **)(*local_18[0] + 4))();
            if (iVar3 != iVar4) goto LAB_006540dd;
          }
          FUN_004cd7f0();
        }
LAB_006540dd:
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)ppiVar6 >> 2);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x1e20) + 0x10) = 0;
    FUN_009a63f0();
  }
  ExceptionList = local_10;
  return;
}

