// FUN_009f3d90 @ 009f3d90 body=[[009f3d90, 009f3dfc] [009f3e00, 009f3e08] [009f3e12, 009f3e3d] [009f3e41, 009f3e61] [009f3e67, 009f3e9b] [009f3e9f, 009f3ebd]]


void FUN_009f3d90(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3b9e9;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3d0d0;
  in_ECX[0xc] = &PTR_LAB_00e3d0f0;
  local_8 = 3;
  for (piVar1 = (int *)in_ECX[0x1d]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  if ((undefined4 *)in_ECX[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x12])(1);
  }
  if (in_ECX[0x1d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1d]);
  }
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  puVar3 = (undefined4 *)in_ECX[0x19];
  if (puVar3 == (undefined4 *)0x0) {
    in_ECX[0x19] = 0;
    in_ECX[0x1a] = 0;
    in_ECX[0x1b] = 0;
    local_8 = local_8 & 0xffffff00;
    in_ECX[0xc] = &PTR_FUN_00e3d0b0;
    FUN_009f47e0();
    *in_ECX = &PTR_FUN_00e3a544;
    FUN_009c1650();
    if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[5]);
    }
    in_ECX[9] = 0;
    in_ECX[10] = 0xf;
    *(undefined1 *)(in_ECX + 5) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar2 = (undefined4 *)in_ECX[0x1a];
  while( true ) {
    if (puVar3 == puVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x19]);
    }
    if (0xf < (uint)puVar3[5]) break;
    puVar3[5] = 0xf;
    puVar3[4] = 0;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar3);
}

