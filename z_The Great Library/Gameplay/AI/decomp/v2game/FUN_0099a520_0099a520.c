// FUN_0099a520 @ 0099a520 body=[[0099a520, 0099a554]]


void FUN_0099a520(void)

{
  int iVar1;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x6bc8c) = *(int *)(unaff_ESI + 0x6bc8c) + 1;
  if (*(char *)(unaff_ESI + 0x6bca0) != '\0') {
    iVar1 = (**(code **)(**(int **)(unaff_ESI + 100) + 0x44))(*(int **)(unaff_ESI + 100),0,0,0,0);
    if ((iVar1 != 0) && (iVar1 == -0x7789f798)) {
      *(undefined1 *)(unaff_ESI + 0x6bca0) = 0;
    }
  }
  return;
}

