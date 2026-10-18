// FUN_0089b500 @ 0089b500 body=[[0089b500, 0089b644] [0089b650, 0089b775]]


void FUN_0089b500(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined1 local_50 [20];
  int iStack_3c;
  
  FUN_008a88d0();
  local_90 = 0x2d2d2d;
  local_8c = 0;
  local_80 = 0;
  local_88 = 0;
  piVar6 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
  if (*(int *)(param_1 + 0xc) == 0) {
    if ((piVar6 == (int *)0x0) || (cVar5 = (**(code **)(*piVar6 + 0x24))(), cVar5 == '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
        FUN_008a88d0();
        iVar1 = *(int *)(*(int *)(iVar1 + 0x194) + *(int *)(*(int *)(in_ECX + 0x3c) + 0x28) * 0x10);
        while (iStack_3c = iVar1, iStack_3c != 0) {
          iVar1 = *(int *)(iStack_3c + 0x27c);
          if ((*(int *)(iStack_3c + 0x68) == *(int *)(in_ECX + 0x3c)) &&
             (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50), cVar5 == '\x01')) {
            puVar3 = *(undefined4 **)(in_ECX + 8);
            while (puVar3 != (undefined4 *)0x0) {
              piVar6 = (int *)*puVar3;
              puVar3 = (undefined4 *)puVar3[2];
              (**(code **)(*piVar6 + 0x2c))(local_50,param_2);
            }
          }
        }
      }
    }
    else {
      FUN_008a88d0();
      piVar7 = (int *)piVar6[0x12];
      while (((int *)piVar6[0x12] <= piVar7 && (piVar7 < (int *)piVar6[0x13]))) {
        iVar1 = *piVar7;
        piVar7 = piVar7 + 1;
        iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x194) +
                        *(int *)(*(int *)(in_ECX + 0x3c) + 0x28) * 0x10);
        while (iStack_3c = iVar1, iStack_3c != 0) {
          iVar1 = *(int *)(iStack_3c + 0x27c);
          if ((*(int *)(iStack_3c + 0x68) == *(int *)(in_ECX + 0x3c)) &&
             (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50), cVar5 == '\x01')) {
            puVar3 = *(undefined4 **)(in_ECX + 8);
            while (puVar3 != (undefined4 *)0x0) {
              piVar4 = (int *)*puVar3;
              puVar3 = (undefined4 *)puVar3[2];
              (**(code **)(*piVar4 + 0x2c))(local_50,param_2);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    puVar8 = (uint *)(iVar1 + 0x9d8);
    piVar6 = (int *)*puVar8;
    while (((int *)*puVar8 <= piVar6 && (piVar6 < *(int **)(iVar1 + 0x9dc)))) {
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x194) +
                      *(int *)(*(int *)(in_ECX + 0x3c) + 0x28) * 0x10);
      while (local_84 = iVar2, local_84 != 0) {
        iVar2 = *(int *)(local_84 + 0x27c);
        if ((*(int *)(local_84 + 0x68) == *(int *)(in_ECX + 0x3c)) &&
           (cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_98), cVar5 == '\x01')) {
          puVar3 = *(undefined4 **)(in_ECX + 8);
          while (puVar3 != (undefined4 *)0x0) {
            piVar7 = (int *)*puVar3;
            puVar3 = (undefined4 *)puVar3[2];
            (**(code **)(*piVar7 + 0x2c))(local_98,param_2);
          }
        }
      }
    }
  }
  return;
}

