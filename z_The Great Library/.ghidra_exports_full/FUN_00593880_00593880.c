// FUN_00593880 @ 00593880 body=[[00593880, 0059398c] [00593990, 00593a9a]]


undefined4 * FUN_00593880(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined4 in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3faba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCombatant::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_8 = 4;
  uStack_7 = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 6) = param_2._0_1_;
  param_1[7] = in_ECX;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  local_14 = 0;
LAB_00593900:
  do {
    if (DAT_0125fdd8 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00aae9af(0x1c);
      local_8 = 5;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0x1ff;
        *puVar2 = 0;
        param_2 = puVar2;
        _Dst = (void *)FUN_00aad56b(0x7fc);
        puVar2[2] = _Dst;
        _memset(_Dst,0,puVar2[1] * 4);
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
      }
      _local_8 = CONCAT31(uStack_7,6);
      if ((puVar2 != DAT_0125fdd8) && (param_2 = DAT_0125fdd8, DAT_0125fdd8 != (undefined4 *)0x0)) {
        FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_2);
      }
      local_8 = 4;
      DAT_0125fdd8 = puVar2;
    }
    if ((int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2 <= local_14) {
      ExceptionList = local_10;
      return param_1;
    }
    puVar2 = (undefined4 *)param_1[0x12];
    param_2 = (undefined4 *)0x0;
    if (&param_2 < puVar2) {
      puVar1 = (undefined4 *)param_1[0x11];
      if (&param_2 < puVar1) goto LAB_005939f1;
      if (puVar2 == (undefined4 *)param_1[0x13]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x12] =
             *(undefined4 *)(param_1[0x11] + ((int)&param_2 - (int)puVar1 >> 2) * 4);
      }
    }
    else {
LAB_005939f1:
      if (puVar2 == (undefined4 *)param_1[0x13]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x12] = 0;
      }
    }
    param_1[0x12] = param_1[0x12] + 4;
    puVar2 = (undefined4 *)param_1[0x17];
    param_2 = (undefined4 *)0x0;
    if (&param_2 < puVar2) {
      puVar1 = (undefined4 *)param_1[0x16];
      if (&param_2 < puVar1) goto LAB_00593a5f;
      if (puVar2 == (undefined4 *)param_1[0x18]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x17] =
             *(undefined4 *)(param_1[0x16] + ((int)&param_2 - (int)puVar1 >> 2) * 4);
        param_1[0x17] = param_1[0x17] + 4;
        local_14 = local_14 + 1;
        goto LAB_00593900;
      }
    }
    else {
LAB_00593a5f:
      if (puVar2 == (undefined4 *)param_1[0x18]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x17] = 0;
      }
    }
    param_1[0x17] = param_1[0x17] + 4;
    local_14 = local_14 + 1;
  } while( true );
}

