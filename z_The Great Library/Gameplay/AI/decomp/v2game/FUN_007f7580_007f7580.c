// FUN_007f7580 @ 007f7580 body=[[007f7580, 007f75c8]]


void FUN_007f7580(void)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  int in_ECX;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = in_EAX;
  *(int *)(unaff_ESI + 0x14) = in_ECX;
  if (*(char *)(*(int *)(*(int *)(unaff_ESI + 0x3c) + 0x6bc48) + 0x50) != '\0') {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(unaff_ESI + 0x44) + 0x38))();
    cVar1 = FUN_0099cb10(*(undefined4 *)(unaff_ESI + 0x3c),in_ECX + 0x1c,*(undefined4 *)*puVar2);
    if (cVar1 != '\0') {
      FUN_007f8bf0(unaff_ESI);
      FUN_0099cef0();
      return;
    }
  }
  return;
}

