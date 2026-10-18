// FUN_00576720 @ 00576720 body=[[00576720, 00576788]]


void FUN_00576720(int param_1,int param_2)

{
  int *in_EAX;
  int in_ECX;
  int iVar1;
  int unaff_ESI;
  
  if (((DAT_01258734 != 0) && (in_ECX != DAT_01258734 + 0x10)) && (in_ECX != 0)) {
    iVar1 = *(int *)(*(int *)(unaff_ESI + (param_2 + 0x17 + param_1 * 4) * 0x10) +
                    *(int *)(*(int *)(in_ECX + 0x80) + 8) * 4);
    if (*(char *)(in_ECX + 0x13c) != '\0') {
      *in_EAX = iVar1 + *(int *)(unaff_ESI + 0x270);
      return;
    }
    if (*(char *)(in_ECX + 0x13d) != '\0') {
      iVar1 = iVar1 + *(int *)(unaff_ESI + 0x274);
    }
    *in_EAX = iVar1;
    return;
  }
  *in_EAX = 0;
  return;
}

