// FUN_0099eea0 @ 0099eea0 body=[[0099eea0, 0099eeda]]


void FUN_0099eea0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *in_EDX;
  
  if (param_1 != in_EDX) {
    puVar2 = param_1 + 2;
    do {
      if (in_EAX != (undefined4 *)0x0) {
        *in_EAX = &PTR_FUN_00e384bc;
        in_EAX[1] = puVar2[-1];
        *in_EAX = &PTR_FUN_00e40cd8;
        in_EAX[2] = *puVar2;
      }
      puVar1 = puVar2 + 1;
      in_EAX = in_EAX + 3;
      puVar2 = puVar2 + 3;
    } while (puVar1 != in_EDX);
  }
  return;
}

