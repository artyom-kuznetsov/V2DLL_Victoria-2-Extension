// FUN_00a28900 @ 00a28900 body=[[00a28900, 00a28985]]


void FUN_00a28900(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0xec);
  *(undefined4 *)(in_ECX + 0x110) = DAT_00f092dc;
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(in_ECX + 0xf0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(in_ECX + 0xf4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *piVar1 = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  *(undefined1 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x10c) = 1;
  FUN_009f9630(piVar1,*(undefined4 *)(*(int *)(in_ECX + 0x58) + 100),4,0x14,0x102,1);
  return;
}

