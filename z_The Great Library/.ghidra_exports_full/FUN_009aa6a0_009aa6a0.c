// FUN_009aa6a0 @ 009aa6a0 body=[[009aa6a0, 009aa762] [009aa768, 009aa784] [009aa78a, 009aa7b6]]


int * FUN_009aa6a0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b41c91;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  local_1c = *(undefined4 **)(param_1 + 4);
  local_14 = 1;
  while( true ) {
    if ((local_1c < *(undefined4 **)(param_1 + 4)) || (*(undefined4 **)(param_1 + 8) <= local_1c)) {
      ExceptionList = local_10;
      return param_2;
    }
    puVar2 = (undefined4 *)(**(code **)(*(int *)*local_1c + 0x14))(&local_2c);
    local_8 = 1;
    iVar3 = param_2[1] - *param_2;
    iVar1 = iVar3 >> 0x1f;
    if (iVar3 / 0x1c + iVar1 == iVar1) {
      FUN_004134a0(puVar2);
    }
    else {
      FUN_009add20(param_2,param_2[1],*puVar2,puVar2[1],param_1);
    }
    local_8 = local_8 & 0xffffff00;
    puVar2 = local_2c;
    if (local_2c != (undefined4 *)0x0) break;
    local_1c = local_1c + 1;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
  }
  while( true ) {
    if (puVar2 == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    if (0xf < (uint)puVar2[5]) break;
    puVar2[5] = 0xf;
    puVar2[4] = 0;
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar2);
}

