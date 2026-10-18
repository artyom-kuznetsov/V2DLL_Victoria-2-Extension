// FUN_00462590 @ 00462590 body=[[00462590, 004627dc] [004627e0, 004627f7] [004627fb, 0046280e]]


/* WARNING: Removing unreachable block (ram,0x00462650) */
/* WARNING: Removing unreachable block (ram,0x00462660) */
/* WARNING: Removing unreachable block (ram,0x00462669) */
/* WARNING: Removing unreachable block (ram,0x0046266c) */
/* WARNING: Removing unreachable block (ram,0x0046265c) */
/* WARNING: Removing unreachable block (ram,0x0046267a) */
/* WARNING: Removing unreachable block (ram,0x0046268a) */
/* WARNING: Removing unreachable block (ram,0x00462695) */
/* WARNING: Removing unreachable block (ram,0x00462691) */
/* WARNING: Removing unreachable block (ram,0x00462685) */
/* WARNING: Removing unreachable block (ram,0x00462698) */

void FUN_00462590(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (*(char *)((int)param_3 + 0x39) != '\0') {
    FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_00462ac0();
  piVar7 = (int *)*param_3;
  if (*(char *)((int)piVar7 + 0x39) == '\0') {
    if (*(char *)(param_3[2] + 0x39) == '\0') {
      piVar7 = (int *)param_3[2];
    }
  }
  else {
    piVar7 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar7 + 0x39) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == param_3) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0x39) == '\0') {
      cVar1 = *(char *)(*piVar7 + 0x39);
      piVar2 = (int *)*piVar7;
      piVar5 = piVar7;
      while (piVar3 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar2 + 0x39);
        piVar5 = piVar3;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar5;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 8) == param_3) {
    if (*(char *)((int)piVar7 + 0x39) == '\0') {
      uVar4 = FUN_00462bd0();
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar4;
    }
    else {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar6;
    }
  }
  if ((char)param_3[0xe] == '\x01') {
    if (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar5 = piVar6;
        if ((char)piVar7[0xe] != '\x01') break;
        piVar6 = (int *)*piVar5;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[2];
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_00462b10(param_1);
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0x39) == '\0') {
            if ((*(char *)(*piVar6 + 0x38) != '\x01') || (*(char *)(piVar6[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x38) = 1;
                *(undefined1 *)(piVar6 + 0xe) = 0;
                FUN_00462b70(param_1);
                piVar6 = (int *)piVar5[2];
              }
              *(char *)(piVar6 + 0xe) = (char)piVar5[0xe];
              *(undefined1 *)(piVar5 + 0xe) = 1;
              *(undefined1 *)(piVar6[2] + 0x38) = 1;
              FUN_00462b10(param_1);
              break;
            }
LAB_0046277c:
            *(undefined1 *)(piVar6 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar6[0xe] == '\0') {
            *(undefined1 *)(piVar6 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_00462b70(param_1);
            piVar6 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar6 + 0x39) == '\0') {
            if ((*(char *)(piVar6[2] + 0x38) == '\x01') && (*(char *)(*piVar6 + 0x38) == '\x01'))
            goto LAB_0046277c;
            if (*(char *)(*piVar6 + 0x38) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x38) = 1;
              *(undefined1 *)(piVar6 + 0xe) = 0;
              FUN_00462b10(param_1);
              piVar6 = (int *)*piVar5;
            }
            *(char *)(piVar6 + 0xe) = (char)piVar5[0xe];
            *(undefined1 *)(piVar5 + 0xe) = 1;
            *(undefined1 *)(*piVar6 + 0x38) = 1;
            FUN_00462b70(param_1);
            break;
          }
        }
        piVar6 = (int *)piVar5[1];
        piVar7 = piVar5;
      } while (piVar5 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0xe) = 1;
  }
  if (param_3[10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3[10]);
  }
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  if (0xf < (uint)param_3[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3[3]);
  }
  param_3[8] = 0xf;
  param_3[7] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

