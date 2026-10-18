// FUN_0084ac50 @ 0084ac50 body=[[0084ac50, 0084ac9f]]


undefined4 FUN_0084ac50(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int local_8;
  
  piVar1 = *(int **)(in_EAX + 0x214);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_004e9470(*(undefined4 *)(iVar2 + 0xcc));
  } while (local_8 == 0);
  return 1;
}

