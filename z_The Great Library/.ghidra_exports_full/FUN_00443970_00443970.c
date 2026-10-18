// FUN_00443970 @ 00443970 body=[[00443970, 004439ce]]


bool FUN_00443970(void)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  piVar2 = (int *)(in_ECX + 4);
  local_c = 5;
  do {
    iVar3 = piVar2[1] - *piVar2 >> 2;
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        cVar1 = (**(code **)(**(int **)(*piVar2 + iVar4 * 4) + 0x18))();
        if (cVar1 == '\0') {
          local_8 = local_8 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    piVar2 = piVar2 + 4;
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8 == 0;
}

