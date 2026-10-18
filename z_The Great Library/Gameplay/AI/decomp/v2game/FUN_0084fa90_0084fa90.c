// FUN_0084fa90 @ 0084fa90 body=[[0084fa90, 0084fb20]]


void FUN_0084fa90(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  undefined4 *puVar3;
  int local_8;
  
  if (*(char *)(in_ECX + 0x3c) != '\0') {
    piVar2 = (int *)(param_1 + 0x74);
    puVar3 = (undefined4 *)(in_ECX + 0x13c);
    local_8 = 8;
    do {
      for (piVar1 = (int *)*puVar3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (*piVar1 == param_1) {
          if (*(char *)(in_ECX + 0x1bc) == '\x01') {
            *piVar1 = 0;
          }
          else {
            FUN_005f2ae0(piVar1);
          }
          break;
        }
      }
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
        if (piVar1[2] != 0) {
          *(undefined4 *)(piVar1[2] + 0x74 + piVar1[1] * 4) = 0;
        }
        piVar1[2] = 0;
      }
      piVar2 = piVar2 + 1;
      puVar3 = puVar3 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

