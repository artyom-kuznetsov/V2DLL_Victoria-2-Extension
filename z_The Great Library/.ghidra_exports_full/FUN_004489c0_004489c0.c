// FUN_004489c0 @ 004489c0 body=[[004489c0, 00448a5b]]


undefined4 *
FUN_004489c0(undefined4 *param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  size_t sVar4;
  undefined1 local_c [8];
  
  while( true ) {
    pvVar2 = _memchr(param_2,0,param_3);
    sVar4 = param_3;
    if (pvVar2 != (void *)0x0) {
      sVar4 = (int)pvVar2 - (int)param_2;
    }
    puVar3 = (undefined4 *)FUN_00448950(local_c,param_5,param_6,sVar4);
    param_5 = *puVar3;
    param_6 = puVar3[1];
    if (param_3 - sVar4 == 0) break;
    if ((char)param_4 != '\0') {
      puVar3 = (undefined4 *)FUN_00448540(*puVar3,puVar3[1],param_4);
      param_5 = *puVar3;
      param_6 = puVar3[1];
    }
    param_2 = (void *)((int)param_2 + sVar4 + 1);
    param_3 = (param_3 - sVar4) - 1;
  }
  uVar1 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar1;
  return param_1;
}

