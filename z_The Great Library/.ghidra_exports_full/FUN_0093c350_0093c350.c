// FUN_0093c350 @ 0093c350 body=[[0093c350, 0093c48c] [0093c490, 0093c4b0]]


void FUN_0093c350(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined1 local_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 *local_38;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar7 = *(int **)(in_EAX + 0xe0);
  piVar9 = (int *)*piVar7;
  local_c = piVar7;
  if (piVar9 != piVar7) {
    do {
      local_8 = 0;
      if (0 < (int)(piVar9[5] - piVar9[4] & 0xffffffc0U)) {
        local_10 = 0;
        do {
          iVar3 = local_10;
          FUN_008a8650(0);
          FUN_008a8650(0);
          local_9c = *(undefined4 *)(piVar9[4] + 0x18 + iVar3);
          iVar6 = piVar9[4] + iVar3;
          local_98 = *(undefined4 *)(iVar6 + 0x1c);
          local_38 = local_a4;
          local_54 = *(undefined4 *)(iVar6 + 0x20);
          local_50 = *(undefined4 *)(iVar6 + 0x24);
          cVar5 = (**(code **)(**(int **)(iVar6 + 0xc) + 0x18))(local_5c);
          if ((cVar5 == '\0') || (cVar5 = FUN_00952850(0,0,0), cVar5 == '\0')) {
            FUN_00951ed0(piVar9[4] + iVar3);
            FUN_0042c960(local_c);
            puVar1 = (undefined4 *)piVar9[5];
            for (puVar8 = puVar1 + -0x10; puVar8 != puVar1; puVar8 = puVar8 + 0x10) {
              (**(code **)*puVar8)(0);
            }
            piVar9[5] = piVar9[5] + -0x40;
          }
          else {
            local_8 = local_8 + 1;
            local_10 = iVar3 + 0x40;
          }
          piVar7 = local_c;
        } while (local_8 < piVar9[5] - piVar9[4] >> 6);
      }
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar5 = *(char *)(*piVar2 + 0x21);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*piVar2 + 0x21);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar5 = *(char *)(piVar9[1] + 0x21);
          piVar4 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar4, cVar5 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar5 = *(char *)(piVar9[1] + 0x21);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != piVar7);
  }
  return;
}

