// FUN_00a8c350 @ 00a8c350 body=[[00a8c350, 00a8c3d6]]


undefined4 FUN_00a8c350(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  
  if (((in_EAX == 0) || (piVar1 = *(int **)(in_EAX + 0x20), piVar1 == (int *)0x0)) ||
     (*piVar1 != in_EAX)) {
    return 0xfffffffe;
  }
  iVar2 = piVar1[1];
  do {
    switch(iVar2) {
    case 1:
    case 3:
      return 0xffffffff;
    case 2:
      piVar1[3] = *(int *)(in_EAX + 4);
      piVar1[1] = 4;
      iVar2 = piVar1[1];
      break;
    case 4:
      if (piVar1[3] != *(int *)(*piVar1 + 4)) {
        return 0xffffffff;
      }
      cVar3 = FUN_00a8c220();
      if (cVar3 == '\0') {
        return 0xffffffff;
      }
      if (((piVar1[3] == 0) && (cVar3 = FUN_00a8bd70(), cVar3 != '\0')) &&
         (piVar1[0x13] <= piVar1[0x14])) {
        piVar1[1] = 1;
        return 4;
      }
      return 3;
    default:
      return 0;
    }
  } while( true );
}

