// FUN_0048e210 @ 0048e210 body=[[0048e210, 0048e250]]


undefined1 FUN_0048e210(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 4); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  uVar2 = FUN_005f2ae0(piVar1);
  FUN_0048dff0();
  FUN_0048e3b0();
  return uVar2;
}

