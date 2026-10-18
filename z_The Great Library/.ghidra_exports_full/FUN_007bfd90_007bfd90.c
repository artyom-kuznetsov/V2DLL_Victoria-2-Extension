// FUN_007bfd90 @ 007bfd90 body=[[007bfd90, 007bfe0f]]


void FUN_007bfd90(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x58) != '\0') {
    *(undefined1 *)(in_ECX + 0x58) = 0;
    FUN_007c2860(in_ECX);
    FUN_007c4420();
    FUN_007c6d40(in_ECX);
  }
  piVar1 = *(int **)(in_ECX + 0x19c);
  if (piVar1 != (int *)0x0) {
    if (*(char *)(in_ECX + 0x1a4) == '\0') {
      if (*(char *)(*piVar1 + 0x67) != '\0') {
        FUN_00748d90(piVar1);
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x1a4) = 0;
      FUN_007bfe20();
    }
  }
  FUN_007c2a40(in_ECX);
  if (*(int *)(in_ECX + 0xb4) != *(int *)(DAT_012588e8 + 0xb0c)) {
    *(int *)(in_ECX + 0xb4) = *(int *)(DAT_012588e8 + 0xb0c);
    FUN_007c4420();
  }
  return;
}

