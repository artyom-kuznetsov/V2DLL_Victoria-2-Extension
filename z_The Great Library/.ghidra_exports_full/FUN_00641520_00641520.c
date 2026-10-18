// FUN_00641520 @ 00641520 body=[[00641520, 00641538] [00641540, 00641564]]


void FUN_00641520(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 1;
  FUN_009e4490();
  for (iVar1 = *(int *)(in_ECX + 0x4e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x4c0) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x34))();
  }
  return;
}

