// FUN_007bfc30 @ 007bfc30 body=[[007bfc30, 007bfcc5] [007bfcda, 007bfd71] [007bfd75, 007bfd82]]


void FUN_007bfc30(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  piVar3 = *(int **)(in_ECX + 0x94);
  ExceptionList = &local_10;
  while (piVar3 != (int *)0x0) {
    if (*(int *)(*piVar3 + 300) == *(int *)(DAT_012588e8 + 0xb60)) {
      piVar3 = (int *)piVar3[2];
    }
    else {
      piVar1 = (int *)piVar3[2];
      if (*(char *)(in_ECX + 0xa0) == '\0') {
        iVar2 = piVar3[1];
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar1;
        }
        if (piVar1 != (int *)0x0) {
          piVar1[1] = iVar2;
        }
        if (piVar3 == *(int **)(in_ECX + 0x94)) {
          *(int **)(in_ECX + 0x94) = piVar1;
        }
        if (piVar3 == *(int **)(in_ECX + 0x98)) {
          *(int *)(in_ECX + 0x98) = iVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar3);
      }
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(in_ECX + 0x16c) = 1;
      piVar3 = piVar1;
    }
  }
  if (*(int *)(in_ECX + 0x9c) == 0) {
    FUN_007c3440();
  }
  FUN_007c2860(in_ECX);
  FUN_007c4420();
  FUN_007c6d40(in_ECX);
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x20))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("popview",7);
  local_8 = 0;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x4c) + 0x18) + 0x78))(local_2c);
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

