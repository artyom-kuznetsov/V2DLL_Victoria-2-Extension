// FUN_009bcfc0 @ 009bcfc0 body=[[009bcfc0, 009bd022]]


undefined4 FUN_009bcfc0(int param_1)

{
  char cVar1;
  int *piVar2;
  int unaff_EDI;
  int local_8;
  
  param_1 = FUN_00462500(param_1);
  if (param_1 != *(int *)(unaff_EDI + 0x6b6c8)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar2 = &param_1;
      goto LAB_009bcfff;
    }
  }
  local_8 = *(int *)(unaff_EDI + 0x6b6c8);
  piVar2 = &local_8;
LAB_009bcfff:
  if (*piVar2 == *(int *)(unaff_EDI + 0x6b6c8)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(*piVar2 + 0x28) * 0x2c + 4 + unaff_EDI);
}

