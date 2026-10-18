// FUN_009b43c0 @ 009b43c0 body=[[009b43c0, 009b440c] [009b4410, 009b44d0]]


void FUN_009b43c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_18 [20];
  
  *(undefined1 *)((int)in_ECX + 0x53) = 1;
  if ((int *)in_ECX[0x38] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x38] + 0x34))();
  }
  puVar1 = (undefined4 *)in_ECX[0x4c];
  if (*(char *)((int)in_ECX + 0x101) == '\0') {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 0x30))();
    }
  }
  else {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 0x34))();
    }
  }
  if (*(char *)((int)in_ECX + 0x146) == '\0') {
    if ((in_ECX[0x41] != 0) &&
       (iVar2 = (**(code **)(*(int *)(in_ECX[0x41] + 0x54) + 0x18))(auStack_18),
       999 < *(int *)(iVar2 + 4))) {
      (**(code **)(*(int *)in_ECX[0x41] + 0x34))();
    }
    if (in_ECX[0x41] != 0) {
      FUN_009cceb0();
    }
    (**(code **)(*(int *)in_ECX[0x30] + 0x34))();
    (**(code **)(*in_ECX + 0x6c))();
    return;
  }
  if ((((int *)in_ECX[0x41] != (int *)0x0) && (in_ECX[0x4e] == 0)) && ((char)in_ECX[0x50] == '\0'))
  {
    (**(code **)(*(int *)in_ECX[0x41] + 0x34))();
  }
  if (in_ECX[0x41] != 0) {
    FUN_009cceb0();
  }
  (**(code **)(*(int *)in_ECX[0x30] + 0x34))();
  (**(code **)(*in_ECX + 0x6c))();
  return;
}

