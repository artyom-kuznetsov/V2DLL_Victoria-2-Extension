// FUN_00475af0 @ 00475af0 body=[[00475af0, 00475c19] [00475c1d, 00475d48]]


void FUN_00475af0(undefined4 param_1)

{
  float fVar1;
  int in_ECX;
  undefined1 auStack_2a8 [20];
  uint uStack_294;
  undefined4 uStack_28c;
  char acStack_288 [256];
  undefined4 uStack_188;
  char acStack_184 [308];
  void *pvStack_50;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_00b6083b;
  pvStack_4c = ExceptionList;
  ExceptionList = &pvStack_4c;
  FUN_009d7ca0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0xdc) + 4))(param_1);
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_009a0940();
  uStack_28c = 0xc;
  _sprintf(acStack_288,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_00475660(auStack_2a8);
  puStack_48 = (undefined1 *)0x0;
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  puStack_48 = (undefined1 *)0xffffffff;
  if (0xf < uStack_294) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009a0940();
  uStack_28c = 0xe;
  _sprintf(acStack_288,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_0043cd10(in_ECX + 0x168,0);
  fVar1 = *(float *)(in_ECX + 0x178);
  FUN_009a0940();
  uStack_28c = 0xd;
  _sprintf(acStack_288,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  uStack_188 = 0xe;
  _sprintf(acStack_184,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  ExceptionList = pvStack_50;
  return;
}

