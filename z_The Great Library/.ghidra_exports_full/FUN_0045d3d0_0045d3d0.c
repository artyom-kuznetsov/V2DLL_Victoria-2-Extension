// FUN_0045d3d0 @ 0045d3d0 body=[[0045d3d0, 0045d463]]


void FUN_0045d3d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  
  iVar1 = param_1;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (in_EDX <= iVar2) break;
    if (*(int *)(in_ECX + -4 + iVar2 * 8) < *(int *)(in_ECX + 4 + iVar2 * 8)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar2 * 8);
    *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar2 * 8);
    iVar1 = iVar2;
  }
  if (iVar2 == in_EDX) {
    *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + -8 + in_EDX * 8);
    *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + -4 + in_EDX * 8);
    iVar1 = in_EDX + -1;
  }
  while ((param_1 < iVar1 &&
         (iVar2 = (iVar1 + -1) / 2, (int)param_2[1] < *(int *)(in_ECX + 4 + iVar2 * 8)))) {
    *(undefined4 *)(in_ECX + iVar1 * 8) = *(undefined4 *)(in_ECX + iVar2 * 8);
    *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = *(undefined4 *)(in_ECX + 4 + iVar2 * 8);
    iVar1 = iVar2;
  }
  *(undefined4 *)(in_ECX + iVar1 * 8) = *param_2;
  *(undefined4 *)(in_ECX + 4 + iVar1 * 8) = param_2[1];
  return;
}

