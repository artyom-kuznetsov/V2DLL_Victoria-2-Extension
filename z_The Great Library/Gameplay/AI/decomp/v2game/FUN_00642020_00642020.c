// FUN_00642020 @ 00642020 body=[[00642020, 0064206d]]


int FUN_00642020(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)(*(int *)(in_EAX + 8) + 0x2a) != '\0') {
    iVar1 = *(int *)(in_EAX + 0xb8) - *(int *)(in_EAX + 0xb4) >> 2;
    iVar2 = 0;
    if (0 < iVar1) {
      puVar3 = *(undefined4 **)(in_EAX + 0xb4);
      do {
        if ((*(int *)*puVar3 != 0) && (**(int **)*puVar3 == param_1)) {
          return in_EAX + 0xac;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return 0;
}

