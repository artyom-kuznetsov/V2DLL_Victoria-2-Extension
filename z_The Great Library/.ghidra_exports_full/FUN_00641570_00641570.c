// FUN_00641570 @ 00641570 body=[[00641570, 00641588] [00641590, 006415b4]]


void FUN_00641570(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  FUN_009e4070();
  for (iVar1 = *(int *)(in_ECX + 0x4e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x4c0) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x38))();
  }
  return;
}

