// FUN_007d9660 @ 007d9660 body=[[007d9660, 007d96f6]]


void FUN_007d9660(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  while (param_2 < in_ECX) {
    iVar4 = (in_ECX + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar4 * 0xc);
    iVar1 = param_1 + iVar4 * 0xc;
    if (*param_3 <= iVar3) {
      if (*param_3 < iVar3) break;
      if (((*(char *)(iVar1 + 8) == '\0') || ((char)param_3[2] != '\0')) &&
         ((*(char *)(iVar1 + 8) != (char)param_3[2] || (param_3 + 1 <= (int *)(iVar1 + 4U)))))
      break;
    }
    piVar2 = (int *)(param_1 + in_ECX * 0xc);
    *piVar2 = iVar3;
    piVar2[1] = *(int *)(iVar1 + 4);
    *(undefined1 *)(piVar2 + 2) = *(undefined1 *)(iVar1 + 8);
    in_ECX = iVar4;
  }
  piVar2 = (int *)(param_1 + in_ECX * 0xc);
  *piVar2 = *param_3;
  piVar2[1] = param_3[1];
  *(char *)(piVar2 + 2) = (char)param_3[2];
  return;
}

