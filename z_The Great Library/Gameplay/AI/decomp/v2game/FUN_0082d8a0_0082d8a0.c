// FUN_0082d8a0 @ 0082d8a0 body=[[0082d8a0, 0082d999] [0082d9a0, 0082da64]]


undefined4 FUN_0082d8a0(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  int *local_24;
  int *local_20;
  int local_1c;
  undefined1 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fed8;
  local_10 = ExceptionList;
  if (1 < *(int *)(param_2 + 0xf4)) {
    bVar8 = *(char *)(param_1 + 0xe4) == '\0';
    ExceptionList = &local_10;
    if (!bVar8) {
      if (*(int *)(param_1 + 0xb4) < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(param_1 + 0xac);
      }
      iVar6 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar4 + 0x1a8) * 4) + 0xe8
                      );
      ExceptionList = &local_10;
      if ((iVar6 != 0) &&
         ((ExceptionList = &local_10, iVar6 == *(int *)(*(int *)(iVar4 + 0xdc) + 0xe8) ||
          ((ExceptionList = &local_10, *(int *)(*(int *)(iVar4 + 0xdc) + 0xe8) != 0 &&
           (ExceptionList = &local_10, cVar2 = FUN_004e0ac0(), cVar2 != '\0')))))) {
        bVar8 = true;
      }
    }
    param_3 = (int *)*param_3;
    piVar7 = param_3;
    do {
      do {
        if (piVar7 == (int *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        iVar4 = *piVar7;
        piVar7 = (int *)piVar7[2];
      } while (*(int *)(iVar4 + 0xdc) != param_2);
      iVar6 = iVar4;
      if (bVar8) break;
      uVar10 = FUN_0082da70();
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
      piVar7 = extraout_ECX;
    } while (iVar6 == (int)uVar10);
    piVar7 = (int *)0x0;
    local_24 = (int *)0x0;
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0;
    if (param_3 != (int *)0x0) {
      do {
        iVar5 = *param_3;
        param_3 = (int *)param_3[2];
        piVar3 = piVar7;
        piVar1 = local_24;
        if (*(int *)(iVar5 + 0xdc) == *(int *)(iVar6 + 0xdc)) {
          if (!bVar8) {
            uVar10 = FUN_0082da70();
            iVar6 = (int)((ulonglong)uVar10 >> 0x20);
            piVar1 = local_24;
            if (iVar5 == (int)uVar10) goto LAB_0082da10;
          }
          piVar1 = local_24;
          if (iVar5 != iVar6) {
            local_14 = piVar7;
            piVar3 = (int *)FUN_00aae9af(0x10);
            if (piVar3 == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              *piVar3 = iVar5;
              piVar3[1] = (int)piVar7;
              piVar3[2] = 0;
              *(undefined1 *)(piVar3 + 3) = 0;
            }
            iVar5 = local_1c + 1;
            bVar9 = local_1c != 0;
            iVar6 = iVar4;
            piVar1 = piVar3;
            local_20 = piVar3;
            local_1c = iVar5;
            if (bVar9) {
              local_14[2] = (int)piVar3;
              piVar1 = local_24;
            }
          }
        }
LAB_0082da10:
        local_24 = piVar1;
        piVar7 = piVar3;
      } while (param_3 != (int *)0x0);
      if ((0 < local_1c) && (cVar2 = FUN_008268d0(iVar6,&local_24,param_4), cVar2 != '\0')) {
        FUN_009a63f0();
        ExceptionList = local_10;
        return 1;
      }
    }
    FUN_009a63f0();
  }
  ExceptionList = local_10;
  return 0;
}

