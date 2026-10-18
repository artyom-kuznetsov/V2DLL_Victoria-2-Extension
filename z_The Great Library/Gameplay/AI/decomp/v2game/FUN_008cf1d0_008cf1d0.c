// FUN_008cf1d0 @ 008cf1d0 body=[[008cf1d0, 008cf232]]


void FUN_008cf1d0(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  
  if ((char)param_3 == '\0') {
    uStack_10 = param_2;
    puStack_14 = (undefined4 *)0x8cf1e8;
    cVar1 = (**(code **)(*in_ECX + 0x18))();
    if (cVar1 == '\0') {
      puStack_14 = &param_3;
      uStack_1c = 0x8cf1f6;
      iVar2 = FUN_008ce560();
      param_3 = auStack_2c;
      uStack_18 = 0xf;
      uStack_1c = 0;
      auStack_2c[0] = 0;
      FUN_00408ed0(iVar2 + 0x20,0,0xffffffff);
      FUN_0085bae0(param_1);
    }
  }
  return;
}

