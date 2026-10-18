// FUN_00443b10 @ 00443b10 body=[[00443b10, 00443bc2]]


int FUN_00443b10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xa4 + param_2 * 4);
  iVar1 = *(int *)(param_2 * 0x10 + 4 + param_1);
  iVar6 = *(int *)(param_2 * 0x10 + 8 + param_1) - iVar1 >> 2;
  iVar4 = 0;
  do {
    iVar2 = *(int *)(iVar1 + iVar5 * 4);
    if (*(char *)(iVar2 + 0xd) == '\0') {
      if ((*(undefined4 **)(iVar2 + 0x14) != (undefined4 *)0x0) &&
         (*(char *)(iVar2 + 0xd) != '\x01')) {
        (**(code **)**(undefined4 **)(iVar2 + 0x14))(iVar2,1);
      }
      *(undefined1 *)(iVar2 + 0xd) = 1;
      FUN_0068f390();
      if (iVar5 < iVar6 + -1) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0xa4 + param_2 * 4) = iVar5;
      return iVar2;
    }
    iVar5 = iVar5 + 1;
    if (iVar6 <= iVar5) {
      iVar5 = 0;
    }
    bVar3 = iVar4 < iVar6;
    iVar4 = iVar4 + 1;
  } while (bVar3);
  *(undefined4 *)(param_1 + 0xa4 + param_2 * 4) = 0;
  return 0;
}

