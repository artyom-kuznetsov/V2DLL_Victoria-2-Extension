// FUN_007d95b0 @ 007d95b0 body=[[007d95b0, 007d965d]]


void FUN_007d95b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int unaff_ESI;
  
  do {
    iVar5 = in_ECX * 2 + 2;
    if (param_1 <= iVar5) {
      if (iVar5 == param_1) {
        iVar5 = unaff_ESI + -0xc + param_1 * 0xc;
        puVar2 = (undefined4 *)(unaff_ESI + in_ECX * 0xc);
        *puVar2 = *(undefined4 *)(unaff_ESI + -0xc + param_1 * 0xc);
        puVar2[1] = *(undefined4 *)(iVar5 + 4);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar5 + 8);
      }
      FUN_007d9660();
      return;
    }
    iVar3 = *(int *)(unaff_ESI + iVar5 * 0xc);
    iVar4 = *(int *)(unaff_ESI + -0xc + iVar5 * 0xc);
    iVar1 = unaff_ESI + iVar5 * 0xc;
    if (iVar3 < iVar4) {
LAB_007d95f8:
      iVar5 = in_ECX * 2 + 1;
    }
    else if (iVar3 <= iVar4) {
      if (((*(char *)(iVar1 + 8) != '\0') && (*(char *)(iVar1 + -4) == '\0')) ||
         ((*(char *)(iVar1 + 8) == *(char *)(iVar1 + -4) && (iVar1 + 4U < iVar1 - 8U))))
      goto LAB_007d95f8;
    }
    iVar1 = unaff_ESI + iVar5 * 0xc;
    puVar2 = (undefined4 *)(unaff_ESI + in_ECX * 0xc);
    *puVar2 = *(undefined4 *)(unaff_ESI + iVar5 * 0xc);
    puVar2[1] = *(undefined4 *)(iVar1 + 4);
    *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(iVar1 + 8);
    in_ECX = iVar5;
  } while( true );
}

