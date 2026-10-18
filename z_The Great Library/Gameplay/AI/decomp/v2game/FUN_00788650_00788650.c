// FUN_00788650 @ 00788650 body=[[00788650, 007886c6]]


void FUN_00788650(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  
  while( true ) {
    iVar4 = in_ECX * 2 + 2;
    if (param_1 <= iVar4) break;
    iVar1 = *(int *)(in_EDX + -4 + iVar4 * 4);
    iVar2 = *(int *)(*(int *)(in_EDX + iVar4 * 4) + 0x5c);
    if (param_3 == '\0') {
      bVar3 = iVar2 < *(int *)(iVar1 + 0x5c);
    }
    else {
      bVar3 = *(int *)(iVar1 + 0x5c) < iVar2;
    }
    if (bVar3) {
      iVar4 = in_ECX * 2 + 1;
    }
    *(undefined4 *)(in_EDX + in_ECX * 4) = *(undefined4 *)(in_EDX + iVar4 * 4);
    in_ECX = iVar4;
  }
  if (iVar4 == param_1) {
    *(undefined4 *)(in_EDX + in_ECX * 4) = *(undefined4 *)(in_EDX + -4 + param_1 * 4);
  }
  FUN_00788920();
  return;
}

