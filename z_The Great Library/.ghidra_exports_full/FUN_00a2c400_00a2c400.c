// FUN_00a2c400 @ 00a2c400 body=[[00a2c400, 00a2c48d]]


void FUN_00a2c400(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xd8);
  if (iVar1 != 0) {
    FUN_00ad7d30();
    (*(code *)PTR__free_00f01b10)(iVar1);
    *(undefined4 *)(in_ECX + 0xd8) = 0;
  }
  piVar2 = *(int **)(in_ECX + 0x94);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  piVar2 = *(int **)(in_ECX + 0x98);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0x98) = 0;
  }
  piVar2 = *(int **)(in_ECX + 0x9c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  piVar2 = *(int **)(in_ECX + 0xa0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(in_ECX + 0xa0) = 0;
  }
  return;
}

