// FUN_00aa7a20 @ 00aa7a20 body=[[00aa7a20, 00aa7c4a]]


/* WARNING: Removing unreachable block (ram,0x00aa7ae0) */
/* WARNING: Removing unreachable block (ram,0x00aa7af0) */
/* WARNING: Removing unreachable block (ram,0x00aa7af9) */
/* WARNING: Removing unreachable block (ram,0x00aa7afc) */
/* WARNING: Removing unreachable block (ram,0x00aa7aec) */
/* WARNING: Removing unreachable block (ram,0x00aa7b0a) */
/* WARNING: Removing unreachable block (ram,0x00aa7b1a) */
/* WARNING: Removing unreachable block (ram,0x00aa7b25) */
/* WARNING: Removing unreachable block (ram,0x00aa7b21) */
/* WARNING: Removing unreachable block (ram,0x00aa7b15) */
/* WARNING: Removing unreachable block (ram,0x00aa7b28) */

void FUN_00aa7a20(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    FUN_00aad3fa("invalid map/set<T> iterator");
  }
  FUN_00aaaa90();
  piVar5 = (int *)*param_2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    if (*(char *)(param_2[2] + 0x15) == '\0') {
      piVar5 = (int *)param_2[2];
    }
  }
  else {
    piVar5 = (int *)param_2[2];
  }
  piVar4 = (int *)param_2[1];
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar5[1] = (int)piVar4;
  }
  if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar4 == param_2) {
    *piVar4 = (int)piVar5;
  }
  else {
    piVar4[2] = (int)piVar5;
  }
  if ((int *)**(undefined4 **)(in_ECX + 4) == param_2) {
    piVar2 = piVar4;
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar2 = (int *)FUN_00aa7330(piVar5);
    }
    **(undefined4 **)(in_ECX + 4) = piVar2;
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int **)(iVar1 + 8) == param_2) {
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      uVar3 = FUN_00aaaa70(piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
  if ((char)param_2[5] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar2 = piVar4;
        if ((char)piVar5[5] != '\x01') break;
        piVar4 = (int *)*piVar2;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar2[2];
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar2 + 5) = 0;
            FUN_00aa9ed0(piVar2);
            piVar4 = (int *)piVar2[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00831e20(piVar4);
                piVar4 = (int *)piVar2[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar2[5];
              *(undefined1 *)(piVar2 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00aa9ed0(piVar2);
              break;
            }
LAB_00aa7bf8:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar2 + 5) = 0;
            FUN_00831e20(piVar2);
            piVar4 = (int *)*piVar2;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00aa7bf8;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00aa9ed0(piVar4);
              piVar4 = (int *)*piVar2;
            }
            *(char *)(piVar4 + 5) = (char)piVar2[5];
            *(undefined1 *)(piVar2 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00831e20(piVar2);
            break;
          }
        }
        piVar4 = (int *)piVar2[1];
        piVar5 = piVar2;
      } while (piVar2 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(piVar5 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

