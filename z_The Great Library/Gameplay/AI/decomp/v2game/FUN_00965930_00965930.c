// FUN_00965930 @ 00965930 body=[[00965930, 009659ee]]


int FUN_00965930(char param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 == '\0') {
    piVar6 = *(int **)(*(int *)(in_EAX + 100) + 0xd8);
    iVar4 = *(int *)(in_EAX + 0x40) - *(int *)(in_EAX + 0x3c) >> 2;
    while (piVar6 != (int *)0x0) {
      piVar2 = (int *)*piVar6;
      piVar6 = (int *)piVar6[2];
      cVar3 = (**(code **)(*piVar2 + 0x34))();
      if (cVar3 != '\0') {
        if ((piVar2[0x25] == *(int *)(in_EAX + 0xc)) && (piVar2[0x24] == *(int *)(in_EAX + 8))) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  else {
    iVar4 = 0;
    iVar5 = *(int *)(in_EAX + 0x40) - *(int *)(in_EAX + 0x3c) >> 2;
    if (0 < iVar5) {
      piVar6 = *(int **)(in_EAX + 0x3c);
      do {
        uVar1 = *(undefined4 *)(*piVar6 + 0x60);
        if ((((char)uVar1 == 'R') && ((char)((uint)uVar1 >> 8) == 'E')) &&
           ((char)((uint)uVar1 >> 0x10) == 'B')) {
          iVar4 = iVar4 + 1;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return iVar4;
    }
  }
  return iVar4;
}

