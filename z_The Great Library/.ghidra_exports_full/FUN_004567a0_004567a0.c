// FUN_004567a0 @ 004567a0 body=[[004567a0, 004567f9] [00456800, 0045683b] [0045684a, 0045689f]]


void FUN_004567a0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)**(int **)(in_ECX + 0xc);
  if (piVar5 != *(int **)(in_ECX + 0xc)) {
    do {
      piVar6 = piVar5;
      if (*(char *)((int)piVar5 + 0x21) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x21);
          piVar3 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x21);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
      iVar2 = *(int *)(piVar5[5] + 4);
      if (*(char *)(iVar2 + 0x15) == '\0') {
        FUN_00aa9f30(*(undefined4 *)(iVar2 + 8));
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *(int *)(piVar5[5] + 4) = piVar5[5];
      *(int *)piVar5[5] = piVar5[5];
      *(int *)(piVar5[5] + 8) = piVar5[5];
      piVar5[6] = 0;
      piVar5 = piVar6;
    } while (piVar6 != *(int **)(in_ECX + 0xc));
  }
  FUN_00456c70(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 4));
  *(int *)(*(int *)(in_ECX + 0xc) + 4) = *(int *)(in_ECX + 0xc);
  *(undefined4 *)*(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(int *)(*(int *)(in_ECX + 0xc) + 8) = *(int *)(in_ECX + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

