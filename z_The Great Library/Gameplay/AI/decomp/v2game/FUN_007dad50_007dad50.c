// FUN_007dad50 @ 007dad50 body=[[007dad50, 007dae0b] [007dae15, 007dae18]]


void FUN_007dad50(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  FUN_009bcda0();
  FUN_009bcda0();
  FUN_009bcda0();
  FUN_009bcda0();
  piVar1 = *(int **)(in_ECX + 0x98);
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x98) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x90);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  return;
}

