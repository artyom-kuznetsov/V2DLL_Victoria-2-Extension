// FUN_0066e940 @ 0066e940 body=[[0066e940, 0066e9a6] [0066e9aa, 0066ea25]]


void FUN_0066e940(void)

{
  float fVar1;
  int *piVar2;
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("click",5);
  local_8 = 0;
  piVar2 = (int *)FUN_009c7290();
  (**(code **)(*piVar2 + 0x60))(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  fVar1 = *(float *)(in_ECX + 0x1cc8) - (*(float *)(in_ECX + 0x1cc8) / 20.0) * 20.0 * 0.2;
  *(float *)(in_ECX + 0x1cc8) = fVar1;
  if (fVar1 < (float)*(int *)(in_ECX + 0x1cd0)) {
    *(float *)(in_ECX + 0x1cc8) = (float)*(int *)(in_ECX + 0x1cd0);
  }
  ExceptionList = local_10;
  return;
}

