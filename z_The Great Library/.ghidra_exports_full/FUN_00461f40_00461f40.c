// FUN_00461f40 @ 00461f40 body=[[00461f40, 00461f85]]


undefined4 FUN_00461f40(void)

{
  char cVar1;
  int *piVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  int local_c;
  int local_8;
  
  local_8 = FUN_00462500(unaff_EDI);
  if (local_8 != *(int *)(unaff_ESI + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar2 = &local_8;
      goto LAB_00461f72;
    }
  }
  local_c = *(int *)(unaff_ESI + 4);
  piVar2 = &local_c;
LAB_00461f72:
  if (*piVar2 != *(int *)(unaff_ESI + 4)) {
    return *(undefined4 *)(*piVar2 + 0x28);
  }
  return 0;
}

