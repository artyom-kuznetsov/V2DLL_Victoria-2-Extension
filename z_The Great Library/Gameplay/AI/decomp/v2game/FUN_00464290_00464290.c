// FUN_00464290 @ 00464290 body=[[00464290, 004642c9]]


void FUN_00464290(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (in_ECX != param_1) {
    puVar1 = in_EAX;
    puVar2 = in_ECX;
    do {
      *puVar1 = *puVar2;
      FUN_00408ed0((int)in_ECX + (4 - (int)in_EAX) + (int)puVar1,0,0xffffffff);
      puVar2 = puVar2 + 8;
      puVar1 = puVar1 + 8;
    } while (puVar2 != param_1);
  }
  return;
}

