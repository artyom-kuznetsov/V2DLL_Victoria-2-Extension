// FUN_00a317b0 @ 00a317b0 body=[[00a317b0, 00a3182a] [00a3182e, 00a319c0]]


void FUN_00a317b0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iStack_4c;
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4be63;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("channels",8);
  local_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x9c))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  piVar6 = piVar2 + 0x1d;
  local_24 = 0xf;
  uStack_28 = 0;
  puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
  piVar7 = (int *)*puVar3;
  iStack_40 = (*(int *)(in_ECX + 0xcc) - *(int *)(in_ECX + 200)) / 0x54;
  iStack_4c = 0;
  if (0 < iStack_40) {
    iVar8 = 0;
    piStack_44 = piVar7;
    do {
      piVar4 = (int *)(iVar8 + 0x20 + *(int *)(in_ECX + 200));
      piVar1 = (int *)piVar4[1];
      piVar4 = (int *)*piVar4;
      if (piVar4 != piVar1) {
        do {
          if (*piVar4 == *(int *)(in_ECX + 0xa4)) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar1);
        if (piVar4 != piVar1) {
          iStack_4c = iStack_4c + 1;
          if (piVar7 == (int *)0x0) {
            iVar5 = FUN_00aae9af(0xf0);
            puStack_10 = (undefined1 *)0x1;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_00a333d0(iVar5);
            }
            puStack_10 = (undefined1 *)0xffffffff;
            (**(code **)(*(int *)(iVar5 + 0x1c) + 0x28))();
            (**(code **)(*piVar2 + 0xb4))(iVar5,0);
          }
          else {
            piStack_44 = (int *)piVar7[2];
            iVar5 = *piVar7;
          }
          FUN_00a33620(iVar5,*(undefined4 *)(iVar8 + 0x34 + *(int *)(in_ECX + 200)));
          piVar7 = piStack_44;
        }
      }
      iVar8 = iVar8 + 0x54;
      iStack_40 = iStack_40 + -1;
    } while (iStack_40 != 0);
  }
  iVar8 = (**(code **)(*piVar6 + 0x2c))();
  for (iVar8 = *(int *)(iVar8 + 8); iStack_4c < iVar8; iVar8 = *(int *)(iVar8 + 8)) {
    iVar8 = (**(code **)(*piVar6 + 0x2c))();
    puVar3 = (undefined4 *)**(int **)(iVar8 + 4);
    (**(code **)(*piVar2 + 0xbc))(puVar3,0);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    iVar8 = (**(code **)(*piVar6 + 0x2c))();
  }
  (**(code **)(*piVar2 + 0xe4))();
  ExceptionList = pvStack_18;
  return;
}

