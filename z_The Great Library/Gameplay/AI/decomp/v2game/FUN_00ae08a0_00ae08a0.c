// FUN_00ae08a0 @ 00ae08a0 body=[[00ae08a0, 00ae0952]]


void FUN_00ae08a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b379cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddd91c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 4) = 0x65;
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[5] = param_1;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1ac) + 0x84);
  uVar2 = in_ECX[2];
  local_4 = 0;
  if (((uVar1 != uVar2) && (in_ECX[2] = uVar1, uVar2 < uVar1)) && ((uint)in_ECX[3] < uVar1)) {
    FUN_00b087f0(uVar1);
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      *(undefined1 *)(uVar2 + in_ECX[1]) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  ExceptionList = local_c;
  return;
}

