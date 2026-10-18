// FUN_0067f070 @ 0067f070 body=[[0067f070, 0067f127] [0067f131, 0067f197]]


void FUN_0067f070(int param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  if (in_EAX[1] != *(int *)(in_ECX + 0xcec)) {
    FUN_0067f000();
    *(undefined4 *)(in_ECX + 0xce8) = *in_EAX;
    *(undefined4 *)(in_ECX + 0xcec) = in_EAX[1];
  }
  if (*(int *)(in_ECX + 0xcf0) < *(int *)(in_ECX + 0xb0c)) {
    *(int *)(in_ECX + 0xcf0) = *(int *)(in_ECX + 0xb0c);
    iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xd0) / 1000;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    if (iVar2 <= *(int *)(in_ECX + 0xcdc)) {
      piVar3 = *(int **)(in_ECX + 0xcd4);
      *(int *)(in_ECX + 0xce4) = *(int *)(in_ECX + 0xce4) - *piVar3;
      if (piVar3 != (int *)0x0) {
        if (*(char *)(in_ECX + 0xce0) == '\0') {
          iVar2 = piVar3[2];
          *(int *)(in_ECX + 0xcd4) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(in_ECX + 0xcd8) = 0;
          }
          else {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar3);
        }
        *(undefined1 *)(piVar3 + 3) = 1;
      }
    }
    iVar2 = *(int *)(in_ECX + 0xcd8);
    piVar3 = (int *)FUN_00aae9af(0x10);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_1;
      piVar3[1] = iVar2;
      piVar3[2] = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0xcdc);
    *(int **)(in_ECX + 0xcd8) = piVar3;
    *(int *)(in_ECX + 0xcdc) = iVar1 + 1;
    if (iVar1 != 0) {
      *(int **)(iVar2 + 8) = piVar3;
      *(int *)(in_ECX + 0xce4) = *(int *)(in_ECX + 0xce4) + param_1;
      return;
    }
    *(int **)(in_ECX + 0xcd4) = piVar3;
    *(int *)(in_ECX + 0xce4) = *(int *)(in_ECX + 0xce4) + param_1;
  }
  return;
}

