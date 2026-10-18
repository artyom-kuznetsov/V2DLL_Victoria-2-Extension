// FUN_00a1bd60 @ 00a1bd60 body=[[00a1bd60, 00a1bead] [00a1beb1, 00a1bf06]]


/* WARNING: Type propagation algorithm not settling */

int * FUN_00a1bd60(void)

{
  char *in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_94 [2];
  undefined1 local_8c [4];
  int local_88;
  int local_78;
  int local_74;
  int local_70 [22];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (in_EAX == (char *)0x0) {
    return (int *)0x0;
  }
  iVar5 = 0;
  iVar1 = FUN_00a1bbe0();
  if (iVar1 == -1) {
    iVar5 = -1;
  }
  local_10 = iVar1;
  if (*in_EAX == '\0') {
    *(int *)(in_EAX + 0x1c) = iVar1;
  }
  else if (in_EAX[1] == '\0') {
    iVar5 = -1;
  }
  else {
    SetFilePointer(*(HANDLE *)(in_EAX + 4),*(int *)(in_EAX + 0xc) + iVar1,(PLONG)0x0,0);
  }
  iVar2 = FUN_00a1bae0(&local_8);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1ba50(&local_8);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1ba50(&local_14);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1ba50(local_94 + 1);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1ba50(&local_c);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  if (((local_c != local_94[1]) || (local_14 != 0)) || (local_8 != 0)) {
    iVar5 = -0x67;
  }
  iVar2 = FUN_00a1bae0(&local_74);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1bae0(local_70);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  iVar2 = FUN_00a1ba50(local_8c);
  if (iVar2 != 0) {
    iVar5 = -1;
  }
  if (((uint)(local_74 + local_70[0]) <= (uint)(*(int *)(in_EAX + 0xc) + iVar1)) && (iVar5 == 0)) {
    local_88 = ((*(int *)(in_EAX + 0xc) - local_74) - local_70[0]) + local_10;
    local_78 = local_10;
    local_18 = 0;
    in_EAX[0xc] = '\0';
    in_EAX[0xd] = '\0';
    in_EAX[0xe] = '\0';
    in_EAX[0xf] = '\0';
    piVar3 = _malloc(0x80);
    piVar4 = local_94;
    piVar6 = piVar3;
    for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    FUN_00a1c1c0();
    return piVar3;
  }
  if (in_EAX[0x10] != '\0') {
    CloseHandle(*(HANDLE *)(in_EAX + 4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

