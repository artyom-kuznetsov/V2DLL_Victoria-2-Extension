// FUN_0046f0d0 @ 0046f0d0 body=[[0046f0d0, 0046f352] [0046f356, 0046f367]]


/* WARNING: Type propagation algorithm not settling */

void FUN_0046f0d0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  int iStack_58;
  int *piStack_54;
  undefined4 *puStack_44;
  int iStack_40;
  int aiStack_3c [3];
  int *piStack_30;
  int *piStack_2c;
  int local_28;
  void *pvStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  pvStack_14 = ExceptionList;
  iStack_58 = *(int *)(DAT_012588e8 + 0xcf4);
  piStack_54 = &local_28;
  uStack_5c = 0x46f109;
  ExceptionList = &pvStack_14;
  FUN_0045af30();
  local_c = 0;
  piStack_54 = (int *)0x46f11b;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x2c))();
  iVar6 = *(int *)(in_ECX + 0x10);
  iStack_40 = *(int *)(iVar5 + 8);
  if (iVar6 <= *(int *)(iVar5 + 8)) {
    iStack_40 = iVar6;
  }
  iVar7 = (int)pvStack_24 - local_28 >> 2;
  if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  aiStack_3c[1] = iVar6;
  aiStack_3c[2] = iVar5;
  if (iStack_40 != iVar6) {
    piStack_54 = (int *)0x46f166;
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x54))();
    if (iVar6 < iStack_40) {
      do {
        if (*(int *)(iVar5 + 8) == 0) break;
        piVar1 = *(int **)(in_ECX + 0x18);
        iVar6 = **(int **)(iVar5 + 4);
        aiStack_3c[0] = iVar6;
        if ((aiStack_3c < piVar1) && (piVar2 = *(int **)(in_ECX + 0x14), piVar2 <= aiStack_3c)) {
          if (piVar1 == *(int **)(in_ECX + 0x1c)) {
            piStack_54 = (int *)0x46f24b;
            FUN_00a513f0();
          }
          iStack_58 = aiStack_3c[0];
          if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x18) =
                 *(undefined4 *)(*(int *)(in_ECX + 0x14) + ((int)aiStack_3c - (int)piVar2 >> 2) * 4)
            ;
          }
        }
        else {
          if (piVar1 == *(int **)(in_ECX + 0x1c)) {
            piStack_54 = (int *)0x46f26d;
            FUN_00a513f0();
          }
          iStack_58 = iVar6;
          if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
            **(int **)(in_ECX + 0x18) = iVar6;
          }
        }
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 4;
        piStack_54 = (int *)0x1;
        uStack_5c = 0x46f287;
        (**(code **)(**(int **)(in_ECX + 0xc) + 0x20))();
        iStack_40 = iStack_40 + -1;
        iVar5 = aiStack_3c[2];
      } while (aiStack_3c[1] < iStack_40);
    }
    else if (iStack_40 < iVar6) {
      do {
        piVar1 = *(int **)(in_ECX + 0x14);
        iVar6 = *(int *)(in_ECX + 0x18) - (int)piVar1 >> 2;
        if (iVar6 == 0) break;
        iVar6 = piVar1[iVar6 + -1];
        for (piStack_30 = piVar1; (piStack_30 != *(int **)(in_ECX + 0x18) && (*piStack_30 != iVar6))
            ; piStack_30 = piStack_30 + 1) {
        }
        piStack_54 = (int *)0x46f1ae;
        piStack_2c = (int *)(in_ECX + 0x14);
        FUN_0068f020();
        piStack_54 = (int *)0x0;
        uStack_5c = 0x46f1bb;
        iStack_58 = iVar6;
        (**(code **)(**(int **)(in_ECX + 0xc) + 0x10))();
        iStack_40 = iStack_40 + 1;
      } while (iStack_40 < aiStack_3c[1]);
    }
    piStack_54 = (int *)0x46f1d4;
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x6c))();
    piStack_54 = (int *)0x46f1de;
    (**(code **)(**(int **)(in_ECX + 0xc) + 0x50))();
  }
  iVar6 = ((int)pvStack_24 - local_28 >> 2) - *(int *)(in_ECX + 0x10);
  if (iVar6 < 1) {
    if (*(char *)((int)*(int **)(in_ECX + 0x24) + 0x4f) != '\0') {
      piStack_54 = (int *)0x46f209;
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x38))();
    }
    aiStack_3c[0] = 0;
  }
  else {
    if (*(char *)((int)*(int **)(in_ECX + 0x24) + 0x4f) == '\0') {
      piStack_54 = (int *)0x46f2ae;
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))();
    }
    aiStack_3c[0] = iVar6 * 1000;
  }
  piStack_30 = (int *)auStack_60;
  iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + 0x54);
  aiStack_3c[1] = 1000;
  FUN_0043d130(aiStack_3c + 1);
  (**(code **)(iVar6 + 0x14))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x54) + 0x10))();
  iVar6 = FUN_00b31c00();
  iVar6 = (aiStack_3c[2] - aiStack_3c[1] >> 2) - iVar6;
  puVar3 = (undefined4 *)*puStack_44;
  iVar5 = aiStack_3c[1];
  while (puVar4 = puVar3, puVar4 != (undefined4 *)0x0) {
    iVar6 = iVar6 + -1;
    puVar3 = (undefined4 *)puVar4[2];
    if ((-1 < iVar6) && (iVar6 < aiStack_3c[2] - iVar5 >> 2)) {
      FUN_0046f7e0(*puVar4,*(undefined4 *)(iVar5 + iVar6 * 4),iVar6);
      iVar5 = aiStack_3c[1];
    }
  }
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar5);
  }
  ExceptionList = pvStack_24;
  return;
}

