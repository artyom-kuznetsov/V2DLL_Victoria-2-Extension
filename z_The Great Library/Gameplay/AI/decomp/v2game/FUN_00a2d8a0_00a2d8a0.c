// FUN_00a2d8a0 @ 00a2d8a0 body=[[00a2d8a0, 00a2d932] [00a2d936, 00a2d972] [00a2d976, 00a2d999] [00a2d99d, 00a2d9c8]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2d8a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e544;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3fbf0;
  local_8 = 2;
  FUN_00a2d7e0();
  iVar3 = in_ECX[0x50];
  _DAT_01258b3c = _DAT_01258b3c + -1;
  if (iVar3 != in_ECX[0x51]) {
    do {
      if (*(int **)(iVar3 + 0x1c) != (int *)0x0) {
        uVar2 = (**(code **)(**(int **)(iVar3 + 0x1c) + 0x44))();
        FUN_009962f0(uVar2);
      }
      iVar3 = iVar3 + 0x20;
    } while (iVar3 != in_ECX[0x51]);
  }
  if (0xf < (uint)in_ECX[0x61]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5c]);
  }
  in_ECX[0x61] = 0xf;
  in_ECX[0x60] = 0;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  puVar4 = (undefined4 *)in_ECX[0x50];
  if (puVar4 == (undefined4 *)0x0) {
    in_ECX[0x50] = 0;
    in_ECX[0x51] = 0;
    in_ECX[0x52] = 0;
    FUN_007d9930();
    ExceptionList = local_10;
    return;
  }
  puVar1 = (undefined4 *)in_ECX[0x51];
  while( true ) {
    if (puVar4 == puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x50]);
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar4);
}

