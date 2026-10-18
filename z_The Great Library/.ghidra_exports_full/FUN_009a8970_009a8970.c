// FUN_009a8970 @ 009a8970 body=[[009a8970, 009a89d2]]


void FUN_009a8970(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x142) != '\0') {
    if (*(char *)(in_ECX + 0x38) != '\0') {
      if (*(int *)(in_ECX + 0x6c) == 0) {
        *(undefined4 *)(in_ECX + 0x6c) = 2;
        *(undefined1 *)(in_ECX + 0x140) = 0;
        FUN_009a8550(in_ECX);
        return;
      }
      if (*(char *)(in_ECX + 0x38) != '\0') goto LAB_009a89c2;
    }
    iVar1 = *(int *)(in_ECX + 0x6c);
    if (iVar1 != 1) {
      if ((iVar1 != 0) && (iVar1 != 2)) {
        FUN_009a8d50();
      }
      *(undefined4 *)(in_ECX + 0x6c) = 0;
    }
  }
LAB_009a89c2:
  *(undefined1 *)(in_ECX + 0x140) = 0;
  FUN_009a8550(in_ECX);
  return;
}

