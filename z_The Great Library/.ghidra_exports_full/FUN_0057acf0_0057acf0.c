// FUN_0057acf0 @ 0057acf0 body=[[0057acf0, 0057adee] [0057adf2, 0057ae15] [0057ae2b, 0057af33]]


void FUN_0057acf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_ECX;
  int *in_EDX;
  int iVar5;
  undefined4 *puVar6;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3cdb0;
  local_10 = ExceptionList;
  if (in_ECX != 0) {
    iVar5 = in_EDX[1];
    iVar4 = iVar5 - *in_EDX >> 2;
    if (0x3fffffffU - iVar4 < in_ECX) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar2 = iVar4 + in_ECX;
    local_18 = in_EDX[2] - *in_EDX >> 2;
    if (local_18 < uVar2) {
      if (0x3fffffff - (local_18 >> 1) < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (local_18 < uVar2) {
        local_18 = uVar2;
      }
      ExceptionList = &local_10;
      iVar4 = FUN_007055a0();
      local_8 = 0;
      FUN_0057b2c0(iVar4 + ((int)param_1 - *in_EDX >> 2) * 4,param_1);
      FUN_009d45d0(*in_EDX,param_1);
      FUN_009d45d0(param_1,param_1);
      iVar5 = *in_EDX;
      if (iVar5 == 0) {
        in_EDX[2] = iVar4 + local_18 * 4;
        in_EDX[1] = iVar4 + (in_ECX + (in_EDX[1] - iVar5 >> 2)) * 4;
        *in_EDX = iVar4;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar5);
    }
    if ((uint)(iVar5 - (int)param_1 >> 2) < in_ECX) {
      uVar3 = *param_2;
      ExceptionList = &local_10;
      FUN_009d45d0(param_1,param_1);
      local_8 = 2;
      FUN_0057b2c0(in_EDX[1],param_1);
      in_EDX[1] = in_EDX[1] + in_ECX * 4;
      puVar6 = (undefined4 *)(in_EDX[1] + in_ECX * -4);
      if (param_1 != puVar6) {
        do {
          *param_1 = uVar3;
          param_1 = param_1 + 1;
        } while (param_1 != puVar6);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      uVar3 = *param_2;
      puVar6 = (undefined4 *)(iVar5 + in_ECX * -4);
      ExceptionList = &local_10;
      iVar4 = FUN_009d45d0(puVar6,param_1);
      in_EDX[1] = iVar4;
      if (param_1 != puVar6) {
        iVar5 = iVar5 - (int)puVar6;
        do {
          puVar1 = puVar6 + -1;
          puVar6 = puVar6 + -1;
          *(undefined4 *)(iVar5 + (int)puVar6) = *puVar1;
        } while (param_1 != puVar6);
      }
      puVar6 = param_1;
      if (param_1 != param_1 + in_ECX) {
        do {
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
        } while (puVar6 != param_1 + in_ECX);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

