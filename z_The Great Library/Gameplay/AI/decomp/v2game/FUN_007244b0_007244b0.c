// FUN_007244b0 @ 007244b0 body=[[007244b0, 00724570]]


undefined4 *
FUN_007244b0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  
  for (puVar3 = in_ECX; (param_1 != param_2 && (puVar3 != in_EAX)); puVar3 = puVar3 + 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
  }
  iVar2 = (int)puVar3 - (int)in_ECX >> 2;
  if (1 < iVar2) {
    FUN_00724d00(param_3,param_4);
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    cVar1 = FUN_00719d30(*in_ECX);
    if (cVar1 != '\0') {
      FUN_00724580(iVar2,param_1,param_3,param_4);
    }
  }
  FUN_00724f80(param_3,param_4);
  return puVar3;
}

