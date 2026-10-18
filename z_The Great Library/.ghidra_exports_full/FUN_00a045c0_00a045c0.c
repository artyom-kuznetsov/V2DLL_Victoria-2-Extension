// FUN_00a045c0 @ 00a045c0 body=[[00a045c0, 00a046f3]]


undefined4 * FUN_00a045c0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4155e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  *param_1 = &PTR_FUN_00e3e8a4;
  puVar5 = param_1 + 0xf;
  *puVar5 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_009beeb0(iVar3 + 0x3c);
  }
  else {
    local_14 = 0;
    if (0 < (int)(*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) & 0xfffffffcU)) {
      do {
        param_2 = FUN_00aae9af(0xa0);
        local_8._0_1_ = 2;
        if (param_2 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00a16220(param_2);
        }
        local_8._0_1_ = 1;
        puVar1 = (undefined4 *)param_1[0x10];
        param_2 = iVar4;
        if (&param_2 < puVar1) {
          puVar2 = (undefined4 *)*puVar5;
          if (&param_2 < puVar2) goto LAB_00a046ad;
          if (puVar1 == (undefined4 *)param_1[0x11]) {
            FUN_00a513f0();
          }
          if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
            *(undefined4 *)param_1[0x10] =
                 *(undefined4 *)(*puVar5 + ((int)&param_2 - (int)puVar2 >> 2) * 4);
          }
        }
        else {
LAB_00a046ad:
          if (puVar1 == (undefined4 *)param_1[0x11]) {
            FUN_00a513f0();
          }
          if ((int *)param_1[0x10] != (int *)0x0) {
            *(int *)param_1[0x10] = iVar4;
          }
        }
        param_1[0x10] = param_1[0x10] + 4;
        local_14 = local_14 + 1;
        if (*(int *)(iVar3 + 0x40) - *(int *)(iVar3 + 0x3c) >> 2 <= local_14) {
          ExceptionList = local_10;
          return param_1;
        }
      } while( true );
    }
  }
  ExceptionList = local_10;
  return param_1;
}

